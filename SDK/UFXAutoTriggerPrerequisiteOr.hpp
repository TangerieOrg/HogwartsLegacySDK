#pragma once
#include <cstdint>
#include "UFXAutoTriggerPrerequisiteBase.hpp"
#pragma pack(push, 1)
class UFXAutoTriggerPrerequisiteOr : public UFXAutoTriggerPrerequisiteBase {
public:
    TArray<UFXAutoTriggerPrerequisiteBase*> Conditions; // 0x28
    static UFXAutoTriggerPrerequisiteOr* StaticClass();
}; // Size: 0x38
#pragma pack(pop)
