#pragma once
#include <cstdint>
#include "ETargetID\Type.hpp"
#include "ETargetType\Type.hpp"
#include "EUseTargetTracker\Type.hpp"
#include "UAblBranchCondition.hpp"
#pragma pack(push, 1)
class UAblBranchConditionTargetTracker_AnyValidTargets : public UAblBranchCondition {
public:
    EUseTargetTracker::Type UseTracker; // 0x30
    bool bReturnTrueIfTargetListEmptyThisFrame; // 0x31
    ETargetID::Type MatchTargetID; // 0x32
    ETargetType::Type MatchTargetType; // 0x33
    char pad_34[0x4];
    static UAblBranchConditionTargetTracker_AnyValidTargets* StaticClass();
}; // Size: 0x38
#pragma pack(pop)
