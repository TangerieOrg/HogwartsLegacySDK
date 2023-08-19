#pragma once
#include <cstdint>
#pragma pack(push, 1)
enum class ENPC_PlayerRelTargetTracking {
    None = 0,
    Aware = 1,
    Alert = 2,
    Aggro = 3,
    Combat = 4,
    ENPC_MAX = 5,
};
#pragma pack(pop)
