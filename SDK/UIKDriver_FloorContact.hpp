#pragma once
#include <cstdint>
#include "ECollisionChannel.hpp"
#include "FBoneReferenceEx.hpp"
#include "FIKDriver_FloorContactControl.hpp"
#include "FIKDriver_FloorContactProfile.hpp"
#include "FVector.hpp"
#include "UIKDriver.hpp"
#pragma pack(push, 1)
class UIKDriver_FloorContact : public UIKDriver {
public:
    TArray<FIKDriver_FloorContactControl> Controls; // 0x28
    FBoneReferenceEx HipBone; // 0x38
    FName HipAlphaVariableName; // 0x48
    FName HipTransformVariableName; // 0x50
    ECollisionChannel CollisionChannel; // 0x58
    char pad_59[0x3];
    float HipMultiplier; // 0x5c
    float GlobalRayTraceStartScale; // 0x60
    float GlobalRayTraceFinishScale; // 0x64
    FVector UpperBodyOffset; // 0x68
    bool bAddHipsAverageToHands; // 0x74
    bool bTraceComplex; // 0x75
    bool LimitLegExtenstion; // 0x76
    char pad_77[0x1];
    float MaxLegExtension; // 0x78
    bool bUseFK; // 0x7c
    bool bReverseFootSetup; // 0x7d
    char pad_7e[0x2];
    float ReverseFootFactor; // 0x80
    float ReverseFootInterpSpeed; // 0x84
    float RollLimit; // 0x88
    float PitchLimit; // 0x8c
    float PTransitionSpeed; // 0x90
    float RTransitionSpeed; // 0x94
    float PTransitionMaxDistance; // 0x98
    bool bFloorContact; // 0x9c
    bool DrawDebug; // 0x9d
    bool bFootStabilization; // 0x9e
    char pad_9f[0x1];
    float StabilizationThreshold; // 0xa0
    float InterpTimeHipsUp; // 0xa4
    float InterpTimeHipsDown; // 0xa8
    float UseMinToMaxHipAdjust; // 0xac
    float InterpTimeHipsUpFromCapsule; // 0xb0
    float InterpTimeHipsDownFromCapsule; // 0xb4
    float PlantRestoreSpeed; // 0xb8
    float GlobalDebugScale; // 0xbc
    char pad_c0[0x50];
    TArray<FIKDriver_FloorContactProfile> OverrideProfiles; // 0x110
    char pad_120[0xc0];
    static UIKDriver_FloorContact* StaticClass();
}; // Size: 0x1e0
#pragma pack(pop)
