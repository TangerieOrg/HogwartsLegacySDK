#pragma once
#include <cstdint>
#include "ECruiseSpeed.hpp"
#include "FAnimationRequestLayerReference.hpp"
#include "FTimeRigOutputSymbol.hpp"
#include "USceneRigObjectActionBase.hpp"
class UAnimationProvider;
class USceneAction_Animation;
class UTransformProvider;
#pragma pack(push, 1)
class USceneAction_StitchingEnter : public USceneRigObjectActionBase {
public:
    UAnimationProvider* Animation; // 0xa0
    FAnimationRequestLayerReference Layer; // 0xa8
    USceneAction_Animation* PreviousAnimationAction; // 0xb0
    USceneAction_Animation* NextAnimationAction; // 0xb8
    UTransformProvider* StartPlacement; // 0xc0
    UTransformProvider* EndPlacement; // 0xc8
    float EndSpeed; // 0xd0
    char pad_d4[0x4];
    UTransformProvider* PreviewPlacement; // 0xd8
    float PreviewStartSpeed; // 0xe0
    int32_t StepsToIterateStartPhases; // 0xe4
    TArray<UTransformProvider*> AdditionalSplinePoints; // 0xe8
    bool StartPhaseRequiresNoMatch; // 0xf8
    bool EndPhaseRequiresNoMatch; // 0xf9
    char pad_fa[0x2];
    float InBlendTime; // 0xfc
    bool InBlendIsInertial; // 0x100
    char pad_101[0x3];
    float MidBlendTime; // 0x104
    bool MidBlendIsInertial; // 0x108
    char pad_109[0x3];
    float OutBlendTime; // 0x10c
    bool OutBlendIsInertial; // 0x110
    char pad_111[0x3];
    float PostAnimationInertialBlendTime; // 0x114
    bool ScaleRootMotion; // 0x118
    bool WarpStride; // 0x119
    char pad_11a[0x2];
    float StrideWarpFactor; // 0x11c
    bool HoldFootPositionWhenPlanted; // 0x120
    char pad_121[0x3];
    float StrideBias; // 0x124
    bool ModifySpeedAndDuration; // 0x128
    char pad_129[0x3];
    float MinCadenceFactor; // 0x12c
    float MaxCadenceFactor; // 0x130
    float MinStrideFactor; // 0x134
    float MaxStrideFactor; // 0x138
    float StartPhaseOffset; // 0x13c
    float EndPhaseOffset; // 0x140
    bool TrapezoidalVelocity; // 0x144
    char pad_145[0x3];
    float Acceleration; // 0x148
    float Deceleration; // 0x14c
    ECruiseSpeed CruiseSpeedChoice; // 0x150
    char pad_151[0x3];
    float SpecifiedCruisingSpeed; // 0x154
    bool CastRayToDetectFloor; // 0x158
    char pad_159[0x3];
    float VerticalCapsuleOffset; // 0x15c
    FTimeRigOutputSymbol BlendIn; // 0x160
    FTimeRigOutputSymbol StitchEnds; // 0x178
    FTimeRigOutputSymbol BlendOut; // 0x190
    bool bExitStitch; // 0x1a8
    char pad_1a9[0x3];
    float ExitTurningRate; // 0x1ac
    static USceneAction_StitchingEnter* StaticClass();
}; // Size: 0x1b0
#pragma pack(pop)
