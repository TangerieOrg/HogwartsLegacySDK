#pragma once
#include <cstdint>
#pragma pack(push, 1)
enum class ENPC_LOSParamType {
    None = 0,
    Perception = 1,
    Attack = 2,
    Waypoint = 3,
    ENPC_MAX = 4,
};
#pragma pack(pop)
