#pragma once
#include <cstdint>
#include "FRuntimeFloatCurve.hpp"
#include "UCameraStackBehaviorBlend.hpp"
#pragma pack(push, 1)
class UCameraStackBehaviorTargetPitchToPitch : public UCameraStackBehaviorBlend {
public:
    FRuntimeFloatCurve TargetPitchToPitchCurve; // 0x1b8
    float InterpSpeed; // 0x240
    float OutputInterpSpeed; // 0x244
    char pad_248[0x20];
    static UCameraStackBehaviorTargetPitchToPitch* StaticClass();
}; // Size: 0x268
#pragma pack(pop)
