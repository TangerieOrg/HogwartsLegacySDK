#pragma once
#include <cstdint>
#include "UFXAutoTriggerPrerequisiteBase.hpp"
#pragma pack(push, 1)
class UFXAutoTriggerPrerequisiteNot : public UFXAutoTriggerPrerequisiteBase {
public:
    UFXAutoTriggerPrerequisiteBase* Condition; // 0x28
    static UFXAutoTriggerPrerequisiteNot* StaticClass();
}; // Size: 0x30
#pragma pack(pop)
