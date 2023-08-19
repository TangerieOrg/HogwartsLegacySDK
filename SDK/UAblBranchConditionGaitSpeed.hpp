#pragma once
#include <cstdint>
#include "EAblGaitSpeed.hpp"
#include "ESpeedType\Type.hpp"
#include "UAblBranchCondition.hpp"
#pragma pack(push, 1)
class UAblBranchConditionGaitSpeed : public UAblBranchCondition {
public:
    TArray<EAblGaitSpeed> GaitSpeeds; // 0x30
    ESpeedType::Type SpeedType; // 0x40
    char pad_41[0x3];
    float BufferSampleTime; // 0x44
    static UAblBranchConditionGaitSpeed* StaticClass();
}; // Size: 0x48
#pragma pack(pop)
