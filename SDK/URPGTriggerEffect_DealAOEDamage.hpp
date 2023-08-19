#pragma once
#include <cstdint>
#include "URPGTriggerEffect_Base.hpp"
#pragma pack(push, 1)
class URPGTriggerEffect_DealAOEDamage : public URPGTriggerEffect_Base {
public:
    int32_t DamageAmount; // 0x40
    int32_t DamageRadius; // 0x44
    static URPGTriggerEffect_DealAOEDamage* StaticClass();
}; // Size: 0x48
#pragma pack(pop)
