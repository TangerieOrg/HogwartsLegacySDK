#pragma once
#include <cstdint>
#include "FRuntimeFloatCurve.hpp"
#include "UCameraStackBehaviorBlend.hpp"
#pragma pack(push, 1)
class UCameraStackBehaviorAddArmLengthFromTargetPitch : public UCameraStackBehaviorBlend {
public:
    FRuntimeFloatCurve PitchToArmLengthOffsetCurve; // 0x1b8
    float InterpSpeed; // 0x240
    char pad_244[0x14];
    static UCameraStackBehaviorAddArmLengthFromTargetPitch* StaticClass();
}; // Size: 0x258
#pragma pack(pop)
