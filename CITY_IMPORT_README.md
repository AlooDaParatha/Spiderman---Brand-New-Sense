# City FBX Import Guide - Map_Centered.fbx

This guide walks you through importing the city FBX from `C:\Users\anshy\Desktop\CityExport_v2` into your Unreal Engine 5.8 project with all 99 textures preserved.

## What Gets Imported
- **FBX File**: `Map_Centered.fbx` (83 MB)
- **Textures**: 99 PNG files (Image_0.png through Image_98.png)
- **Target Location**: `/Game/Import/CityExport/`

## Prerequisites
1. Unreal Engine 5.8 installed
2. Python plugin enabled in Unreal Editor (should be enabled by default)
3. Project is opened in Unreal Editor

## Method 1: Python Script (Recommended - Fastest)

### Step 1: Enable Python Plugin
1. Open your project in Unreal Editor
2. Go to **Edit > Plugins**
3. Search for "Python"
4. Ensure **Python Editor Script Plugin** is enabled
5. Restart editor if you just enabled it

### Step 2: Run the Import Script
1. In Unreal Editor, open the **Output Log** (Window > Developer Tools > Output Log)
2. Go to **File > Execute Python Script**
3. Navigate to: `C:\Users\anshy\Documents\Unreal Projects\Spiderman - Brand New Sense\`
4. Select **`ImportCityExport.py`**
5. Click **Open**

The script will:
- Import all 99 textures to `/Game/Import/CityExport/Textures`
- Import the FBX to `/Game/Import/CityExport/Meshes`
- Create a new level at `/Game/Import/CityExport/CityMap`
- Place the city meshes in the level

**Expected Duration**: 2-5 minutes depending on system

### Step 3: Verify Import
Watch the Output Log for progress messages:
```
[ImportCity] ============================================================
[ImportCity] Starting City Export Import
[ImportCity] ============================================================
[ImportCity] [1/4] Importing textures...
[ImportCity] Found 99 unique texture files
[ImportCity] Imported texture: Image_0.png
...
[ImportCity] [2/4] Importing FBX...
[ImportCity] FBX imported successfully
...
[ImportCity] IMPORT COMPLETE!
```

### Step 4: Fix Materials (If Needed)
If you see magenta/pink materials (missing textures):
1. Go to **File > Execute Python Script**
2. Select **`FixCityMaterials.py`**
3. This will validate and attempt to fix material assignments

## Method 2: Manual Import (Fallback)

If the Python script fails, use this manual approach:

### Step 1: Import Textures
1. In Content Browser, navigate to `/Game/Import/`
2. Create new folder: **CityExport**
3. Inside CityExport, create folder: **Textures**
4. Right-click in Textures folder > **Import to /Game/Import/CityExport/Textures**
5. Navigate to `C:\Users\anshy\Desktop\CityExport_v2\textures\`
6. Select ALL PNG files (Ctrl+A), click **Open**
7. Wait for import to complete (99 textures)

### Step 2: Import FBX
1. In Content Browser, go to `/Game/Import/CityExport/`
2. Create new folder: **Meshes**
3. Right-click in Meshes folder > **Import to /Game/Import/CityExport/Meshes**
4. Navigate to `C:\Users\anshy\Desktop\CityExport_v2\`
5. Select **`Map_Centered.fbx`**, click **Open**

### Step 3: Configure FBX Import Settings
In the FBX Import Options dialog:

**Mesh Settings:**
- ✓ Import as Static Mesh
- ✓ Auto Generate Collision
- ✓ Import Materials
- ✓ Import Textures (if it finds them)
- ✓ Generate Lightmap UVs
- Combine Meshes: **OFF**

**Material Settings:**
- Material Import Method: **Create New Materials**
- ✓ Import Textures
- Base Material: **None** (or choose CityBLD master material)

**Transform:**
- Import Translation: `0, 0, 0`
- Import Rotation: `0, 0, 0`
- Import Uniform Scale: `1.0`

Click **Import All**

### Step 4: Fix Missing Textures (Manual)
If materials show as magenta:
1. Open any material with missing textures
2. In Material Editor, find the Texture Sample node
3. Set the texture to the matching imported PNG from `/Game/Import/CityExport/Textures/`
4. Save and repeat for other materials

### Step 5: Place in Level
1. Create new level or open existing map
2. Drag imported meshes from Content Browser to viewport
3. Position at desired location (typically origin: 0,0,0)
4. Adjust lighting and post-process as needed

## Verification Checklist

After import, verify:
- [ ] All 99 textures visible in `/Game/Import/CityExport/Textures/`
- [ ] FBX mesh(es) visible in `/Game/Import/CityExport/Meshes/`
- [ ] Materials show textures (no magenta/pink)
- [ ] City appears in level viewport
- [ ] No missing asset errors in Message Log

## Troubleshooting

### Problem: "No module named unreal"
**Solution**: Python plugin not enabled. Go to Edit > Plugins, enable Python, restart editor.

### Problem: Textures import but materials are still magenta
**Solution**: 
1. Run `FixCityMaterials.py` script
2. Or manually reassign textures in Material Editor
3. Check that FBX material names match texture filenames

### Problem: FBX import fails or crashes
**Solution**:
1. Check FBX file is not corrupted (can you open in Blender/Maya?)
2. Ensure enough disk space (need ~500 MB for import)
3. Try importing with "Combine Meshes" OFF
4. Import smaller test FBX first to verify pipeline

### Problem: Import is very slow
**Solution**: This is normal for large city imports. The 83 MB FBX + 99 textures may take 3-5 minutes.

### Problem: Python script errors out
**Solution**:
1. Check the Output Log for specific error
2. Verify paths in `ImportCityExport.py` are correct
3. Try manual import method instead

## Performance Tips

After successful import:

1. **Enable Nanite** (if not already):
   - Select imported meshes
   - Details panel > Nanite Settings
   - Enable Nanite Support

2. **Set up HLOD** for distant LODs:
   - World Settings > LOD System
   - Configure Hierarchical LOD

3. **Enable World Partition** (UE5 feature):
   - For large cities, convert to World Partition for streaming

4. **Adjust Material Quality**:
   - Use Material Instances for better performance
   - Consider texture compression settings

## Integration with CityBLD Plugin

Your project has CityBLD, RoadBLD, and TwinBLD plugins active. To integrate:

1. Compare imported materials with CityBLD's `M_CityBLD_Building_Master`
2. Consider creating Material Instances from CityBLD master materials
3. Use CityBLD's collision and LOD settings for consistency

## Next Steps

After successful import:
1. Adjust lighting for your scene
2. Add collision if needed (Physics > Complex Collision As Simple)
3. Set up level streaming if city is large
4. Integrate with your Spiderman character's web-swinging mechanics
5. Add detail props using CityBLD's asset library

---

**Files Created:**
- `ImportCityExport.py` - Main import automation script
- `FixCityMaterials.py` - Material validation and fixing script
- `CITY_IMPORT_README.md` - This file

**Questions?** Check the Output Log in Unreal Editor for detailed import messages.
