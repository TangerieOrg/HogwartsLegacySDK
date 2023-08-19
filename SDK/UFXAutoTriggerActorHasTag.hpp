#pragma once
#include <cstdint>
#include "UFXAutoTriggerBool.hpp"
#pragma pack(push, 1)
class UFXAutoTriggerActorHasTag : public UFXAutoTriggerBool {
public:
    FName ActorTag; // 0x28
    static UFXAutoTriggerActorHasTag* StaticClass();
}; // Size: 0x30
#pragma pack(pop)
