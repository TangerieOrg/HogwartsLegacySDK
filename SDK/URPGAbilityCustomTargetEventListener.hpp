#pragma once
#include <cstdint>
#include "URPGAbilityEventListener.hpp"
class AActor;
#pragma pack(push, 1)
class URPGAbilityCustomTargetEventListener : public URPGAbilityEventListener {
public:
    AActor* TargetActor; // 0x98
    static URPGAbilityCustomTargetEventListener* StaticClass();
}; // Size: 0xa0
#pragma pack(pop)
