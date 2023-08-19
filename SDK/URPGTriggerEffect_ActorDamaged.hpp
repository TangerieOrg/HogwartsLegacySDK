#pragma once
#include <cstdint>
#include "URPGTriggerEffect_Base.hpp"
class AActor;
#pragma pack(push, 1)
class URPGTriggerEffect_ActorDamaged : public URPGTriggerEffect_Base {
public:
    bool OnlyOnCharacterDied; // 0x40
    bool OnEnemy; // 0x41
    char pad_42[0xe];
    AActor* Owner; // 0x50
    static URPGTriggerEffect_ActorDamaged* StaticClass();
}; // Size: 0x58
#pragma pack(pop)
