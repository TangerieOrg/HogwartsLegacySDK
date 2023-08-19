#pragma once
#include <cstdint>
#include "URPGTriggerEffect_Base.hpp"
#pragma pack(push, 1)
class URPGTriggerEffect_PropagateHealingToCompanions : public URPGTriggerEffect_Base {
public:
    float Multiplier; // 0x40
    char pad_44[0xc];
    static URPGTriggerEffect_PropagateHealingToCompanions* StaticClass();
}; // Size: 0x50
#pragma pack(pop)
