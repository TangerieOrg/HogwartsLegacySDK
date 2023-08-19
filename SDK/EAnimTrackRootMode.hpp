#pragma once
#include <cstdint>
#pragma pack(push, 1)
enum class EAnimTrackRootMode : uint8_t {
    CompletelyIgnoreRoot = 0,
    EnableRootMotion = 1,
    KeepRootAnimationWithoutRootMotion = 2,
    UseContentSetting = 3,
    EAnimTrackRootMode_MAX = 4,
};
#pragma pack(pop)
