#pragma once
#include <cstdint>
#include "URPGTriggerEffect_ProtegoReflectAttack.hpp"
#pragma pack(push, 1)
class URPGTriggerEffect_ProtegoReflectDamageOnCursed : public URPGTriggerEffect_ProtegoReflectAttack {
public:
    float DamageScale; // 0x50
    char pad_54[0x4];
    static URPGTriggerEffect_ProtegoReflectDamageOnCursed* StaticClass();
}; // Size: 0x58
#pragma pack(pop)
