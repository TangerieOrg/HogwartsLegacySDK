#pragma once
#include <cstdint>
#include "UablMotionAdjustTargetLocationGetter.hpp"
#pragma pack(push, 1)
class UablMotionAdjustBlackboardLocationGetter : public UablMotionAdjustTargetLocationGetter {
public:
    FName BlackboardKeyName; // 0x28
    static UablMotionAdjustBlackboardLocationGetter* StaticClass();
}; // Size: 0x30
#pragma pack(pop)
