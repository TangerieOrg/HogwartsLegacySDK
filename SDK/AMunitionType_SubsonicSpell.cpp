#include "AActor.hpp"
#include "AActor_SubsonicProximity.hpp"
#include "AMunitionType_Base.hpp"
#include "AMunitionType_SubsonicSpell.hpp"
#include "ASpellTool.hpp"
#include "FHitResult.hpp"
#include "FVector.hpp"
#include "UAkComponent.hpp"
#include "UClass.hpp"
#include "UFunction.hpp"
#include "UObject.hpp"
#include "UPrimitiveComponent.hpp"
#include "USphereComponent.hpp"
#include "UStaticMesh.hpp"
#include "USubsonicSpellMovementComponent.hpp"
void AMunitionType_SubsonicSpell::OnHit(FHitResult& HitResult, bool bDestroyed, bool bHit, bool bBlocked, bool bFailed) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.MunitionType_SubsonicSpell.OnHit"));
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
AMunitionType_SubsonicSpell* AMunitionType_SubsonicSpell::StaticClass() {
    static auto res = find_uobject("Class /Script/Phoenix.MunitionType_SubsonicSpell");
    return (AMunitionType_SubsonicSpell*)res;
}
void AMunitionType_SubsonicSpell::OnFizzle() {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.MunitionType_SubsonicSpell.OnFizzle"));
    struct Params_OnFizzle {
    }; // Size: 0x0
    Params_OnFizzle params{};
    ProcessEvent(func, &params);
}
void AMunitionType_SubsonicSpell::SetOnlyHitActor(AActor* OnlyHit, FName CollisionProfile) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.MunitionType_SubsonicSpell.SetOnlyHitActor"));
    struct Params_SetOnlyHitActor {
        AActor* OnlyHit; // 0x0
        FName CollisionProfile; // 0x8
    }; // Size: 0x10
    Params_SetOnlyHitActor params{};
    params.OnlyHit = (AActor*)OnlyHit;
    params.CollisionProfile = (FName)CollisionProfile;
    ProcessEvent(func, &params);
}
void AMunitionType_SubsonicSpell::PlayTerrainImpact(UObject* ImpactObject, FVector& ImpactLocation, FVector& ImpactNormal, FVector& ImpactVelocity) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.MunitionType_SubsonicSpell.PlayTerrainImpact"));
    struct Params_PlayTerrainImpact {
        UObject* ImpactObject; // 0x0
        FVector ImpactLocation; // 0x8
        FVector ImpactNormal; // 0x14
        FVector ImpactVelocity; // 0x20
    }; // Size: 0x2c
    Params_PlayTerrainImpact params{};
    params.ImpactObject = (UObject*)ImpactObject;
    params.ImpactLocation = (FVector)ImpactLocation;
    params.ImpactNormal = (FVector)ImpactNormal;
    params.ImpactVelocity = (FVector)ImpactVelocity;
    ProcessEvent(func, &params);
    ImpactVelocity = params.ImpactVelocity;
    ImpactLocation = params.ImpactLocation;
    ImpactNormal = params.ImpactNormal;
}
void AMunitionType_SubsonicSpell::OnFire(AActor* Target, FVector TargetLocation, FVector Velocity) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.MunitionType_SubsonicSpell.OnFire"));
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
USphereComponent* AMunitionType_SubsonicSpell::GetSphereComp() {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.MunitionType_SubsonicSpell.GetSphereComp"));
    struct Params_GetSphereComp {
        USphereComponent* ReturnValue; // 0x0
    }; // Size: 0x8
    Params_GetSphereComp params{};
    ProcessEvent(func, &params);
    return (USphereComponent*)params.ReturnValue;
}
float AMunitionType_SubsonicSpell::GetSpeed() {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.MunitionType_SubsonicSpell.GetSpeed"));
    struct Params_GetSpeed {
        float ReturnValue; // 0x0
    }; // Size: 0x4
    Params_GetSpeed params{};
    ProcessEvent(func, &params);
    return (float)params.ReturnValue;
}
USubsonicSpellMovementComponent* AMunitionType_SubsonicSpell::GetProjectileMovement() {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.MunitionType_SubsonicSpell.GetProjectileMovement"));
    struct Params_GetProjectileMovement {
        USubsonicSpellMovementComponent* ReturnValue; // 0x0
    }; // Size: 0x8
    Params_GetProjectileMovement params{};
    ProcessEvent(func, &params);
    return (USubsonicSpellMovementComponent*)params.ReturnValue;
}
void AMunitionType_SubsonicSpell::DisableFizzle(bool bDisable) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.MunitionType_SubsonicSpell.DisableFizzle"));
    struct Params_DisableFizzle {
        bool bDisable; // 0x0
    }; // Size: 0x1
    Params_DisableFizzle params{};
    params.bDisable = (bool)bDisable;
    ProcessEvent(func, &params);
}
void AMunitionType_SubsonicSpell::DestroyMunition() {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.MunitionType_SubsonicSpell.DestroyMunition"));
    struct Params_DestroyMunition {
    }; // Size: 0x0
    Params_DestroyMunition params{};
    ProcessEvent(func, &params);
}
void AMunitionType_SubsonicSpell::BeginOverlap(UPrimitiveComponent* OverlappedComponent, AActor* OtherActor, UPrimitiveComponent* OtherComp, int32_t OtherBodyIndex, bool bFromSweep, FHitResult& SweepResult) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.MunitionType_SubsonicSpell.BeginOverlap"));
    struct Params_BeginOverlap {
        UPrimitiveComponent* OverlappedComponent; // 0x0
        AActor* OtherActor; // 0x8
        UPrimitiveComponent* OtherComp; // 0x10
        int32_t OtherBodyIndex; // 0x18
        bool bFromSweep; // 0x1c
        char pad_1d[0x3];
        FHitResult SweepResult; // 0x20
    }; // Size: 0xa8
    Params_BeginOverlap params{};
    params.OverlappedComponent = (UPrimitiveComponent*)OverlappedComponent;
    params.OtherActor = (AActor*)OtherActor;
    params.OtherComp = (UPrimitiveComponent*)OtherComp;
    params.OtherBodyIndex = (int32_t)OtherBodyIndex;
    params.bFromSweep = (bool)bFromSweep;
    params.SweepResult = (FHitResult)SweepResult;
    ProcessEvent(func, &params);
    SweepResult = params.SweepResult;
}
void AMunitionType_SubsonicSpell::AbortEarly() {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.MunitionType_SubsonicSpell.AbortEarly"));
    struct Params_AbortEarly {
    }; // Size: 0x0
    Params_AbortEarly params{};
    ProcessEvent(func, &params);
}
