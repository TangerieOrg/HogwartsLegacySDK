#pragma once
#include <cstdint>
#pragma pack(push, 1)
enum class EHardSwapBatchComponentState : uint8_t {
    Startup = 0,
    Building = 1,
    Swapping = 2,
    Done = 3,
    EHardSwapBatchComponentState_MAX = 4,
};
#pragma pack(pop)
