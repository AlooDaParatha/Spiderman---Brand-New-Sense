# QUICK START: Mission 1 Setup in 5 Minutes

## What You Need to Do

You have the editor open. Now follow these exact steps:

---

## STEP 1: Create Mission Blueprint (5 minutes)

**In the Editor:**

1. **Open TestCity.umap** (if not already open)
   - Content Browser → Maps → Double-click TestCity

2. **Create the Mission Actor**
   - Content Browser → Go to: Game/Missions/Mission01_RashDrivers
   - Right-click empty space
   - "Blueprint Class"
   - Select "Actor" as parent
   - Name: `BP_Mission01`
   - Open it (double-click)

3. **Add Variables in the Blueprint**
   - Left panel → "My Blueprint" tab
   - Click "+ Variable"
   
   **Create these 5 variables:**
   
   a) `bMissionActive` 
      - Type: Boolean
      - Default: false
   
   b) `CurrentPhase`
      - Type: Integer
      - Default: 0
   
   c) `PolesCaught`
      - Type: Integer
      - Default: 0
   
   d) `WheelShotsHit`
      - Type: Integer
      - Default: 0
   
   e) `PlayerArrivalMarker`
      - Type: Vector
      - Default: (0, 0, 0)

4. **Create the Event Graph Logic**
   - Click "Event Graph" tab
   - Right-click in empty space
   - Search and add: "Event BeginPlay"
   - From the Event BeginPlay output pin (white circle on right):
      - Drag a line out
      - Type "Delay"
      - Set to 2.0 seconds
   - From Delay output:
      - Drag line out
      - Type "Print String"
      - Set message to: "Mission 1 Started!"

5. **Save the Blueprint**
   - Ctrl+S or File → Save

---

## STEP 2: Place Mission in Level (2 minutes)

1. **Go back to TestCity.umap**
   - Click on TestCity tab at top

2. **Drag the blueprint into the level**
   - Content Browser → BP_Mission01
   - Drag it into the 3D viewport
   - You'll see it placed as an orange cube (actor placeholder)

3. **Set the Player Arrival Marker**
   - Select the actor in the level
   - Details panel on right → Find "Player Arrival Marker"
   - Click the eyedropper tool
   - Click on a location in the level where you want the player to reach
   - (Or just enter a Vector like (5000, 5000, 1000))

---

## STEP 3: Test It Works (1 minute)

1. **Press Play button** (top of editor, big blue button)
2. **After 2 seconds, you should see:**
   - "Mission 1 Started!" printed on screen (top-left corner)
3. **Press ESC to stop playing**

**If you see the message → SUCCESS! The mission blueprint works!**

---

## STEP 4: Next - Add Vehicle & Cyclist (Optional, do this if Step 3 worked)

Once the basic mission works, create:

### Create Vehicle Blueprint:
1. Right-click → Blueprint Class
2. Parent: Pawn
3. Name: `BP_RashDriver_Vehicle`
4. Add a mesh component
5. Add variables:
   - `CurrentSpeed` (Float, default 0)
   - `TargetSpeed` (Float, default 120)
   - `bDriving` (Boolean, default false)

### Create Cyclist Blueprint:
1. Right-click → Blueprint Class
2. Parent: Character
3. Name: `BP_Cyclist_NPC`
4. Add a mesh component
5. Add variables:
   - `bAlive` (Boolean, default true)
   - `bCrossing` (Boolean, default false)

---

## What's the Minimum to Get Mission Working?

You ONLY need:
1. ✅ BP_Mission01 blueprint (handles mission flow)
2. ✅ Placed in TestCity level
3. ✅ Simple Event BeginPlay → Delay → Print String logic

The vehicle and cyclist can be added after you confirm the core mission blueprint works.

---

## Troubleshooting

**Q: I don't see "Mission 1 Started!" when I press Play**
- A: Check that Event BeginPlay is connected. Try reducing the Delay to 0.5 seconds.

**Q: Where do I find the Print String output?**
- A: Press Play, look at the top-left corner of the game viewport. The text appears there.

**Q: How do I zoom in the level to see where I placed the actor?**
- A: Press F to focus on selected actor, or scroll mouse wheel to zoom

---

## Ready? Do This Now:

1. In the editor that's open, go to Content Browser
2. Navigate to: Content > Game > Missions > Mission01_RashDrivers
3. Right-click → Blueprint Class → Actor → Name it BP_Mission01
4. Follow STEP 1 above to add variables and Event BeginPlay logic
5. Save it
6. Drag it into TestCity
7. Press Play and watch for the message

Let me know when you've done this and you see "Mission 1 Started!" on screen!