#pragma once
#include <cstdint>
#pragma pack(push, 1)
enum class ESimpleDataSetPreloadState : uint8_t {
    Idle = 0,
    BuildingPreloadList = 1,
    Preloading = 2,
    Done = 3,
    Cancelling = 4,
    ESimpleDataSetPreloadState_MAX = 5,
};
#pragma pack(pop)
