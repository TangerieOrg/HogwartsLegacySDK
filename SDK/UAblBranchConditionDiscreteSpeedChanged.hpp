#pragma once
#include <cstdint>
#include "EAblGaitSpeed.hpp"
#include "UAblBranchCondition.hpp"
#pragma pack(push, 1)
class UAblBranchConditionDiscreteSpeedChanged : public UAblBranchCondition {
public:
    bool bSpeedsMustMatch; // 0x30
    char pad_31[0x7];
    TArray<EAblGaitSpeed> LastGaitSpeeds; // 0x38
    TArray<EAblGaitSpeed> NewGaitSpeeds; // 0x48
    static UAblBranchConditionDiscreteSpeedChanged* StaticClass();
}; // Size: 0x58
#pragma pack(pop)
