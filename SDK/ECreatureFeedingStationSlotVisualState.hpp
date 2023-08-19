#pragma once
#include <cstdint>
#pragma pack(push, 1)
enum class ECreatureFeedingStationSlotVisualState : uint8_t {
    Empty = 0,
    Filling = 1,
    Full = 2,
    Emptying = 3,
    Dispensing = 4,
    ECreatureFeedingStationSlotVisualState_MAX = 5,
};
#pragma pack(pop)
