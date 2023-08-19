#pragma once
#include <cstdint>
#include "UFXAutoTriggerPrerequisiteBase.hpp"
class UFXAutoTriggerBool;
#pragma pack(push, 1)
class UFXAutoTriggerPrerequisiteBool : public UFXAutoTriggerPrerequisiteBase {
public:
    UFXAutoTriggerBool* Condition; // 0x28
    static UFXAutoTriggerPrerequisiteBool* StaticClass();
}; // Size: 0x30
#pragma pack(pop)
