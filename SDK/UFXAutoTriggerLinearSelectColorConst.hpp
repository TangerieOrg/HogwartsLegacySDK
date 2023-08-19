#pragma once
#include <cstdint>
#include "FLinearColor.hpp"
#include "UFXAutoTriggerLinearColor.hpp"
class UFXAutoTriggerBool;
#pragma pack(push, 1)
class UFXAutoTriggerLinearSelectColorConst : public UFXAutoTriggerLinearColor {
public:
    UFXAutoTriggerBool* Condition; // 0x28
    FLinearColor ColorTrue; // 0x30
    FLinearColor ColorFalse; // 0x40
    static UFXAutoTriggerLinearSelectColorConst* StaticClass();
}; // Size: 0x50
#pragma pack(pop)
