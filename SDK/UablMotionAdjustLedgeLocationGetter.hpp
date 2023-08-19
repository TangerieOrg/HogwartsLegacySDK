#pragma once
#include <cstdint>
#include "UablMotionAdjustTargetLocationGetter.hpp"
#pragma pack(push, 1)
class UablMotionAdjustLedgeLocationGetter : public UablMotionAdjustTargetLocationGetter {
public:
    static UablMotionAdjustLedgeLocationGetter* StaticClass();
}; // Size: 0x28
#pragma pack(pop)
