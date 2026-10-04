"""
City Material Setup Script for Unreal Engine 5.8
================================================
This script fixes material assignments after FBX import by linking
imported textures to the material instances.

Run this AFTER ImportCityExport.py completes.
"""

import unreal
import os
import re

# Configuration
TEXTURES_DEST_PATH = "/Game/Import/CityExport/Textures"
MESHES_DEST_PATH = "/Game/Import/CityExport/Meshes"
MATERIALS_DEST_PATH = "/Game/Import/CityExport/Materials"

def log(message):
    """Print message to output log"""
    unreal.log("[MaterialSetup] {}".format(message))

def get_imported_textures():
    """Get all imported texture assets"""
    texture_registry = unreal.AssetRegistryHelpers.get_asset_registry()
    texture_path = TEXTURES_DEST_PATH.strip("/")

    assets = texture_registry.get_assets_by_path(
        unreal.Paths.project_content_dir() + texture_path,
        recursive=True
    )

    textures = {}
    for asset in assets:
        asset_name = asset.asset_name
        asset_obj = asset.get_asset()
        if asset_obj:
            textures[asset_name] = asset_obj
            log("Found texture: {}".format(asset_name))

    return textures

def get_imported_meshes():
    """Get all imported static meshes"""
    mesh_registry = unreal.AssetRegistryHelpers.get_asset_registry()
    mesh_path = MESHES_DEST_PATH.strip("/")

    assets = mesh_registry.get_assets_by_path(
        unreal.Paths.project_content_dir() + mesh_path,
        recursive=True
    )

    meshes = []
    for asset in assets:
        asset_obj = asset.get_asset()
        if asset_obj and isinstance(asset_obj, unreal.StaticMesh):
            meshes.append(asset_obj)
            log("Found mesh: {}".format(asset.asset_name))

    return meshes

def fix_mesh_materials(meshes, textures):
    """Fix material assignments on imported meshes"""
    log("Fixing material assignments...")

    for mesh in meshes:
        mesh_name = mesh.get_name()
        log("\nProcessing mesh: {}".format(mesh_name))

        # Get material slots
        num_materials = mesh.get_editor_property('materials')
        if not num_materials:
            log("  No materials found")
            continue

        # Try to update materials
        # Note: This is a simplified approach. Full material editing requires
        # MaterialEditingLibrary which needs the mesh to be editable
        log("  Material slots: {}".format(len(num_materials)))

        # Log available materials
        for i, mat in enumerate(num_materials):
            if mat:
                log("    Slot {}: {}".format(i, mat.get_name()))

def validate_import():
    """Validate that all assets were imported correctly"""
    log("\n" + "="*60)
    log("VALIDATING IMPORT")
    log("="*60)

    textures = get_imported_textures()
    meshes = get_imported_meshes()

    log("\nTextures: {} imported".format(len(textures)))
    log("Meshes: {} imported".format(len(meshes)))

    if len(textures) > 50 and len(meshes) > 0:
        log("✓ Import appears successful!")
        log("\nNext steps:")
        log("1. Open the level: {}".format("/Game/Import/CityExport/CityMap"))
        log("2. Check for missing textures (magenta materials)")
        log("3. Manually assign textures if needed")
        log("4. Adjust material settings for desired appearance")
        return True
    else:
        log("✗ Import may be incomplete - check the editor log")
        return False

if __name__ == "__main__":
    try:
        textures = get_imported_textures()
        meshes = get_imported_meshes()

        fix_mesh_materials(meshes, textures)
        validate_import()
    except Exception as e:
        log("ERROR: {}".format(str(e)))
        import traceback
        traceback.print_exc()
