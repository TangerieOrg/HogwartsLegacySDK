#pragma once
#include <cstdint>
#include "URPGTriggerEffect_Base.hpp"
#pragma pack(push, 1)
class URPGTriggerEffect_AdjustHealth : public URPGTriggerEffect_Base {
public:
    bool bRelyOnItemEffectiveness; // 0x40
    char pad_41[0x3];
    float HealthAdjustAmount; // 0x44
    bool bAdjustAsPercentage; // 0x48
    bool bApplyOnce; // 0x49
    char pad_4a[0x2];
    float Duration; // 0x4c
    TArray<URPGTriggerEffect_Base*> OnBeginHealingTriggerEffects; // 0x50
    TArray<URPGTriggerEffect_Base*> OnEndHealingTriggerEffects; // 0x60
    char pad_70[0x8];
    static URPGTriggerEffect_AdjustHealth* StaticClass();
}; // Size: 0x78
#pragma pack(pop)
