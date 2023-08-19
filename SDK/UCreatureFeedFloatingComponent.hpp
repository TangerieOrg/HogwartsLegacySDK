#pragma once
#include <cstdint>
#include "FVector.hpp"
#include "UActorComponent.hpp"
class AActor;
#pragma pack(push, 1)
class UCreatureFeedFloatingComponent : public UActorComponent {
public:
    float OscillationBlendInTime; // 0xc8
    float OscillationAmplitudeVert; // 0xcc
    float OscillationFrequencyVert; // 0xd0
    float OscillationAmplitudeHoriz; // 0xd4
    float OscillationFrequencyHoriz; // 0xd8
    float OscillationRotationSpeedDegMax; // 0xdc
    float FloatingBlendTime; // 0xe0
    float FloatingBlendPow; // 0xe4
    float FloatingStiffnessDistanceMax; // 0xe8
    float FloatingStiffnessMin; // 0xec
    float FloatingStiffnessMax; // 0xf0
    float FloatingStiffnessRange; // 0xf4
    float FloatingCriticalDampingFactor; // 0xf8
    float FloatingInterpolationSpeed; // 0xfc
    float FloatingExpandTime; // 0x100
    float FloatingExpandDistanace; // 0x104
    float AttachStartDelay; // 0x108
    float AttachedBlendTime; // 0x10c
    float AttachedBlendPow; // 0x110
    float AttachedInterpolationSpeed; // 0x114
    char pad_118[0x60];
    AActor* AttachTargetActor; // 0x178
    static UCreatureFeedFloatingComponent* StaticClass();
    FVector GetAveragePelletLocation();
}; // Size: 0x180
#pragma pack(pop)
