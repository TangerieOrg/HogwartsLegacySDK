#pragma once
#include <cstdint>
#include "EGlobalLightingBlendableInputType.hpp"
#include "UGlobalLightingBlendable.hpp"
class UCloudsPresetParams;
#pragma pack(push, 1)
class UGlobalLightingBlendableCloudsPreset : public UGlobalLightingBlendable {
public:
    UCloudsPresetParams* CloudsPresetParameters; // 0x28
    EGlobalLightingBlendableInputType OverrideSource; // 0x30
    char pad_31[0x7];
    static UGlobalLightingBlendableCloudsPreset* StaticClass();
}; // Size: 0x38
#pragma pack(pop)
