#pragma once
#include <cstdint>
#pragma pack(push, 1)
enum class ENPC_TargetAwareState : uint8_t {
    None = 0,
    Unaware = 1,
    Aware = 2,
    Alert = 3,
    Attack = 4,
    ENPC_MAX = 5,
};
#pragma pack(pop)
