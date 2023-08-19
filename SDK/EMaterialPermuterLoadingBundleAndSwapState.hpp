#pragma once
#include <cstdint>
#pragma pack(push, 1)
enum class EMaterialPermuterLoadingBundleAndSwapState : uint8_t {
    Uninitialized = 0,
    Loading = 1,
    LoadedPendingSwaps = 2,
    Swapped = 3,
    SwapFailed = 4,
    EMaterialPermuterLoadingBundleAndSwapState_MAX = 5,
};
#pragma pack(pop)
