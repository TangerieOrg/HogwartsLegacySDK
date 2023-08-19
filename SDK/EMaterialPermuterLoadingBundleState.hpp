#pragma once
#include <cstdint>
#pragma pack(push, 1)
enum class EMaterialPermuterLoadingBundleState : uint8_t {
    Init = 0,
    WaitingOnLoad = 1,
    SignalLoaded = 2,
    Loaded = 3,
    EMaterialPermuterLoadingBundleState_MAX = 4,
};
#pragma pack(pop)
