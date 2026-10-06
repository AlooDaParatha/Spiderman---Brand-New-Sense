# Mission 01: Stop the Rash-Drivers

## Overview
First mission where Spider-Man must stop drunk citizens driving recklessly through New Bok City before they hit a pedestrian.

## Mission Flow

### Phase 1: Ned's Call
- **Trigger**: Mission start
- **Event**: Phone call from Ned with subtitles
- **Content**: Ned reports GPS tracker detected rash drivers on Laughlin Street
- **Objective**: Travel to location marker

### Phase 2: Arrival Cutscene
- **Trigger**: Player reaches location
- **Event**: Cutscene shows drunk drivers speeding toward red light
- **Setup**: Cyclist about to cross intersection (green light for them)
- **Danger**: Car will hit cyclist unless stopped

### Phase 3: Car Attachment & Slowdown
- **Objective**: Attach to speeding car using zip-to mechanic
- **Mechanic**: Zip to car (left-click aim)
- **Sub-objective**: Shoot lamp pole zip points while attached
- **Effect**: Each pole caught slows the car progressively
- **Ned Feedback**: "Keep going! It's slowing down but not stopped!"

### Phase 4: Full Stop
- **Objective**: Shoot car wheels to fully stop vehicle
- **Mechanic**: Right-click aim + shoot web (to be implemented)
- **Target**: Front or rear wheels
- **Success**: Car stops before hitting cyclist
- **Completion**: Mission complete, cyclist saved

## Location
- **City**: New Bok City (humorous NYC variant)
- **Street**: Laughlin Street
- **Features**: Traffic lights, lamp poles with zip points, crosswalk

## Assets Needed
1. Mission blueprint (BP_Mission01_RashDrivers)
2. Ned phone call dialogue widget
3. Cutscene sequence
4. Drunk driver vehicle with AI
5. Cyclist NPC
6. Street location with props
7. Lamp pole zip point placements
8. Mission objective UI

## Technical Requirements
- Integration with existing zip-to system
- New: Web shoot to wheels mechanic
- Car physics - speed reduction per pole caught
- Collision detection for mission failure
- Subtitle system for Ned's calls
