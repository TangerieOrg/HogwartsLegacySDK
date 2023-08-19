#pragma once
#include <cstdint>
#include "FRuntimeFloatCurve.hpp"
#include "FVector.hpp"
#include "UCameraStackBehaviorBlend.hpp"
#pragma pack(push, 1)
class UCameraStackBehaviorAdjustArmFromTargetVelocity : public UCameraStackBehaviorBlend {
public:
    FVector Scale; // 0x1b8
    char pad_1c4[0x4];
    FRuntimeFloatCurve AngleToScale; // 0x1c8
    float VelocityFilterHalflife; // 0x250
    float SpeedFilterHalflife; // 0x254
    float ScaleFilterHalflife; // 0x258
    bool bDrawDebug; // 0x25c
    char pad_25d[0x73];
    static UCameraStackBehaviorAdjustArmFromTargetVelocity* StaticClass();
    void SetVelocityFilterHalflife(float InHalflife);
    void SetScaleFilterHalflife(float InHalflife);
}; // Size: 0x2d0
#pragma pack(pop)
