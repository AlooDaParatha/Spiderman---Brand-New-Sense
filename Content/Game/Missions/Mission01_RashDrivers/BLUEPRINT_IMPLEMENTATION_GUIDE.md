# Mission 1: Stop the Rash-Drivers - Blueprint Implementation Guide

## Quick Start - What to Do Now

Since C++ compilation has some issues with the existing project, we'll build Mission 1 using **Blueprints** which is faster anyway. Here's your step-by-step guide:

---

## PHASE 1: Create the Mission Blueprint Actor

1. **In Content Browser:**
   - Right-click → Blueprint Class
   - Parent: Actor
   - Name: `BP_Mission01_RashDrivers`
   - Open it

2. **Add Components:**
   - In Details panel, add:
     - BoxComponent (for trigger volume)
     - TextRender (optional, for debugging)

3. **Create Variables (Details → Variables):**
   
   **Mission State Variables:**
   - `bMissionActive` (Boolean) - Default: false
   - `CurrentPhase` (Integer) - Default: 0
   - `PlayerAttachedToCar` (Boolean)
   - `PolesCaught` (Integer) - Default: 0
   - `WheelShotsHit` (Integer) - Default: 0
   - `bVehicleStopped` (Boolean) - Default: false
   
   **Reference Variables:**
   - `RashDriverVehicle` (Object Reference - AVehicleBase)
   - `CyclistPedestrian` (Object Reference - APedestrianNPC)
   - `SpiderManCharacter` (Object Reference - Character)
   - `DialogueManager` (Object Reference - ADialogueManager)
   
   **Location Variables:**
   - `VehicleSpawnLocation` (Vector)
   - `CyclistSpawnLocation` (Vector)
   - `IntersectionCenter` (Vector)
   - `PlayerArrivalMarker` (Vector)
   
   **Settings Variables:**
   - `CarInitialSpeed` (Float) - Default: 120.0
   - `CarSlowdownPerPole` (Float) - Default: 15.0
   - `WheelShotsRequired` (Integer) - Default: 4
   - `PolesRequiredToSlow` (Integer) - Default: 5

4. **Create Custom Events (Right-click in Event Graph → Custom Event):**
   - `OnMissionStart`
   - `OnPlayNedCall`
   - `OnPlayerReachesLocation`
   - `OnPoleZipped`
   - `OnWheelShot`
   - `OnMissionComplete`
   - `OnMissionFailed`

---

## PHASE 2: Create the Vehicle Blueprint

1. **Create Blueprint: BP_RashDriver_Vehicle**
   - Parent: Pawn
   - Add Components:
     - SkeletalMeshComponent (the car mesh)
     - BoxComponent (collision)
     - FloatingPawnMovement (for movement)

2. **Add Variables:**
   - `CurrentSpeed` (Float)
   - `TargetSpeed` (Float) - Default: 120.0
   - `Acceleration` (Float) - Default: 20.0
   - `DrivingForwardVector` (Vector)
   - `WheelHealth_FL` (Integer) - Default: 100
   - `WheelHealth_FR` (Integer) - Default: 100
   - `WheelHealth_RL` (Integer) - Default: 100
   - `WheelHealth_RR` (Integer) - Default: 100
   - `bDriving` (Boolean)
   - `TargetDrivingLocation` (Vector)
   - `bAttachedCharacter` (Boolean)

3. **Event Graph Logic:**
   
   **Event BeginPlay:**
   - Initialize wheel health to 100 for all wheels
   
   **Event Tick:**
   - Calculate forward direction toward target location
   - Update speed based on acceleration/deceleration
   - Move forward based on current speed
   - Check if wheels are damaged, reduce speed accordingly
   
   **Custom Event: StartDriving (Vector InLocation)**
   - Set TargetDrivingLocation = InLocation
   - Set bDriving = true
   - Set TargetSpeed = 120
   
   **Custom Event: DamageWheel (EWheelType Wheel)**
   - Reduce appropriate wheel health
   - For each destroyed wheel, reduce speed by 25%
   - Call Mission's OnWheelShot event
   
   **Custom Event: StopVehicle**
   - Set CurrentSpeed = 0
   - Set bDriving = false
   - Stop movement

