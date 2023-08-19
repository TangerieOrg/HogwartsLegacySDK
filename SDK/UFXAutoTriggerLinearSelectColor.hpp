#pragma once
#include <cstdint>
#include "UFXAutoTriggerLinearColor.hpp"
class UFXAutoTriggerBool;
#pragma pack(push, 1)
class UFXAutoTriggerLinearSelectColor : public UFXAutoTriggerLinearColor {
public:
    UFXAutoTriggerBool* Condition; // 0x28
    UFXAutoTriggerLinearColor* ColorTrue; // 0x30
    UFXAutoTriggerLinearColor* ColorFalse; // 0x38
    static UFXAutoTriggerLinearSelectColor* StaticClass();
}; // Size: 0x40
#pragma pack(pop)
