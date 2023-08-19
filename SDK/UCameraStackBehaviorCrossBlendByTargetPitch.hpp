#pragma once
#include <cstdint>
#include "FRuntimeFloatCurve.hpp"
#include "UCameraStackBehaviorMultiCrossBlendStandalone.hpp"
#pragma pack(push, 1)
class UCameraStackBehaviorCrossBlendByTargetPitch : public UCameraStackBehaviorMultiCrossBlendStandalone {
public:
    FRuntimeFloatCurve TargetPitchToWeightCurve; // 0x368
    static UCameraStackBehaviorCrossBlendByTargetPitch* StaticClass();
}; // Size: 0x3f0
#pragma pack(pop)
