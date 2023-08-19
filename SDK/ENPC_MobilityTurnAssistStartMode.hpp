#pragma once
#include <cstdint>
#pragma pack(push, 1)
enum class ENPC_MobilityTurnAssistStartMode : uint8_t {
    None = 0,
    Immediate = 1,
    FromAnim = 2,
    Delayed = 3,
    ENPC_MAX = 4,
};
#pragma pack(pop)
