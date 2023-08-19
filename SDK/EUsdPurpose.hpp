#pragma once
#include <cstdint>
#pragma pack(push, 1)
enum class EUsdPurpose {
    Default = 0,
    Proxy = 1,
    Render = 2,
    Guide = 4,
    EUsdPurpose_MAX = 5,
};
#pragma pack(pop)
