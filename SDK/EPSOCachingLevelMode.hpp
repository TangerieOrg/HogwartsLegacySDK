#pragma once
#include <cstdint>
#pragma pack(push, 1)
enum class EPSOCachingLevelMode : int32_t {
    Regular = 0,
    DebugFast = 1,
    PredefinedAssets = 2,
    EPSOCachingLevelMode_MAX = 3,
};
#pragma pack(pop)
