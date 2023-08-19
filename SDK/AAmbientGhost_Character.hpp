#pragma once
#include <cstdint>
#include "ACharacter.hpp"
class USplineComponent;
#pragma pack(push, 1)
class AAmbientGhost_Character : public ACharacter {
public:
    char pad_4e0[0x10];
    USplineComponent* SplineComponent; // 0x4f0
    float DistanceAlongSpline; // 0x4f8
    float TravelDirection; // 0x4fc
    float TravelSpeed; // 0x500
    float YawSpeed; // 0x504
    float TurnToFacePlayerSpeed; // 0x508
    float DistanceAtWhichGhostFacesPlayer; // 0x50c
    float VerticalDistanceAtWhichGhostFacesPlayer; // 0x510
    float OuterRadius; // 0x514
    float OuterRadiusVerticalDistance; // 0x518
    float InnerRadius; // 0x51c
    float InnerRadiusVerticalDistance; // 0x520
    char pad_524[0x1c];
    static AAmbientGhost_Character* StaticClass();
    void ExitedOuterRadius();
    void ExitedInnerRadius();
    void EnteredOuterRadius();
    void EnteredInnerRadius();
}; // Size: 0x540
#pragma pack(pop)
