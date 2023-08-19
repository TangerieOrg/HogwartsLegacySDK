#pragma once
#include <cstdint>
#include "EClothMassMode.hpp"
#include "FChaosClothWeightedValue.hpp"
#include "FVector.hpp"
#include "UClothConfigCommon.hpp"
#pragma pack(push, 1)
class UChaosClothConfig : public UClothConfigCommon {
public:
    EClothMassMode MassMode; // 0x28
    char pad_29[0x3];
    float UniformMass; // 0x2c
    float TotalMass; // 0x30
    float Density; // 0x34
    float MinPerParticleMass; // 0x38
    float EdgeStiffness; // 0x3c
    float BendingStiffness; // 0x40
    bool bUseBendingElements; // 0x44
    char pad_45[0x3];
    float AreaStiffness; // 0x48
    float VolumeStiffness; // 0x4c
    FChaosClothWeightedValue TetherStiffness; // 0x50
    float LimitScale; // 0x58
    bool bUseGeodesicDistance; // 0x5c
    char pad_5d[0x3];
    float ShapeTargetStiffness; // 0x60
    float CollisionThickness; // 0x64
    float FrictionCoefficient; // 0x68
    bool bUseCCD; // 0x6c
    bool bUseSelfCollisions; // 0x6d
    char pad_6e[0x2];
    float SelfCollisionThickness; // 0x70
    bool bUseLegacyBackstop; // 0x74
    char pad_75[0x3];
    float DampingCoefficient; // 0x78
    bool bUsePointBasedWindModel; // 0x7c
    char pad_7d[0x3];
    float DragCoefficient; // 0x80
    float LiftCoefficient; // 0x84
    bool bUseGravityOverride; // 0x88
    char pad_89[0x3];
    float GravityScale; // 0x8c
    FVector Gravity; // 0x90
    float MaxWindSpeed; // 0x9c
    FChaosClothWeightedValue AnimDriveStiffness; // 0xa0
    FChaosClothWeightedValue AnimDriveDamping; // 0xa8
    FVector LinearVelocityScale; // 0xb0
    float AngularVelocityScale; // 0xbc
    float FictitiousAngularScale; // 0xc0
    bool bUseTetrahedralConstraints; // 0xc4
    bool bUseThinShellVolumeConstraints; // 0xc5
    bool bUseContinuousCollisionDetection; // 0xc6
    char pad_c7[0x1];
    static UChaosClothConfig* StaticClass();
}; // Size: 0xc8
#pragma pack(pop)
