#pragma once
#include <cstdint>
#include "EGlobalLightingBlendableInputType.hpp"
#include "UGlobalLightingBlendable.hpp"
class UCloudsWindParams;
#pragma pack(push, 1)
class UGlobalLightingBlendableCloudsWind : public UGlobalLightingBlendable {
public:
    UCloudsWindParams* CloudsWindParameters; // 0x28
    EGlobalLightingBlendableInputType OverrideSource; // 0x30
    char pad_31[0x7];
    static UGlobalLightingBlendableCloudsWind* StaticClass();
}; // Size: 0x38
#pragma pack(pop)
