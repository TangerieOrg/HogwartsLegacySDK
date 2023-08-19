#pragma once
#include <cstdint>
#pragma pack(push, 1)
enum class EMountCombatChargeState : uint8_t {
    Inactive = 0,
    IntoTransition = 1,
    ChargeLoop = 2,
    OutOfTransition = 3,
    EMountCombatChargeState_MAX = 4,
};
#pragma pack(pop)
