#pragma once
#include <cstdint>
#include "ESlaveToSplineUpdateMode.hpp"
#include "USceneComponent.hpp"
class USplineComponent;
#pragma pack(push, 1)
class USlaveToSplineComponent : public USceneComponent {
public:
    float SplineT; // 0x220
    float SplineTReset; // 0x224
    bool bUseConstantVelocity; // 0x228
    bool bPositionOnly; // 0x229
    bool bIncludeScale; // 0x22a
    bool bReverseDirection; // 0x22b
    bool bFollowEnabled; // 0x22c
    char pad_22d[0x3];
    static USlaveToSplineComponent* StaticClass();
    void SetSplineT(float newT, bool& Done);
    void Reset();
    USplineComponent* GetFollowSpline();
}; // Size: 0x230
#pragma pack(pop)
