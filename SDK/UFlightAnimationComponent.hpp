#pragma once
#include <cstdint>
#include "FBoneReferenceEx.hpp"
#include "UActorComponent.hpp"
#pragma pack(push, 1)
class UFlightAnimationComponent : public UActorComponent {
public:
    FBoneReferenceEx RootBone; // 0xc8
    FBoneReferenceEx NeckBone; // 0xd8
    float MinLiftSpeedPercent; // 0xe8
    float MaxLiftSpeedPercent; // 0xec
    float MaxLiftAngle; // 0xf0
    float MaxNeckRollAngle; // 0xf4
    float MinAccelerationPercent; // 0xf8
    float MaxAnimRate; // 0xfc
    float MaxAccelerationPercent; // 0x100
    float MinVelocityPercent; // 0x104
    float MaxGlideTime; // 0x108
    float MinGlideResetTime; // 0x10c
    float GlideTimeDescentSpeedThreshold; // 0x110
    char pad_114[0x14];
    static UFlightAnimationComponent* StaticClass();
}; // Size: 0x128
#pragma pack(pop)
