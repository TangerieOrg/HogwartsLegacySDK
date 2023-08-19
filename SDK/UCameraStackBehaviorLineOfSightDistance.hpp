#pragma once
#include <cstdint>
#include "ECollisionChannel.hpp"
#include "UCameraStackBehaviorBlend.hpp"
#pragma pack(push, 1)
class UCameraStackBehaviorLineOfSightDistance : public UCameraStackBehaviorBlend {
public:
    bool bDrawDebug; // 0x1b8
    char pad_1b9[0x3];
    float MaximumAngleInDegrees; // 0x1bc
    int32_t SweepCountPerUpdate; // 0x1c0
    float SecondsBetweenSweeps; // 0x1c4
    float StepSizeInDegrees; // 0x1c8
    ECollisionChannel ProbeChannel; // 0x1cc
    char pad_1cd[0x3];
    float ProbeSize; // 0x1d0
    float SweepLength; // 0x1d4
    FName TraceTagName; // 0x1d8
    float MinArmLength; // 0x1e0
    float MinTargetMovingSpeed; // 0x1e4
    float MinTargetMovingTime; // 0x1e8
    float CameraReturnSpeed; // 0x1ec
    char pad_1f0[0x38];
    static UCameraStackBehaviorLineOfSightDistance* StaticClass();
}; // Size: 0x228
#pragma pack(pop)
