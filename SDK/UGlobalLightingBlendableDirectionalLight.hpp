#pragma once
#include <cstdint>
#include "EGlobalLightingBlendableInputType.hpp"
#include "UGlobalLightingBlendable.hpp"
class UDirectionalLightDirection;
class UDirectionalLightParams;
#pragma pack(push, 1)
class UGlobalLightingBlendableDirectionalLight : public UGlobalLightingBlendable {
public:
    UDirectionalLightDirection* DirectionalLightDirection; // 0x28
    UDirectionalLightParams* DirectionalLightParameters; // 0x30
    EGlobalLightingBlendableInputType OverrideSource; // 0x38
    char pad_39[0x7];
    static UGlobalLightingBlendableDirectionalLight* StaticClass();
}; // Size: 0x40
#pragma pack(pop)
