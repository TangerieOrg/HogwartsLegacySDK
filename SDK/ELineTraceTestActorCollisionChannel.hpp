#pragma once
#include <cstdint>
#pragma pack(push, 1)
enum class ELineTraceTestActorCollisionChannel : uint8_t {
    WorldStatic = 0,
    WorldDynamic = 1,
    Pawn = 2,
    Visibility = 3,
    Camera = 4,
    PhysicsBody = 5,
    Vehicle = 6,
    Destructible = 7,
    ShallowWater = 8,
    SphereTracer = 9,
    LedgeTrace = 10,
    Spell = 11,
    Station = 12,
    DeepWater = 13,
    Weapon = 14,
    WebbedObject = 15,
    Audio_Volume = 16,
    GameVolume = 17,
    FootIK = 18,
    PlayerOnly = 19,
    FluidSim = 20,
    MapTrace = 21,
    InteractBlocker = 22,
    NavMarkup = 23,
    Station_Static = 24,
    AimConeCheck = 25,
    EdgeCheck = 26,
    ELineTraceTestActorCollisionChannel_MAX = 27,
};
#pragma pack(pop)
