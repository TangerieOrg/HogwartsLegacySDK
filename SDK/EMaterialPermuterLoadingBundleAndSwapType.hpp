#pragma once
#include <cstdint>
#pragma pack(push, 1)
enum class EMaterialPermuterLoadingBundleAndSwapType : uint8_t {
    SwapComponent = 0,
    SwapComponentAutoRefresh = 1,
    Raw = 2,
    Hard = 3,
    HardBatched = 4,
    EMaterialPermuterLoadingBundleAndSwapType_MAX = 5,
};
#pragma pack(pop)
