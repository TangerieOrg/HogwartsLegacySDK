#pragma once
#include <cstdint>
#include "EClothingWindMethodNv.hpp"
#include "EClothingWindMethod_Legacy.hpp"
#include "FClothConstraintSetupNv.hpp"
#include "FClothConstraintSetup_Legacy.hpp"
#include "FVector.hpp"
#include "UClothConfigCommon.hpp"
#pragma pack(push, 1)
class UClothConfigNv : public UClothConfigCommon {
public:
    EClothingWindMethodNv ClothingWindMethod; // 0x28
    char pad_29[0x3];
    FClothConstraintSetupNv VerticalConstraint; // 0x2c
    FClothConstraintSetupNv HorizontalConstraint; // 0x3c
    FClothConstraintSetupNv BendConstraint; // 0x4c
    FClothConstraintSetupNv ShearConstraint; // 0x5c
    float SelfCollisionRadius; // 0x6c
    float SelfCollisionStiffness; // 0x70
    float SelfCollisionCullScale; // 0x74
    FVector Damping; // 0x78
    float Friction; // 0x84
    float WindDragCoefficient; // 0x88
    float WindLiftCoefficient; // 0x8c
    FVector LinearDrag; // 0x90
    FVector AngularDrag; // 0x9c
    FVector LinearInertiaScale; // 0xa8
    FVector AngularInertiaScale; // 0xb4
    FVector CentrifugalInertiaScale; // 0xc0
    float SolverFrequency; // 0xcc
    float StiffnessFrequency; // 0xd0
    float GravityScale; // 0xd4
    FVector GravityOverride; // 0xd8
    bool bUseGravityOverride; // 0xe4
    char pad_e5[0x3];
    float TetherStiffness; // 0xe8
    float TetherLimit; // 0xec
    float CollisionThickness; // 0xf0
    float AnimDriveSpringStiffness; // 0xf4
    float AnimDriveDamperStiffness; // 0xf8
    EClothingWindMethod_Legacy WindMethod; // 0xfc
    char pad_fd[0x3];
    FClothConstraintSetup_Legacy VerticalConstraintConfig; // 0x100
    FClothConstraintSetup_Legacy HorizontalConstraintConfig; // 0x110
    FClothConstraintSetup_Legacy BendConstraintConfig; // 0x120
    FClothConstraintSetup_Legacy ShearConstraintConfig; // 0x130
    static UClothConfigNv* StaticClass();
}; // Size: 0x140
#pragma pack(pop)
