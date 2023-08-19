#pragma once
#include <cstdint>
#include "FName_GameLogicExpression.hpp"
#include "UFXAutoTriggerBool.hpp"
#pragma pack(push, 1)
class UFXAutoTriggerBoolPlayerExpression : public UFXAutoTriggerBool {
public:
    FName_GameLogicExpression PlayerExpression; // 0x28
    static UFXAutoTriggerBoolPlayerExpression* StaticClass();
}; // Size: 0x30
#pragma pack(pop)
