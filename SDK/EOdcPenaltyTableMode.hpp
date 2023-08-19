#pragma once
#include <cstdint>
#pragma pack(push, 1)
enum class EOdcPenaltyTableMode : uint8_t {
    PENALTY_MODE_DISABLED = 0,
    PENALTY_MODE_MAX = 1,
    PENALTY_MODE_TOTAL = 2,
};
#pragma pack(pop)
