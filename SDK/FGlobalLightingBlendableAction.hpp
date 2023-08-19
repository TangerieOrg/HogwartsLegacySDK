#pragma once
#include <cstdint>
#include "EGlobalLightingBlendableInputType.hpp"
#include "FActiveGlobalLightingBlendOps.hpp"
class UObject;
class UGlobalLightingBlendableBase;
#pragma pack(push, 1)
struct FGlobalLightingBlendableAction {
    UObject* Owner; // 0x0
    UGlobalLightingBlendableBase* Blendable; // 0x8
    float Priority; // 0x10
    float weight; // 0x14
    FActiveGlobalLightingBlendOps CachedActiveBlendOps; // 0x18
    EGlobalLightingBlendableInputType InputType; // 0x1c
    char pad_1d[0x3];
}; // Size: 0x20
#pragma pack(pop)
