#pragma once
#include <cstdint>
#include "EGlobalLightingBlendableInputType.hpp"
#include "UGlobalLightingBlendable.hpp"
class UDirectionalLightDirection;
class UDirectionalLightParams;
#pragma pack(push, 1)
class UGlobalLightingBlendableSecondaryLight : public UGlobalLightingBlendable {
public:
    UDirectionalLightDirection* SecondaryDirectionalLightDirection; // 0x28
    UDirectionalLightParams* SecondaryDirectionalLightParameters; // 0x30
    EGlobalLightingBlendableInputType OverrideSource; // 0x38
    char pad_39[0x7];
    static UGlobalLightingBlendableSecondaryLight* StaticClass();
}; // Size: 0x40
#pragma pack(pop)
