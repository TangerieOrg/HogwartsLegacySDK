#pragma once
#include <cstdint>
#include "FCameraOptionName.hpp"
#include "FVector.hpp"
#include "FVector2D.hpp"
#include "UCameraStackBehaviorLookAtBase.hpp"
class UCameraStackSplineGetter;
#pragma pack(push, 1)
class UCameraStackBehaviorLookAheadAlongSpline : public UCameraStackBehaviorLookAtBase {
public:
    UCameraStackSplineGetter* SplineGetter; // 0x290
    FVector CameraTargetOffset; // 0x298
    FVector2D DistanceFromSplineThresholdRange; // 0x2a4
    FVector2D HeightDifferenceFromSplineThresholdRange; // 0x2ac
    float LookAheadDistance; // 0x2b4
    float PointOrDirectionInterp; // 0x2b8
    float TargetOffsetFactor; // 0x2bc
    bool bOnlyInForwardDirection; // 0x2c0
    char pad_2c1[0x3];
    FVector2D DirectionDifferenceFromSplineThresholdRange; // 0x2c4
    bool bReturnPitchToDefault; // 0x2cc
    char pad_2cd[0x3];
    FCameraOptionName FollowCameraSpeedOptionName; // 0x2d0
    bool bDebugDraw; // 0x2d8
    char pad_2d9[0x2f];
    static UCameraStackBehaviorLookAheadAlongSpline* StaticClass();
}; // Size: 0x308
#pragma pack(pop)
