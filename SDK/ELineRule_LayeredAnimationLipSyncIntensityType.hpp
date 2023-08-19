#pragma once
#include <cstdint>
#pragma pack(push, 1)
enum class ELineRule_LayeredAnimationLipSyncIntensityType : uint8_t {
    LowToHigh = 0,
    High = 1,
    MediumToHigh = 2,
    Medium = 3,
    LowToMedium = 4,
    Low = 5,
    ELineRule_MAX = 6,
};
#pragma pack(pop)
