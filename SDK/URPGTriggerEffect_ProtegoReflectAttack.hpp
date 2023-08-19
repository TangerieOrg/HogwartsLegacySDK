#pragma once
#include <cstdint>
#include "URPGTriggerEffect_Base.hpp"
class AActor;
#pragma pack(push, 1)
class URPGTriggerEffect_ProtegoReflectAttack : public URPGTriggerEffect_Base {
public:
    char pad_40[0x8];
    AActor* Owner; // 0x48
    static URPGTriggerEffect_ProtegoReflectAttack* StaticClass();
}; // Size: 0x50
#pragma pack(pop)
