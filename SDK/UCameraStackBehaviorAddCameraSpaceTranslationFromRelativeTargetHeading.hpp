#pragma once
#include <cstdint>
#include "FRuntimeCurveVector.hpp"
#include "UCameraStackBehaviorBlend.hpp"
#pragma pack(push, 1)
class UCameraStackBehaviorAddCameraSpaceTranslationFromRelativeTargetHeading : public UCameraStackBehaviorBlend {
public:
    FRuntimeCurveVector YawToTranslationCurve; // 0x1b8
    float InterpSpeed; // 0x340
    char pad_344[0x1c];
    static UCameraStackBehaviorAddCameraSpaceTranslationFromRelativeTargetHeading* StaticClass();
}; // Size: 0x360
#pragma pack(pop)
