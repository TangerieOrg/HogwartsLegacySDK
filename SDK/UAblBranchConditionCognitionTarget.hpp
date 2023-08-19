#pragma once
#include <cstdint>
#include "UAblBranchCondition.hpp"
class UClass;
#pragma pack(push, 1)
class UAblBranchConditionCognitionTarget : public UAblBranchCondition {
public:
    UClass* CognitionSense; // 0x30
    UClass* MatchActorType; // 0x38
    static UAblBranchConditionCognitionTarget* StaticClass();
}; // Size: 0x40
#pragma pack(pop)
