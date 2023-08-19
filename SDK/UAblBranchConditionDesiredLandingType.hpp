#pragma once
#include <cstdint>
#include "ECreatureLandingType.hpp"
#include "UAblBranchCondition.hpp"
#pragma pack(push, 1)
class UAblBranchConditionDesiredLandingType : public UAblBranchCondition {
public:
    TArray<ECreatureLandingType> LandingTypes; // 0x30
    static UAblBranchConditionDesiredLandingType* StaticClass();
}; // Size: 0x40
#pragma pack(pop)
