#pragma once
#include <cstdint>
#include "FRuntimeCurveVector.hpp"
#include "UCameraStackBehaviorBlend.hpp"
#pragma pack(push, 1)
class UCameraStackBehaviorAddCameraSpaceTranslationFromPitch : public UCameraStackBehaviorBlend {
public:
    FRuntimeCurveVector PitchToTranslationCurve; // 0x1b8
    char pad_340[0x18];
    static UCameraStackBehaviorAddCameraSpaceTranslationFromPitch* StaticClass();
}; // Size: 0x358
#pragma pack(pop)
