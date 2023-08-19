#pragma once
#include <cstdint>
#include "EClothingWindMethod_Legacy.hpp"
#include "FClothConstraintSetup_Legacy.hpp"
#include "FVector.hpp"
#pragma pack(push, 1)
struct FClothConfig_Legacy {
    EClothingWindMethod_Legacy WindMethod; // 0x0
    char pad_1[0x3];
    FClothConstraintSetup_Legacy VerticalConstraintConfig; // 0x4
    FClothConstraintSetup_Legacy HorizontalConstraintConfig; // 0x14
    FClothConstraintSetup_Legacy BendConstraintConfig; // 0x24
    FClothConstraintSetup_Legacy ShearConstraintConfig; // 0x34
    float SelfCollisionRadius; // 0x44
    float SelfCollisionStiffness; // 0x48
    float SelfCollisionCullScale; // 0x4c
    FVector Damping; // 0x50
    float Friction; // 0x5c
    float WindDragCoefficient; // 0x60
    float WindLiftCoefficient; // 0x64
    FVector LinearDrag; // 0x68
    FVector AngularDrag; // 0x74
    FVector LinearInertiaScale; // 0x80
    FVector AngularInertiaScale; // 0x8c
    FVector CentrifugalInertiaScale; // 0x98
    float SolverFrequency; // 0xa4
    float StiffnessFrequency; // 0xa8
    float GravityScale; // 0xac
    FVector GravityOverride; // 0xb0
    bool bUseGravityOverride; // 0xbc
    char pad_bd[0x3];
    float TetherStiffness; // 0xc0
    float TetherLimit; // 0xc4
    float CollisionThickness; // 0xc8
    float AnimDriveSpringStiffness; // 0xcc
    float AnimDriveDamperStiffness; // 0xd0
}; // Size: 0xd4
#pragma pack(pop)
