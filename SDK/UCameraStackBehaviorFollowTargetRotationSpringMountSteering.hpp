#pragma once
#include <cstdint>
#include "FVector2D.hpp"
#include "UCameraStackBehaviorFollowTargetRotationSpring.hpp"
#pragma pack(push, 1)
class UCameraStackBehaviorFollowTargetRotationSpringMountSteering : public UCameraStackBehaviorFollowTargetRotationSpring {
public:
    float MaximumInput; // 0x218
    float InputAlphaInterpSpeed; // 0x21c
    FVector2D SpineDeltaMappedRange; // 0x220
    char pad_228[0x10];
    static UCameraStackBehaviorFollowTargetRotationSpringMountSteering* StaticClass();
}; // Size: 0x238
#pragma pack(pop)
