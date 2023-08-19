#pragma once
#include <cstdint>
#include "UCameraStackBehaviorBlend.hpp"
class UCurveFloat;
#pragma pack(push, 1)
class UCameraStackBehaviorPitchToFocalLength : public UCameraStackBehaviorBlend {
public:
    float DefaultFocalLength; // 0x1b8
    char pad_1bc[0x4];
    UCurveFloat* PitchToFocalLengthCurve; // 0x1c0
    char pad_1c8[0x10];
    static UCameraStackBehaviorPitchToFocalLength* StaticClass();
}; // Size: 0x1d8
#pragma pack(pop)
