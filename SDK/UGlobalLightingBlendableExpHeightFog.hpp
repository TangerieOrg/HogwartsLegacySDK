#pragma once
#include <cstdint>
#include "EGlobalLightingBlendableInputType.hpp"
#include "UGlobalLightingBlendable.hpp"
class UExpHeightFogParams;
#pragma pack(push, 1)
class UGlobalLightingBlendableExpHeightFog : public UGlobalLightingBlendable {
public:
    UExpHeightFogParams* ExpHeightFogParameters; // 0x28
    EGlobalLightingBlendableInputType OverrideSource; // 0x30
    char pad_31[0x7];
    static UGlobalLightingBlendableExpHeightFog* StaticClass();
}; // Size: 0x38
#pragma pack(pop)
