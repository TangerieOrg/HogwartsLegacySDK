#pragma once
#include <cstdint>
#include "FVector.hpp"
#include "UCameraStackBehaviorBlend.hpp"
class UCameraStackSplineGetter;
#pragma pack(push, 1)
class UCameraStackBehaviorAttachToSpline : public UCameraStackBehaviorBlend {
public:
    UCameraStackSplineGetter* SplineGetter; // 0x1b8
    FVector CameraTargetOffset; // 0x1c0
    float DistanceFromTarget; // 0x1cc
    bool bDebugDraw; // 0x1d0
    char pad_1d1[0x77];
    static UCameraStackBehaviorAttachToSpline* StaticClass();
}; // Size: 0x248
#pragma pack(pop)
