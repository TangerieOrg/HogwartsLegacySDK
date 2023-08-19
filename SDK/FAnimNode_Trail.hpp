#pragma once
#include <cstdint>
#include "EAxis\Type.hpp"
#include "FAnimNode_SkeletalControlBase.hpp"
#include "FAnimPhysPlanarLimit.hpp"
#include "FBoneReference.hpp"
#include "FInputScaleBiasClamp.hpp"
#include "FRotationLimit.hpp"
#include "FRuntimeFloatCurve.hpp"
#include "FVector.hpp"
#pragma pack(push, 1)
struct FAnimNode_Trail : public FAnimNode_SkeletalControlBase {
    char pad_c8[0x38];
    FBoneReference TrailBone; // 0x100
    int32_t ChainLength; // 0x110
    EAxis::Type ChainBoneAxis; // 0x114
    uint8_t bInvertChainBoneAxis : 1; // 0x115
    uint8_t bLimitStretch : 1; // 0x115
    uint8_t bLimitRotation : 1; // 0x115
    uint8_t bUsePlanarLimit : 1; // 0x115
    uint8_t bActorSpaceFakeVel : 1; // 0x115
    uint8_t bReorientParentToChild : 1; // 0x115
    uint8_t pad_bitfield_115_6 : 2;
    char pad_116[0x2];
    float MaxDeltaTime; // 0x118
    float RelaxationSpeedScale; // 0x11c
    FRuntimeFloatCurve TrailRelaxationSpeed; // 0x120
    FInputScaleBiasClamp RelaxationSpeedScaleInputProcessor; // 0x1a8
    TArray<FRotationLimit> RotationLimits; // 0x1d8
    TArray<FVector> RotationOffsets; // 0x1e8
    TArray<FAnimPhysPlanarLimit> PlanarLimits; // 0x1f8
    float StretchLimit; // 0x208
    FVector FakeVelocity; // 0x20c
    FBoneReference BaseJoint; // 0x218
    float LastBoneRotationAnimAlphaBlend; // 0x228
    char pad_22c[0x34];
}; // Size: 0x260
#pragma pack(pop)
