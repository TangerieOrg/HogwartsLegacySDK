#pragma once
#include <cstdint>
#include "FName_GameLogicExpression.hpp"
#include "UFXAutoTriggerBool.hpp"
#pragma pack(push, 1)
class UFXAutoTriggerBoolActorExpression : public UFXAutoTriggerBool {
public:
    FName_GameLogicExpression ActorExpression; // 0x28
    static UFXAutoTriggerBoolActorExpression* StaticClass();
}; // Size: 0x30
#pragma pack(pop)
