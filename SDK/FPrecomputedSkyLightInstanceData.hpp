#pragma once
#include <cstdint>
#include "FGuid.hpp"
#include "FSceneComponentInstanceData.hpp"
#pragma pack(push, 1)
struct FPrecomputedSkyLightInstanceData : public FSceneComponentInstanceData {
    FGuid LightGuid; // 0xb8
    float AverageBrightness; // 0xc8
    char pad_cc[0xa4];
}; // Size: 0x170
#pragma pack(pop)
