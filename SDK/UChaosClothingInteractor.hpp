#pragma once
#include <cstdint>
#include "FVector.hpp"
#include "FVector2D.hpp"
#include "UClothingInteractor.hpp"
#pragma pack(push, 1)
class UChaosClothingInteractor : public UClothingInteractor {
public:
    char pad_30[0x10];
    static UChaosClothingInteractor* StaticClass();
    void SetWindVelocityScale(float WindVelocityScale);
    void SetVelocityScale(FVector LinearVelocityScale, float AngularVelocityScale, float FictitiousAngularScale);
    void SetMaterialLinear(float EdgeStiffness, float BendingStiffness, float AreaStiffness);
    void SetLongRangeAttachmentLinear(float TetherStiffness);
    void SetLongRangeAttachment(FVector2D TetherStiffness);
    void SetGravity(float GravityScale, bool bIsGravityOverridden, FVector GravityOverride);
    void SetDamping(float DampingCoefficient);
    void SetCollision(float CollisionThickness, float FrictionCoefficient, bool bUseCCD, float SelfCollisionThickness);
    void SetAnimDriveLinear(float AnimDriveStiffness);
    void SetAnimDrive(FVector2D AnimDriveStiffness, FVector2D AnimDriveDamping);
    void SetAerodynamics(float DragCoefficient, float LiftCoefficient, FVector WindVelocity);
    void ResetAndTeleport(bool bReset, bool bTeleport);
}; // Size: 0x40
#pragma pack(pop)
