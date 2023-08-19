#pragma once
#include <cstdint>
#include "ESpeedInclusivity\Type.hpp"
#include "ESpeedType\Type.hpp"
#include "FVector2D.hpp"
#include "UAblBranchCondition.hpp"
#pragma pack(push, 1)
class UAblBranchConditionSpeed : public UAblBranchCondition {
public:
    ESpeedType::Type SpeedType; // 0x30
    char pad_31[0x3];
    FVector2D SpeedRange; // 0x34
    ESpeedInclusivity::Type Inclusivity; // 0x3c
    char pad_3d[0x3];
    static UAblBranchConditionSpeed* StaticClass();
}; // Size: 0x40
#pragma pack(pop)
