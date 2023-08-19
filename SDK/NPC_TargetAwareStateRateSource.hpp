#pragma once
#include <cstdint>
#pragma pack(push, 1)
enum class NPC_TargetAwareStateRateSource : uint8_t {
    EnterAware = 0,
    ExitAware = 1,
    EnterAlert = 2,
    ExitAlert = 3,
    NPC_MAX = 4,
};
#pragma pack(pop)
