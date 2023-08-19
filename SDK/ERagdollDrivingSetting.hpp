#pragma once
#include <cstdint>
#pragma pack(push, 1)
enum class ERagdollDrivingSetting : uint8_t {
    KeepCurrent = 0,
    AlwaysOverride = 1,
    SetIfStronger = 2,
    SetIfWeaker = 3,
    SetIfAlreadyInFullRagdoll = 4,
    SetIfNotAlreadyInFullRagdoll = 5,
    ERagdollDrivingSetting_MAX = 6,
};
#pragma pack(pop)
