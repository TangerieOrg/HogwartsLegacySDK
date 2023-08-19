#include "AActor.hpp"
#include "AMunitionType_Base.hpp"
#include "AMunitionType_Subsonic.hpp"
#include "FHitResult.hpp"
#include "FVector.hpp"
#include "UAkAudioEvent.hpp"
#include "UClass.hpp"
#include "UCurveFloat.hpp"
#include "UFunction.hpp"
#include "UMaterialInterface.hpp"
#include "UMunitionMovementComponent.hpp"
#include "UNiagaraSystem.hpp"
#include "UParticleSystem.hpp"
#include "USkeletalMeshComponent.hpp"
#include "USphereComponent.hpp"
AMunitionType_Subsonic* AMunitionType_Subsonic::StaticClass() {
    static auto res = find_uobject("Class /Script/Munitions.MunitionType_Subsonic");
    return (AMunitionType_Subsonic*)res;
}
void AMunitionType_Subsonic::OnHit(FHitResult& HitResult, bool bDestroyed, bool bHit, bool bBlocked, bool bFailed) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Munitions.MunitionType_Subsonic.OnHit"));
    struct Params_OnHit {
        FHitResult HitResult; // 0x0
        bool bDestroyed; // 0x88
        bool bHit; // 0x89
        bool bBlocked; // 0x8a
        bool bFailed; // 0x8b
    }; // Size: 0x8c
    Params_OnHit params{};
    params.HitResult = (FHitResult)HitResult;
    params.bDestroyed = (bool)bDestroyed;
    params.bHit = (bool)bHit;
    params.bBlocked = (bool)bBlocked;
    params.bFailed = (bool)bFailed;
    ProcessEvent(func, &params);
    HitResult = params.HitResult;
}
void AMunitionType_Subsonic::DestroyMunition() {
    static auto func = (UFunction*)(find_uobject("Function /Script/Munitions.MunitionType_Subsonic.DestroyMunition"));
    struct Params_DestroyMunition {
    }; // Size: 0x0
    Params_DestroyMunition params{};
    ProcessEvent(func, &params);
}
void AMunitionType_Subsonic::OnFire(AActor* Target, FVector TargetLocation, FVector Velocity) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Munitions.MunitionType_Subsonic.OnFire"));
    struct Params_OnFire {
        AActor* Target; // 0x0
        FVector TargetLocation; // 0x8
        FVector Velocity; // 0x14
    }; // Size: 0x20
    Params_OnFire params{};
    params.Target = (AActor*)Target;
    params.TargetLocation = (FVector)TargetLocation;
    params.Velocity = (FVector)Velocity;
    ProcessEvent(func, &params);
}
USphereComponent* AMunitionType_Subsonic::GetSphereComp() {
    static auto func = (UFunction*)(find_uobject("Function /Script/Munitions.MunitionType_Subsonic.GetSphereComp"));
    struct Params_GetSphereComp {
        USphereComponent* ReturnValue; // 0x0
    }; // Size: 0x8
    Params_GetSphereComp params{};
    ProcessEvent(func, &params);
    return (USphereComponent*)params.ReturnValue;
}
UMunitionMovementComponent* AMunitionType_Subsonic::GetProjectileMovement() {
    static auto func = (UFunction*)(find_uobject("Function /Script/Munitions.MunitionType_Subsonic.GetProjectileMovement"));
    struct Params_GetProjectileMovement {
        UMunitionMovementComponent* ReturnValue; // 0x0
    }; // Size: 0x8
    Params_GetProjectileMovement params{};
    ProcessEvent(func, &params);
    return (UMunitionMovementComponent*)params.ReturnValue;
}
USkeletalMeshComponent* AMunitionType_Subsonic::GetMeshComp() {
    static auto func = (UFunction*)(find_uobject("Function /Script/Munitions.MunitionType_Subsonic.GetMeshComp"));
    struct Params_GetMeshComp {
        USkeletalMeshComponent* ReturnValue; // 0x0
    }; // Size: 0x8
    Params_GetMeshComp params{};
    ProcessEvent(func, &params);
    return (USkeletalMeshComponent*)params.ReturnValue;
}
