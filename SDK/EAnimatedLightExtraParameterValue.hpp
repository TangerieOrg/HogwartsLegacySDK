#pragma once
#include <cstdint>
#pragma pack(push, 1)
enum class EAnimatedLightExtraParameterValue : uint8_t {
    LightColor = 0,
    LightIntensity = 1,
    LightColorTimesIntensity = 2,
    LightColorAndIntensity = 3,
    OriginalColor = 4,
    OriginalIntensity = 5,
    OriginalColorTimesIntensity = 6,
    OriginalColorAndIntensity = 7,
    DeltaColor = 8,
    DeltaIntensity = 9,
    DeltaColorAndIntensity = 10,
    RelativeIntensity = 11,
    EAnimatedLightExtraParameterValue_MAX = 12,
};
#pragma pack(pop)
