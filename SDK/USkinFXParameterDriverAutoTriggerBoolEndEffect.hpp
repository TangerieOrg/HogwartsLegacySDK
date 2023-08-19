#pragma once
#include <cstdint>
#include "ESkinFXEffectEndStyle.hpp"
#include "USkinFXParameterDriverEndEffect.hpp"
class UFXAutoTriggerBool;
#pragma pack(push, 1)
class USkinFXParameterDriverAutoTriggerBoolEndEffect : public USkinFXParameterDriverEndEffect {
public:
    UFXAutoTriggerBool* AutoTriggerBool; // 0x28
    ESkinFXEffectEndStyle EndStyle; // 0x30
    char pad_31[0x7];
    static USkinFXParameterDriverAutoTriggerBoolEndEffect* StaticClass();
}; // Size: 0x38
#pragma pack(pop)
