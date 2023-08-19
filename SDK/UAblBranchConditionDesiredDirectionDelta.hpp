#pragma once
#include <cstdint>
#include "EDesiredDeltaOperator\Type.hpp"
#include "EDesiredDeltaSourceDirection\Type.hpp"
#include "EDesiredDeltaTargetTracker\Type.hpp"
#include "FVector2D.hpp"
#include "UAblBranchCondition.hpp"
#pragma pack(push, 1)
class UAblBranchConditionDesiredDirectionDelta : public UAblBranchCondition {
public:
    EDesiredDeltaSourceDirection::Type UseSourceDirection; // 0x30
    EDesiredDeltaTargetTracker::Type UseTracker; // 0x31
    char pad_32[0x2];
    float BufferSampleTime; // 0x34
    bool bAbsoulteValue; // 0x38
    EDesiredDeltaOperator::Type UseOperator; // 0x39
    char pad_3a[0x2];
    FVector2D AngleRange; // 0x3c
    char pad_44[0x4];
    static UAblBranchConditionDesiredDirectionDelta* StaticClass();
}; // Size: 0x48
#pragma pack(pop)
