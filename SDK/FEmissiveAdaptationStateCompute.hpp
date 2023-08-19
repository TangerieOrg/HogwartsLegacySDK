#pragma once
#include <cstdint>
#include "FEmissiveAdaptationLerpSettings.hpp"
#include "FEmissiveAdaptationWorldState.hpp"
#pragma pack(push, 1)
struct FEmissiveAdaptationStateCompute {
    FEmissiveAdaptationWorldState WorldState; // 0x0
    FEmissiveAdaptationLerpSettings VolumeSettings; // 0x98
    float PPBloomIntensity; // 0xd8
    char pad_dc[0x4];
}; // Size: 0xe0
#pragma pack(pop)
