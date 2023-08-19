#pragma once
#include <cstdint>
#pragma pack(push, 1)
enum class ELineTraceTestActorObjectTypeQuery : uint8_t {
    WorldStatic = 0,
    WorldDynamic = 1,
    Pawn = 2,
    PhysicsBody = 3,
    Vehicle = 4,
    Destructible = 5,
    ShallowWater = 6,
    SphereTracer = 7,
    Spell = 8,
    Station = 9,
    DeepWater = 10,
    Weapon = 11,
    WebbedObject = 12,
    Audio_Volume = 13,
    GameVolume = 14,
    PlayerOnly = 15,
    FluidSim = 16,
    NavMarkup = 17,
    Station_Static = 18,
    ELineTraceTestActorObjectTypeQuery_MAX = 19,
};
#pragma pack(pop)
