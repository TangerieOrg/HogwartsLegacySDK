#pragma once
#include <cstdint>
#pragma pack(push, 1)
enum class ERootMotionSourceSettingsFlags {
    UseSensitiveLiftoffCheck = 1,
    DisablePartialEndTick = 2,
    IgnoreZAccumulate = 4,
    ERootMotionSourceSettingsFlags_MAX = 5,
};
#pragma pack(pop)
