#pragma once
#include <cstdint>
#include "EGlobalLightingBlendableInputType.hpp"
#include "UGlobalLightingBlendable.hpp"
class USkyLightParams;
#pragma pack(push, 1)
class UGlobalLightingBlendableSkyLight : public UGlobalLightingBlendable {
public:
    USkyLightParams* SkyLightParameters; // 0x28
    EGlobalLightingBlendableInputType OverrideSource; // 0x30
    char pad_31[0x7];
    static UGlobalLightingBlendableSkyLight* StaticClass();
}; // Size: 0x38
#pragma pack(pop)
