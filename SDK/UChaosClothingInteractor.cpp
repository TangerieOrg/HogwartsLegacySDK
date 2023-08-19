#include "FVector.hpp"
#include "FVector2D.hpp"
#include "UChaosClothingInteractor.hpp"
#include "UClothingInteractor.hpp"
#include "UFunction.hpp"
void UChaosClothingInteractor::SetWindVelocityScale(float WindVelocityScale) {
    static auto func = (UFunction*)(find_uobject("Function /Script/ChaosCloth.ChaosClothingInteractor.SetWindVelocityScale"));
    struct Params_SetWindVelocityScale {
        float WindVelocityScale; // 0x0
    }; // Size: 0x4
    Params_SetWindVelocityScale params{};
    params.WindVelocityScale = (float)WindVelocityScale;
    ProcessEvent(func, &params);
}
UChaosClothingInteractor* UChaosClothingInteractor::StaticClass() {
    static auto res = find_uobject("Class /Script/ChaosCloth.ChaosClothingInteractor");
    return (UChaosClothingInteractor*)res;
}
void UChaosClothingInteractor::SetVelocityScale(FVector LinearVelocityScale, float AngularVelocityScale, float FictitiousAngularScale) {
    static auto func = (UFunction*)(find_uobject("Function /Script/ChaosCloth.ChaosClothingInteractor.SetVelocityScale"));
    struct Params_SetVelocityScale {
        FVector LinearVelocityScale; // 0x0
        float AngularVelocityScale; // 0xc
        float FictitiousAngularScale; // 0x10
    }; // Size: 0x14
    Params_SetVelocityScale params{};
    params.LinearVelocityScale = (FVector)LinearVelocityScale;
    params.AngularVelocityScale = (float)AngularVelocityScale;
    params.FictitiousAngularScale = (float)FictitiousAngularScale;
    ProcessEvent(func, &params);
}
void UChaosClothingInteractor::SetMaterialLinear(float EdgeStiffness, float BendingStiffness, float AreaStiffness) {
    static auto func = (UFunction*)(find_uobject("Function /Script/ChaosCloth.ChaosClothingInteractor.SetMaterialLinear"));
    struct Params_SetMaterialLinear {
        float EdgeStiffness; // 0x0
        float BendingStiffness; // 0x4
        float AreaStiffness; // 0x8
    }; // Size: 0xc
    Params_SetMaterialLinear params{};
    params.EdgeStiffness = (float)EdgeStiffness;
    params.BendingStiffness = (float)BendingStiffness;
    params.AreaStiffness = (float)AreaStiffness;
    ProcessEvent(func, &params);
}
void UChaosClothingInteractor::SetDamping(float DampingCoefficient) {
    static auto func = (UFunction*)(find_uobject("Function /Script/ChaosCloth.ChaosClothingInteractor.SetDamping"));
    struct Params_SetDamping {
        float DampingCoefficient; // 0x0
    }; // Size: 0x4
    Params_SetDamping params{};
    params.DampingCoefficient = (float)DampingCoefficient;
    ProcessEvent(func, &params);
}
void UChaosClothingInteractor::SetLongRangeAttachmentLinear(float TetherStiffness) {
    static auto func = (UFunction*)(find_uobject("Function /Script/ChaosCloth.ChaosClothingInteractor.SetLongRangeAttachmentLinear"));
    struct Params_SetLongRangeAttachmentLinear {
        float TetherStiffness; // 0x0
    }; // Size: 0x4
    Params_SetLongRangeAttachmentLinear params{};
    params.TetherStiffness = (float)TetherStiffness;
    ProcessEvent(func, &params);
}
void UChaosClothingInteractor::SetLongRangeAttachment(FVector2D TetherStiffness) {
    static auto func = (UFunction*)(find_uobject("Function /Script/ChaosCloth.ChaosClothingInteractor.SetLongRangeAttachment"));
    struct Params_SetLongRangeAttachment {
        FVector2D TetherStiffness; // 0x0
    }; // Size: 0x8
    Params_SetLongRangeAttachment params{};
    params.TetherStiffness = (FVector2D)TetherStiffness;
    ProcessEvent(func, &params);
}
void UChaosClothingInteractor::SetGravity(float GravityScale, bool bIsGravityOverridden, FVector GravityOverride) {
    static auto func = (UFunction*)(find_uobject("Function /Script/ChaosCloth.ChaosClothingInteractor.SetGravity"));
    struct Params_SetGravity {
        float GravityScale; // 0x0
        bool bIsGravityOverridden; // 0x4
        char pad_5[0x3];
        FVector GravityOverride; // 0x8
    }; // Size: 0x14
    Params_SetGravity params{};
    params.GravityScale = (float)GravityScale;
    params.bIsGravityOverridden = (bool)bIsGravityOverridden;
    params.GravityOverride = (FVector)GravityOverride;
    ProcessEvent(func, &params);
}
void UChaosClothingInteractor::SetCollision(float CollisionThickness, float FrictionCoefficient, bool bUseCCD, float SelfCollisionThickness) {
    static auto func = (UFunction*)(find_uobject("Function /Script/ChaosCloth.ChaosClothingInteractor.SetCollision"));
    struct Params_SetCollision {
        float CollisionThickness; // 0x0
        float FrictionCoefficient; // 0x4
        bool bUseCCD; // 0x8
        char pad_9[0x3];
        float SelfCollisionThickness; // 0xc
    }; // Size: 0x10
    Params_SetCollision params{};
    params.CollisionThickness = (float)CollisionThickness;
    params.FrictionCoefficient = (float)FrictionCoefficient;
    params.bUseCCD = (bool)bUseCCD;
    params.SelfCollisionThickness = (float)SelfCollisionThickness;
    ProcessEvent(func, &params);
}
void UChaosClothingInteractor::SetAnimDriveLinear(float AnimDriveStiffness) {
    static auto func = (UFunction*)(find_uobject("Function /Script/ChaosCloth.ChaosClothingInteractor.SetAnimDriveLinear"));
    struct Params_SetAnimDriveLinear {
        float AnimDriveStiffness; // 0x0
    }; // Size: 0x4
    Params_SetAnimDriveLinear params{};
    params.AnimDriveStiffness = (float)AnimDriveStiffness;
    ProcessEvent(func, &params);
}
void UChaosClothingInteractor::SetAnimDrive(FVector2D AnimDriveStiffness, FVector2D AnimDriveDamping) {
    static auto func = (UFunction*)(find_uobject("Function /Script/ChaosCloth.ChaosClothingInteractor.SetAnimDrive"));
    struct Params_SetAnimDrive {
        FVector2D AnimDriveStiffness; // 0x0
        FVector2D AnimDriveDamping; // 0x8
    }; // Size: 0x10
    Params_SetAnimDrive params{};
    params.AnimDriveStiffness = (FVector2D)AnimDriveStiffness;
    params.AnimDriveDamping = (FVector2D)AnimDriveDamping;
    ProcessEvent(func, &params);
}
void UChaosClothingInteractor::SetAerodynamics(float DragCoefficient, float LiftCoefficient, FVector WindVelocity) {
    static auto func = (UFunction*)(find_uobject("Function /Script/ChaosCloth.ChaosClothingInteractor.SetAerodynamics"));
    struct Params_SetAerodynamics {
        float DragCoefficient; // 0x0
        float LiftCoefficient; // 0x4
        FVector WindVelocity; // 0x8
    }; // Size: 0x14
    Params_SetAerodynamics params{};
    params.DragCoefficient = (float)DragCoefficient;
    params.LiftCoefficient = (float)LiftCoefficient;
    params.WindVelocity = (FVector)WindVelocity;
    ProcessEvent(func, &params);
}
void UChaosClothingInteractor::ResetAndTeleport(bool bReset, bool bTeleport) {
    static auto func = (UFunction*)(find_uobject("Function /Script/ChaosCloth.ChaosClothingInteractor.ResetAndTeleport"));
    struct Params_ResetAndTeleport {
        bool bReset; // 0x0
        bool bTeleport; // 0x1
    }; // Size: 0x2
    Params_ResetAndTeleport params{};
    params.bReset = (bool)bReset;
    params.bTeleport = (bool)bTeleport;
    ProcessEvent(func, &params);
}
