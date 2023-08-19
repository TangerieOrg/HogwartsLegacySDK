#pragma once
#include <cstdint>
#pragma pack(push, 1)
enum class EProductionStatus : uint8_t {
    IN_DEVELOPMENT = 0,
    FUNCTIONAL = 1,
    SHIPPABLE = 2,
    CUT = 3,
    EProductionStatus_MAX = 4,
};
#pragma pack(pop)
