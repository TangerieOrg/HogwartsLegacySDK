#pragma once
#include <cstdint>
#include "AnimPhysCollisionType.hpp"
#include "AnimPhysSimSpaceType.hpp"
#include "FAnimNode_SkeletalControlBase.hpp"
#include "FAnimPhysConstraintSetup.hpp"
#include "FAnimPhysPlanarLimit.hpp"
#include "FAnimPhysSphericalLimit.hpp"
#include "FBoneReference.hpp"
#include "FRotationRetargetingInfo.hpp"
#include "FVector.hpp"
#pragma pack(push, 1)
struct FAnimNode_AnimDynamics : public FAnimNode_SkeletalControlBase {
    float LinearDampingOverride; // 0xc8
    float AngularDampingOverride; // 0xcc
    char pad_d0[0x60];
    FBoneReference RelativeSpaceBone; // 0x130
    FBoneReference BoundBone; // 0x140
    FBoneReference ChainEnd; // 0x150
    FVector BoxExtents; // 0x160
    FVector LocalJointOffset; // 0x16c
    float GravityScale; // 0x178
    FVector GravityOverride; // 0x17c
    float LinearSpringConstant; // 0x188
    float AngularSpringConstant; // 0x18c
    float WindScale; // 0x190
    FVector ComponentLinearAccScale; // 0x194
    FVector ComponentLinearVelScale; // 0x1a0
    FVector ComponentAppliedLinearAccClamp; // 0x1ac
    float AngularBiasOverride; // 0x1b8
    int32_t NumSolverIterationsPreUpdate; // 0x1bc
    int32_t NumSolverIterationsPostUpdate; // 0x1c0
    FAnimPhysConstraintSetup ConstraintSetup; // 0x1c4
    char pad_20c[0x4];
    TArray<FAnimPhysSphericalLimit> SphericalLimits; // 0x210
    float SphereCollisionRadius; // 0x220
    FVector ExternalForce; // 0x224
    TArray<FAnimPhysPlanarLimit> PlanarLimits; // 0x230
    AnimPhysCollisionType CollisionType; // 0x240
    AnimPhysSimSpaceType SimulationSpace; // 0x241
    char pad_242[0x2];
    uint8_t bUseSphericalLimits : 1; // 0x244
    uint8_t bUsePlanarLimit : 1; // 0x244
    uint8_t bDoUpdate : 1; // 0x244
    uint8_t bDoEval : 1; // 0x244
    uint8_t bOverrideLinearDamping : 1; // 0x244
    uint8_t bOverrideAngularBias : 1; // 0x244
    uint8_t bOverrideAngularDamping : 1; // 0x244
    uint8_t bEnableWind : 1; // 0x244
    uint8_t pad_bitfield_245_0 : 1;
    uint8_t bUseGravityOverride : 1; // 0x245
    uint8_t bLinearSpring : 1; // 0x245
    uint8_t bAngularSpring : 1; // 0x245
    uint8_t bChain : 1; // 0x245
    uint8_t pad_bitfield_245_5 : 3;
    char pad_246[0xa];
    FRotationRetargetingInfo RetargetingSettings; // 0x250
    char pad_380[0xc0];
}; // Size: 0x440
#pragma pack(pop)
