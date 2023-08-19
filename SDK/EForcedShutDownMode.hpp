#pragma once
#include <cstdint>
#pragma pack(push, 1)
enum class EForcedShutDownMode : uint8_t {
    None = 0,
    NoForcedShutDownAllowed = 1,
    ForcedHiddenRenderShutdDown = 2,
    ForcedRenderShutDown = 3,
    ForcedHiddenFleshCacheShutDown = 4,
    ForcedFleshCacheShutDown = 5,
    ForcedAllowRenderShutDown = 6,
    EForcedShutDownMode_MAX = 7,
};
#pragma pack(pop)
