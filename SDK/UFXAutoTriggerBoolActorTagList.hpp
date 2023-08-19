#pragma once
#include <cstdint>
#include "UFXAutoTriggerBool.hpp"
#pragma pack(push, 1)
class UFXAutoTriggerBoolActorTagList : public UFXAutoTriggerBool {
public:
    TArray<FName> ActorTags; // 0x28
    static UFXAutoTriggerBoolActorTagList* StaticClass();
}; // Size: 0x38
#pragma pack(pop)
