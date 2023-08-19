#pragma once
#include <cstdint>
#include "FBoneReferenceEx.hpp"
#include "FRotator.hpp"
#include "FVector.hpp"
#include "UIKDriver.hpp"
#pragma pack(push, 1)
class UIKDriver_AimHead : public UIKDriver {
public:
    FBoneReferenceEx HeadBone; // 0x28
    TArray<FBoneReferenceEx> NeckBones; // 0x38
    TArray<FBoneReferenceEx> SpineBones; // 0x48
    float YawLimit; // 0x58
    float PitchLimit; // 0x5c
    float BackDeadZoneAngle; // 0x60
    FRotator ConeRotationOffset; // 0x64
    FRotator TaskRotationOffset; // 0x70
    float BlendSpeed; // 0x7c
    float TimeDelay; // 0x80
    float DelayStartTime; // 0x84
    FVector PrevTargetDirection; // 0x88
    char pad_94[0x24];
    static UIKDriver_AimHead* StaticClass();
}; // Size: 0xb8
#pragma pack(pop)