---

## PHASE 3: Create the Cyclist Pedestrian Blueprint

1. **Create Blueprint: BP_Cyclist_Pedestrian**
   - Parent: Character
   - Add mesh component with cyclist skeletal mesh

2. **Add Variables:**
   - `CurrentState` (String) - Values: Idle, Walking, Crossing, Running, Hit, Dead
   - `TargetLocation` (Vector)
   - `CrossingStartLocation` (Vector)
   - `CrossingEndLocation` (Vector)
   - `bAlive` (Boolean) - Default: true
   - `bCrossing` (Boolean) - Default: false
   - `CrossingSpeed` (Float) - Default: 300.0

3. **Custom Events:**
   
   **StartCrossing (Vector StartLoc, Vector EndLoc)**
   - Set CrossingStartLocation = StartLoc
   - Set CrossingEndLocation = EndLoc
   - Set bCrossing = true
   - Move toward end location
   
   **TakeHit (Actor HitBy)**
   - Set CurrentState = "Hit"
   - Play hit animation
   - After 0.5 sec, call Die()
   
   **Die ()**
   - Set bAlive = false
   - Play death animation
   - Stop all movement
   - Broadcast mission failed

---

## PHASE 4: Create the Dialogue System

1. **Create Data Table for Dialogue:**
   - Right-click → Miscellaneous → Data Table
   - Parent: DialogueLine (we'll create a simple struct)
   - Name: `DT_Mission01_Dialogue`

2. **OR use Text Assets directly:**
   - Create Text file: `Dialogue_NedCall.txt` with lines:
   ```
   Ned: "Peter! I've been tracking the GPS... something's up!"
   Ned: "I hacked into the NYC... uh, New Bok City traffic system. There's a vehicle doing some serious rash driving on Laughlin Street!"
   Ned: "Nice! Keep going, you're slowing it down!"
   Ned: "Wait, no! You haven't stopped the car completely. Try shooting the wheels!"
   ```

3. **Create Widget for Dialogue Display:**
   - Right-click → User Interface → Widget Blueprint
   - Name: `W_DialogueDisplay`
   - Add components:
     - TextBlock (SpeakerName)
     - TextBlock (DialogueText)
     - Image (Background with semi-transparency)
   - Set to appear at bottom center of screen

---

## PHASE 5: Set Up Mission Blueprint Event Flow

**In BP_Mission01_RashDrivers Event Graph:**

1. **Event BeginPlay:**
   ```
   → Delay 2 seconds
   → Call OnMissionStart Custom Event
   ```

2. **OnMissionStart Event:**
   ```
   → CurrentPhase = 1 (NedCall)
   → Get Player Character (cast to SpiderManCharacter)
   → Store in SpiderManCharacter variable
   → Find/Spawn RashDriverVehicle
   → Find/Spawn CyclistPedestrian
   → Find or Create DialogueManager
   → Call OnPlayNedCall
   ```

3. **OnPlayNedCall Event:**
   ```
   → Show phone call UI widget
   → Play Ned's dialogue line 1: "Peter! I've been tracking..."
   → Wait 3 seconds
   → Play Ned's dialogue line 2: "I hacked into the NYC..."
   → Wait 4 seconds
   → Hide phone call UI
   → Set Objective Marker to PlayerArrivalMarker location
   → CurrentPhase = 2 (TravelToSite)
   → Start monitoring distance to marker
   ```

4. **Distance Monitoring (in Tick or Timer):**
   ```
   → Calculate distance from SpiderManCharacter to PlayerArrivalMarker
   → If distance < 500 cm:
      → Call OnPlayerReachesLocation
   ```

5. **OnPlayerReachesLocation Event:**
   ```
   → CurrentPhase = 3 (ArrivalScene)
   → Trigger Cutscene:
      → Vehicle starts driving from VehicleSpawnLocation toward IntersectionCenter
      → Cyclist starts crossing from CrossingStartLocation to CrossingEndLocation
      → Camera focuses on intersection
   → Wait 3 seconds (cutscene plays)
   → CurrentPhase = 4 (SlowVehicle)
   → Start collision detection between vehicle and cyclist
   ```

6. **OnPoleZipped Event (triggered from Spider-Man's zip system):**
   ```
   → Increment PolesCaught
   → Reduce vehicle speed: CurrentSpeed -= CarSlowdownPerPole
   → If PolesCaught >= PolesRequiredToSlow:
      → Play Ned's encouragement: "Nice! Keep going, you're slowing it down!"
      → CurrentPhase = 5 (StopVehicle)
   ```

7. **OnWheelShot Event (triggered from web-shoot system):**
   ```
   → Increment WheelShotsHit
   → Reduce vehicle speed significantly (30% per wheel)
   → Vehicle.DamageWheel()
   → If WheelShotsHit >= WheelShotsRequired:
      → Vehicle.StopVehicle()
      → Call OnMissionComplete
   ```

8. **Collision Detection (in Tick):**
   ```
   → Calculate distance between Vehicle and Cyclist
   → If distance < 200 cm AND vehicle speed > 10:
      → Call OnMissionFailed
   ```

9. **OnMissionComplete Event:**
   ```
   → Broadcast event
   → Show "Mission Complete" UI
   → Play success dialogue: "You did it! The cyclist is safe!"
   → Rewards/Points system
   ```

10. **OnMissionFailed Event:**
   ```
   → Stop vehicle immediately
   → Play Cyclist death animation
   → Play Ned's failure dialogue: "No! We were too late!"
   → Show "Mission Failed" screen
   → Restart mission option
   ```

---

## PHASE 6: Integration Points with Existing Systems

### Connect to Spider-Man's Zip System:
- When Spider-Man zips to a pole near the vehicle, trigger `OnPoleZipped`
- Pass the pole location to the mission system

### Connect to Spider-Man's Shoot System:
- When Spider-Man shoots a web at vehicle wheels, trigger `OnWheelShot`
- Pass wheel location to identify which wheel was hit

### Connect to Player Movement:
- Track player distance to `PlayerArrivalMarker`
- Trigger phase transition when close enough

---

## PHASE 7: Level Setup

**In your level (e.g., TestCity.umap):**

1. **Place the Mission Actor:**
   - Drag BP_Mission01_RashDrivers into the level
   - Set spawn locations in Details:
     - VehicleSpawnLocation: far end of street
     - CyclistSpawnLocation: at crosswalk
     - IntersectionCenter: center of intersection
     - PlayerArrivalMarker: viewing point for cutscene

2. **Set Up Street Geometry:**
   - Lamp poles with zip points already exist (use existing)
   - Mark which poles are reachable from the vehicle's driving path

3. **Configure Traffic Light (optional):**
   - Set to red for vehicles, green for cyclists initially
   - Or hardcode in BP for this mission

---

## TESTING CHECKLIST

- [ ] Mission starts and Ned's call plays
- [ ] Dialogue UI appears with subtitles
- [ ] Objective marker shows destination
- [ ] Vehicle spawns and starts driving
- [ ] Cyclist spawns at crosswalk
- [ ] Player can reach the location
- [ ] Cutscene triggers with vehicle + cyclist
- [ ] Zipping to poles slows the vehicle
- [ ] Shooting wheels further slows vehicle
- [ ] Vehicle stops before hitting cyclist → Mission Complete
- [ ] If vehicle hits cyclist → Mission Failed

---

## Quick Reference: Blueprint Nodes to Use

**Movement:**
- Add Movement Input
- Set Actor Location
- Get Distance To

**Events:**
- Custom Event
- Delay
- Timer by Event

**Conditions:**
- Branch (If)
- Compare Float
- Is Valid

**UI:**
- Create Widget
- Add to Viewport
- Set Text

---

## Next Steps

1. Create all blueprints listed above
2. Place them in the level
3. Connect the events together
4. Test the mission flow
5. Adjust speeds/distances as needed for gameplay feel

This is a complete blueprint implementation - no C++ compilation needed!
