#pragma once
#include <cstdint>
#include "URPGTriggerEffect_ActorDamaged.hpp"
#pragma pack(push, 1)
class URPGTriggerEffect_ReflectDamageOnCursed : public URPGTriggerEffect_ActorDamaged {
public:
    bool RequiresCursed; // 0x58
    bool OnPlayer; // 0x59
    char pad_5a[0x2];
    float DamageScale; // 0x5c
    static URPGTriggerEffect_ReflectDamageOnCursed* StaticClass();
}; // Size: 0x60
#pragma pack(pop)
