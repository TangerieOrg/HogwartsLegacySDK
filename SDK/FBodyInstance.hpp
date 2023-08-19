#pragma once
#include <cstdint>
#include "ECollisionChannel.hpp"
#include "ECollisionEnabled\Type.hpp"
#include "EDOFMode\Type.hpp"
#include "ESleepFamily.hpp"
#include "FBodyInstanceCore.hpp"
#include "FCollisionResponse.hpp"
#include "FVector.hpp"
#include "FWalkableSlopeOverride.hpp"
class UPhysicalMaterial;
#pragma pack(push, 1)
struct FBodyInstance : public FBodyInstanceCore {
    char pad_18[0x6];
    ECollisionChannel ObjectType; // 0x1e
    char pad_1f[0x1];
    ECollisionEnabled::Type CollisionEnabled; // 0x20
    char pad_21[0x38];
    ESleepFamily SleepFamily; // 0x59
    EDOFMode::Type DOFMode; // 0x5a
    uint8_t bUseCCD : 1; // 0x5b
    uint8_t bIgnoreAnalyticCollisions : 1; // 0x5b
    uint8_t bNotifyRigidBodyCollision : 1; // 0x5b
    uint8_t pad_bitfield_5b_3 : 1;
    uint8_t bLockTranslation : 1; // 0x5b
    uint8_t bLockRotation : 1; // 0x5b
    uint8_t bLockXTranslation : 1; // 0x5b
    uint8_t bLockYTranslation : 1; // 0x5b
    uint8_t bLockZTranslation : 1; // 0x5c
    uint8_t bLockXRotation : 1; // 0x5c
    uint8_t bLockYRotation : 1; // 0x5c
    uint8_t bLockZRotation : 1; // 0x5c
    uint8_t bOverrideMaxAngularVelocity : 1; // 0x5c
    uint8_t pad_bitfield_5c_5 : 2;
    uint8_t bOverrideMaxDepenetrationVelocity : 1; // 0x5c
    uint8_t bOverrideWalkableSlopeOnInstance : 1; // 0x5d
    uint8_t bInterpolateWhenSubStepping : 1; // 0x5d
    uint8_t pad_bitfield_5d_2 : 6;
    char pad_5e[0xe];
    FName CollisionProfileName; // 0x6c
    uint8_t PositionSolverIterationCount; // 0x74
    uint8_t VelocitySolverIterationCount; // 0x75
    char pad_76[0x2];
    FCollisionResponse CollisionResponses; // 0x78
    float MaxDepenetrationVelocity; // 0xa8
    float MassInKgOverride; // 0xac
    char pad_b0[0x8];
    float LinearDamping; // 0xb8
    float AngularDamping; // 0xbc
    FVector CustomDOFPlaneNormal; // 0xc0
    FVector COMNudge; // 0xcc
    float MassScale; // 0xd8
    FVector InertiaTensorScale; // 0xdc
    char pad_e8[0x10];
    FWalkableSlopeOverride WalkableSlopeOverride; // 0xf8
    UPhysicalMaterial* PhysMaterialOverride; // 0x108
    float MaxAngularVelocity; // 0x110
    float CustomSleepThresholdMultiplier; // 0x114
    float StabilizationThresholdMultiplier; // 0x118
    float PhysicsBlendWeight; // 0x11c
    char pad_120[0x38];
}; // Size: 0x158
#pragma pack(pop)
