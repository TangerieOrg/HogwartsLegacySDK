#pragma once
#include <cstdint>
#include "URPGTriggerEffect_ActorDamaged.hpp"
#pragma pack(push, 1)
class URPGTriggerEffect_ModifyCooldownGroupOnDamage : public URPGTriggerEffect_ActorDamaged {
public:
    FName CooldownGroup; // 0x58
    float CooldownModification; // 0x60
    char pad_64[0x4];
    static URPGTriggerEffect_ModifyCooldownGroupOnDamage* StaticClass();
}; // Size: 0x68
#pragma pack(pop)
