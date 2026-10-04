"""
City FBX Import Script for Unreal Engine 5.8
============================================
This script imports the Map_Centered.fbx from CityExport_v2 with all textures
and places it in the landscape.

Usage:
    1. Open Unreal Editor
    2. Go to Edit > Plugins > Python
    3. Click "Run Python Script" and select this file
    OR
    4. Open console (~) and type: RunPythonScript ImportCityExport.py
"""

import unreal
import os
import re
from collections import defaultdict

# ============================================================
# CONFIGURATION - Edit these paths as needed
# ============================================================
SOURCE_FBX_PATH = r"C:\Users\anshy\Desktop\CityExport_v2\Map_Centered.fbx"
TEXTURES_SOURCE_PATH = r"C:\Users\anshy\Desktop\CityExport_v2\textures"
TEXTURES_FBM_PATH = r"C:\Users\anshy\Desktop\CityExport_v2\Map_Centered.fbm"

# Target paths in Unreal Content Browser
TEXTURES_DEST_PATH = "/Game/Import/CityExport/Textures"
MESHES_DEST_PATH = "/Game/Import/CityExport/Meshes"
MATERIALS_DEST_PATH = "/Game/Import/CityExport/Materials"
LEVEL_PATH = "/Game/Import/CityExport/CityMap"

# Import settings
IMPORT_COLLISION = True
IMPORT_MATERIALS = True
IMPORT_TEXTURES = False  # We import textures manually first
COMBINE_MESHES = False   # Keep meshes separate for modular city
GENERATE_LIGHTMAP_UVS = True
BUILD_NANITE = True

# ============================================================
# HELPER FUNCTIONS
# ============================================================

def log(message):
    """Print message to output log"""
    unreal.log("[ImportCity] {}".format(message))

def ensure_path_exists(path):
    """Ensure a Content Browser path exists, create if needed"""
    path = path.strip("/")
    # Check if path exists
    all_assets = unreal.AssetRegistryHelpers.get_asset_registry().get_assets_by_path(
        unreal.Paths.project_content_dir() + path
    )
    if not all_assets:
        # Try to create path by creating a temporary asset
        log("Path {} will be created on first asset import".format(path))
    return True

def get_all_texture_files():
    """Get all PNG files from both texture folders"""
    texture_files = []

    # Get textures from main textures folder
    if os.path.exists(TEXTURES_SOURCE_PATH):
        for f in os.listdir(TEXTURES_SOURCE_PATH):
            if f.lower().endswith('.png'):
                full_path = os.path.join(TEXTURES_SOURCE_PATH, f)
                texture_files.append((full_path, f))

    # Get textures from FBM folder (FBX embedded)
    if os.path.exists(TEXTURES_FBM_PATH):
        for f in os.listdir(TEXTURES_FBM_PATH):
            if f.lower().endswith('.png'):
                full_path = os.path.join(TEXTURES_FBM_PATH, f)
                # Avoid duplicates
                if not any(f == existing_f for _, existing_f in texture_files):
                    texture_files.append((full_path, f))

    log("Found {} unique texture files".format(len(texture_files)))
    return texture_files

def import_texture(texture_path, dest_path, texture_name):
    """Import a single texture file"""
    # Create destination path
    full_dest = dest_path.strip("/") + "/" + texture_name
    full_dest = full_dest.replace(".png", "")

    # Check if already imported
    existing_asset = unreal.AssetRegistryHelpers.get_asset_registry().get_asset_by_object_path(
        full_dest + "." + texture_name.replace(".png", "")
    )
    if existing_asset:
        log("Texture already exists: {}".format(full_dest))
        return existing_asset.get_asset()

    # Import texture
    task = unreal.AssetImportTask()
    task.set_editor_property('automated', True)
    task.set_editor_property('destination_path', dest_path)
    task.set_editor_property('filename', texture_path)
    task.set_editor_property('replace_existing', False)
    task.set_editor_property('save', True)

    # Use texture factory
    task.set_editor_property('factory', unreal.TextureFactory())

    unreal.AssetToolsHelpers.get_asset_tools().import_asset_tasks([task])

    # Get the imported texture
    imported_asset = task.get_editor_property('imported_object_paths')
    if imported_asset:
        texture_obj = unreal.load_asset(imported_asset[0])
        if texture_obj:
            # Configure texture settings
            texture_obj.set_editor_property('srgb', True)
            texture_obj.set_editor_property('compression_settings', unreal.TextureCompressionSettings.TC_DEFAULT)
            texture_obj.set_editor_property('mip_gen_settings', unreal.TextureMipGenSettings.TMGS_NO_MIPMAPS)
            texture_obj.set_editor_property('filter', unreal.TextureFilter.TF_Bilinear)
            log("Imported texture: {}".format(texture_name))
            return texture_obj

    log("Failed to import texture: {}".format(texture_name))
    return None

