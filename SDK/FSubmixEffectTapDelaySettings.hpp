#pragma once
#include <cstdint>
#include "FTapDelayInfo.hpp"
#pragma pack(push, 1)
struct FSubmixEffectTapDelaySettings {
    float MaximumDelayLength; // 0x0
    float InterpolationTime; // 0x4
    TArray<FTapDelayInfo> Taps; // 0x8
}; // Size: 0x18
#pragma pack(pop)
