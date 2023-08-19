#pragma once
#include <cstdint>
#pragma pack(push, 1)
enum class ENPC_EvadeMobilityType {
    None = 0,
    Slow = 1,
    Medium = 2,
    Fast = 3,
    Count = 4,
    ENPC_MAX = 5,
};
#pragma pack(pop)