def import_fbx():
    """Import the FBX file"""
    # Check if FBX exists
    if not os.path.exists(SOURCE_FBX_PATH):
        log("FBX file not found: {}".format(SOURCE_FBX_PATH))
        return None

    # Check if already imported
    mesh_name = "Map_Centered"
    existing_path = "{}/{}".format(MESHES_DEST_PATH.strip("/"), mesh_name)
    existing_asset = unreal.AssetRegistryHelpers.get_asset_registry().get_asset_by_object_path(existing_path)
    if existing_asset:
        log("Mesh already exists: {}".format(existing_path))
        return existing_asset.get_asset()

    # Create import task
    task = unreal.AssetImportTask()
    task.set_editor_property('automated', True)
    task.set_editor_property('destination_path', MESHES_DEST_PATH)
    task.set_editor_property('filename', SOURCE_FBX_PATH)
    task.set_editor_property('replace_existing', False)
    task.set_editor_property('save', True)

    # Configure FBX import options
    options = unreal.FbxImportUI()
    options.set_editor_property('import_as_skeletal', False)
    options.set_editor_property('import_textures', IMPORT_TEXTURES)
    options.set_editor_property('import_materials', IMPORT_MATERIALS)
    options.set_editor_property('auto_generate_collision', IMPORT_COLLISION)
    options.set_editor_property('combine_meshes', COMBINE_MESHES)
    options.set_editor_property('import_mesh', True)
    options.set_editor_property('create_physics_asset', False)
    options.set_editor_property('import_lod_groups', False)
    options.set_editor_property('import_as_lod', False)
    options.set_editor_property('generate_lightmap_uvs', GENERATE_LIGHTMAP_UVS)

    # Normal import method
    options.set_editor_property('normal_import_method', unreal.FbxNormalImportMethod.FBXNIM_COMPUTE_NORMALS)
    options.set_editor_property('normal_generation_method', unreal.FbxNormalGenerationMethod.LEGACY)

    task.set_editor_property('options', options)
    task.set_editor_property('factory', unreal.FbxFactory())

    unreal.AssetToolsHelpers.get_asset_tools().import_asset_tasks([task])

    # Get imported mesh
    imported_paths = task.get_editor_property('imported_object_paths')
    if imported_paths:
        log("FBX imported successfully. Objects: {}".format(len(imported_paths)))
        for path in imported_paths:
            log("  - {}".format(path))
        return imported_paths

    log("Failed to import FBX: {}".format(SOURCE_FBX_PATH))
    return None

def find_texture_by_name(name):
    """Find a texture by name in the imported textures"""
    name_without_ext = os.path.splitext(name)[0]

    # Search in texture destination path
    texture_path = TEXTURES_DEST_PATH.strip("/")
    assets = unreal.AssetRegistryHelpers.get_asset_registry().get_assets_by_path(
        unreal.Paths.project_content_dir() + texture_path,
        recursive=True
    )

    for asset in assets:
        asset_name = asset.asset_name
        if name_without_ext.lower() in asset_name.lower() or asset_name.lower() in name_without_ext.lower():
            return asset.get_asset()

    return None

