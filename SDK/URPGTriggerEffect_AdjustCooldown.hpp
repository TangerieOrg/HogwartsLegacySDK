#pragma once
#include <cstdint>
#include "URPGTriggerEffect_Base.hpp"
#pragma pack(push, 1)
class URPGTriggerEffect_AdjustCooldown : public URPGTriggerEffect_Base {
public:
    bool bRelyOnItemEffectiveness; // 0x40
    char pad_41[0x3];
    float CooldownAdjustAmount; // 0x44
    static URPGTriggerEffect_AdjustCooldown* StaticClass();
}; // Size: 0x48
#pragma pack(pop)
