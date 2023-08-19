#pragma once
#include <cstdint>
#pragma pack(push, 1)
enum class EPhysicsSimLevelType : uint8_t {
    Attacks = 0,
    Flying = 1,
    LODs = 2,
    Mechanics = 3,
    Misc = 4,
    Mounts = 5,
    Reactions = 6,
    Stations = 7,
    ClothAnimCurves = 8,
    EPhysicsSimLevelType_MAX = 9,
};
#pragma pack(pop)