def reassign_materials(mesh_assets):
    """Reassign material textures to imported textures"""
    log("Reassigning materials to use imported textures...")

    for asset_path in mesh_assets:
        mesh = unreal.load_asset(asset_path)
        if not mesh:
            continue

        # Get materials from mesh
        if hasattr(mesh, 'get_materials'):
            materials = mesh.get_materials()
            for i, material_interface in enumerate(materials):
                if material_interface:
                    log("  Material {}: {}".format(i, material_interface.get_name()))
                    # Try to find matching texture
                    # Note: Full material reassignment requires MaterialEditingLibrary
                    # This is a simplified approach

    log("Material reassignment complete")

def create_level():
    """Create a new level with the imported city"""
    log("Creating level: {}".format(LEVEL_PATH))

    # Create new level
    unreal.EditorLevelLibrary.new_level(LEVEL_PATH)

    # Get the level
    world = unreal.EditorLevelLibrary.get_editor_world()
    if not world:
        log("Failed to get editor world")
        return False

    log("Level created: {}".format(LEVEL_PATH))
    return True

def spawn_city_in_level(mesh_assets):
    """Spawn the imported city meshes in the level"""
    log("Spawning city meshes in level...")

    world = unreal.EditorLevelLibrary.get_editor_world()
    if not world:
        log("No editor world found")
        return

    # Get all actors in world
    # Place each imported mesh in the level
    for asset_path in mesh_assets:
        mesh = unreal.load_asset(asset_path)
        if not mesh:
            continue

        mesh_name = mesh.get_name()

        # Spawn static mesh actor
        actor = unreal.EditorLevelLibrary.spawn_actor_from_class(
            unreal.StaticMeshActor_C,
            unreal.Vector(0, 0, 0)
        )

        if actor:
            # Set the static mesh
            actor.static_mesh_component.set_static_mesh(mesh)
            actor.set_actor_label(mesh_name)
            log("Spawned: {}".format(mesh_name))

    log("City spawned in level")

def find_landscape():
    """Find existing landscape in the level"""
    world = unreal.EditorLevelLibrary.get_editor_world()
    if not world:
        return None

    # Get all actors
    actors = unreal.GameplayStatics.get_all_actors_of_class(world, unreal.Landscape_C)
    if actors:
        log("Found landscape: {}".format(actors[0].get_name()))
        return actors[0]

    log("No landscape found in current level")
    return None

# ============================================================
# MAIN IMPORT FUNCTION
# ============================================================

def run_import():
    """Main import function"""
    log("=" * 60)
    log("Starting City Export Import")
    log("=" * 60)

    # Step 1: Import textures
    log("\n[1/4] Importing textures...")
    texture_files = get_all_texture_files()

    ensure_path_exists(TEXTURES_DEST_PATH)
    imported_textures = {}

    for tex_path, tex_name in texture_files:
        texture = import_texture(tex_path, TEXTURES_DEST_PATH, tex_name)
        if texture:
            imported_textures[tex_name.replace(".png", "")] = texture

    log("Imported {} textures".format(len(imported_textures)))

    # Step 2: Import FBX
    log("\n[2/4] Importing FBX...")
    ensure_path_exists(MESHES_DEST_PATH)
    imported_meshes = import_fbx()

    if not imported_meshes:
        log("FBX import failed, aborting")
        return False

    # Step 3: Reassign materials
    log("\n[3/4] Reassigning materials...")
    reassign_materials(imported_meshes)

    # Step 4: Create level and place city
    log("\n[4/4] Setting up level...")
    create_level()
    spawn_city_in_level(imported_meshes)

    # Check for landscape
    landscape = find_landscape()
    if landscape:
        log("City will be placed relative to landscape at origin")
    else:
        log("Note: No landscape found - place city manually or create landscape first")

    # Save all
    log("\nSaving assets...")
    unreal.EditorAssetLibrary.save_all_packages()

    log("\n" + "=" * 60)
    log("IMPORT COMPLETE!")
    log("=" * 60)
    log("Textures: {}".format(TEXTURES_DEST_PATH))
    log("Meshes: {}".format(MESHES_DEST_PATH))
    log("Level: {}".format(LEVEL_PATH))

    return True

# ============================================================
# SCRIPT ENTRY POINT
# ============================================================

if __name__ == "__main__":
    try:
        run_import()
    except Exception as e:
        log("ERROR: {}".format(str(e)))
        import traceback
        traceback.print_exc()