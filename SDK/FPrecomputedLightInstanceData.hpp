#pragma once
#include <cstdint>
#include "FGuid.hpp"
#include "FSceneComponentInstanceData.hpp"
#include "FTransform.hpp"
#pragma pack(push, 1)
struct FPrecomputedLightInstanceData : public FSceneComponentInstanceData {
    char pad_b8[0x8];
    FTransform Transform; // 0xc0
    FGuid LightGuid; // 0xf0
    int32_t PreviewShadowMapChannel; // 0x100
    char pad_104[0xc];
}; // Size: 0x110
#pragma pack(pop)
