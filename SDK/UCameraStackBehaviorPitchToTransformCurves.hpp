#pragma once
#include <cstdint>
#include "UCameraStackBehaviorBlend.hpp"
class UCameraStackTransformCurveData;
#pragma pack(push, 1)
class UCameraStackBehaviorPitchToTransformCurves : public UCameraStackBehaviorBlend {
public:
    char pad_1b8[0x8];
    UCameraStackTransformCurveData* CurveData; // 0x1c0
    char pad_1c8[0x58];
    static UCameraStackBehaviorPitchToTransformCurves* StaticClass();
}; // Size: 0x220
#pragma pack(pop)
