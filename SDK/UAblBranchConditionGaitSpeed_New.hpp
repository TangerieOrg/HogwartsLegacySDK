#pragma once
#include <cstdint>
#include "EAblGaitSpeed.hpp"
#include "ESpeedType\Type.hpp"
#include "UAblTaskCondition.hpp"
#pragma pack(push, 1)
class UAblBranchConditionGaitSpeed_New : public UAblTaskCondition {
public:
    TArray<EAblGaitSpeed> GaitSpeeds; // 0x28
    ESpeedType::Type SpeedType; // 0x38
    char pad_39[0x3];
    float BufferSampleTime; // 0x3c
    static UAblBranchConditionGaitSpeed_New* StaticClass();
}; // Size: 0x40
#pragma pack(pop)
