#pragma once
#include <cstdint>
#include "EClimbingLadderState\Type.hpp"
#include "UablMotionAdjustTargetLocationGetter.hpp"
#pragma pack(push, 1)
class UablMotionAdjustClimbingLadderLocationGetter : public UablMotionAdjustTargetLocationGetter {
public:
    EClimbingLadderState::Type ClimbingLadderState; // 0x28
    char pad_29[0x7];
    static UablMotionAdjustClimbingLadderLocationGetter* StaticClass();
}; // Size: 0x30
#pragma pack(pop)
