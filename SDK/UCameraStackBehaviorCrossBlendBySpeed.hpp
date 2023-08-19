#pragma once
#include <cstdint>
#include "FRuntimeFloatCurve.hpp"
#include "UCameraStackBehaviorMultiCrossBlendStandalone.hpp"
#pragma pack(push, 1)
class UCameraStackBehaviorCrossBlendBySpeed : public UCameraStackBehaviorMultiCrossBlendStandalone {
public:
    FRuntimeFloatCurve SpeedToWeightCurve; // 0x368
    bool bHorizontalSpeed; // 0x3f0
    char pad_3f1[0x7];
    static UCameraStackBehaviorCrossBlendBySpeed* StaticClass();
}; // Size: 0x3f8
#pragma pack(pop)
