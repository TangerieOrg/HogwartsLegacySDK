#pragma once
#include <cstdint>
#include "FRuntimeCurveVector.hpp"
#include "UCameraStackBehaviorBlend.hpp"
class UCameraStackSecondaryTargetGetter;
#pragma pack(push, 1)
class UCameraStackBehaviorAddCameraSpaceTranslationFromTargetSize : public UCameraStackBehaviorBlend {
public:
    UCameraStackSecondaryTargetGetter* Target; // 0x1b8
    FRuntimeCurveVector TranslationOffsetFromTargetSize; // 0x1c0
    bool bUpdateAtRuntime; // 0x348
    char pad_349[0x1f];
    static UCameraStackBehaviorAddCameraSpaceTranslationFromTargetSize* StaticClass();
}; // Size: 0x368
#pragma pack(pop)
