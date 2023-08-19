#pragma once
#include <cstdint>
#include "EObjectStateBranchCondition.hpp"
#include "UAblTaskCondition.hpp"
#pragma pack(push, 1)
class UAblBranchConditionObjectState_New : public UAblTaskCondition {
public:
    bool bCheckDeathState; // 0x28
    EObjectStateBranchCondition ObjectStateBranchCondition; // 0x29
    bool bCheckDatabaseId; // 0x2a
    char pad_2b[0x5];
    TArray<FName> DatabaseIds; // 0x30
    bool bCheckSubtypeId; // 0x40
    char pad_41[0x7];
    TArray<FName> SubtypeIds; // 0x48
    bool bInWater; // 0x58
    bool bNotInWater; // 0x59
    bool bInvert; // 0x5a
    char pad_5b[0x5];
    static UAblBranchConditionObjectState_New* StaticClass();
}; // Size: 0x60
#pragma pack(pop)
