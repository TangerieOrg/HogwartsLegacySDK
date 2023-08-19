#pragma once
#include <cstdint>
#include "FRuntimeFloatCurve.hpp"
#include "UCameraStackBehaviorBlend.hpp"
class UCameraStackSecondaryTargetGetter;
#pragma pack(push, 1)
class UCameraStackBehaviorPitchFromTargetDistance : public UCameraStackBehaviorBlend {
public:
    UCameraStackSecondaryTargetGetter* SecondaryTarget; // 0x1b8
    float PitchA; // 0x1c0
    float PitchB; // 0x1c4
    FRuntimeFloatCurve HorizontalDistanceInterpWeight; // 0x1c8
    FRuntimeFloatCurve VerticalDistanceInterpWeight; // 0x250
    bool bUseDistanceToTargetBounds; // 0x2d8
    char pad_2d9[0x17];
    static UCameraStackBehaviorPitchFromTargetDistance* StaticClass();
}; // Size: 0x2f0
#pragma pack(pop)
