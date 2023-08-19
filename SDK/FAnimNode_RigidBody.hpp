#pragma once
#include <cstdint>
#include "ECollisionChannel.hpp"
#include "ESimulationSpace.hpp"
#include "FAnimNode_SkeletalControlBase.hpp"
#include "FBoneReference.hpp"
#include "FSimSpaceSettings.hpp"
#include "FVector.hpp"
class UPhysicsAsset;
#pragma pack(push, 1)
struct FAnimNode_RigidBody : public FAnimNode_SkeletalControlBase {
    UPhysicsAsset* OverridePhysicsAsset; // 0xc8
    char pad_d0[0x98];
    FVector OverrideWorldGravity; // 0x168
    FVector ExternalForce; // 0x174
    FVector ComponentLinearAccScale; // 0x180
    FVector ComponentLinearVelScale; // 0x18c
    FVector ComponentAppliedLinearAccClamp; // 0x198
    FSimSpaceSettings SimSpaceSettings; // 0x1a4
    float CachedBoundsScale; // 0x1e4
    FBoneReference BaseBoneRef; // 0x1e8
    ECollisionChannel OverlapChannel; // 0x1f8
    ESimulationSpace SimulationSpace; // 0x1f9
    bool bForceDisableCollisionBetweenConstraintBodies; // 0x1fa
    char pad_1fb[0x1];
    uint8_t bEnableWorldGeometry : 1; // 0x1fc
    uint8_t bOverrideWorldGravity : 1; // 0x1fc
    uint8_t bTransferBoneVelocities : 1; // 0x1fc
    uint8_t bFreezeIncomingPoseOnStart : 1; // 0x1fc
    uint8_t bClampLinearTranslationLimitToRefPose : 1; // 0x1fc
    uint8_t pad_bitfield_1fc_5 : 3;
    char pad_1fd[0x3];
    float WorldSpaceMinimumScale; // 0x200
    float EvaluationResetTime; // 0x204
    char pad_208[0x638];
}; // Size: 0x840
#pragma pack(pop)
