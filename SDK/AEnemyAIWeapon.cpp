#include "AActor.hpp"
#include "AEnemyAIWeapon.hpp"
#include "AMunitionType_Base.hpp"
#include "AMunitionType_Physics.hpp"
#include "APawn.hpp"
#include "ATool.hpp"
#include "EEnemyAIWeaponState\Type.hpp"
#include "EEnemyAIWeapon_Event.hpp"
#include "EEnemyWeaponEquip.hpp"
#include "EEnemyWeaponTypeEnum.hpp"
#include "EPhysicsMunitionHitType.hpp"
#include "EWeaponAttachmentTransformRules.hpp"
#include "FEnemy_WeaponAttackOverlapData.hpp"
#include "FGameplayTag.hpp"
#include "FGameplayTagContainer.hpp"
#include "FHitResult.hpp"
#include "FMultiFX2Handle.hpp"
#include "FMunitionImpactData.hpp"
#include "FVector.hpp"
#include "UClass.hpp"
#include "UEnemyCorruptionData.hpp"
#include "UFunction.hpp"
#include "UInteractionArchitectAsset.hpp"
#include "UMultiFX2_Base.hpp"
#include "UPrimitiveComponent.hpp"
#include "USceneComponent.hpp"
AEnemyAIWeapon* AEnemyAIWeapon::StaticClass() {
    static auto res = find_uobject("Class /Script/Phoenix.EnemyAIWeapon");
    return (AEnemyAIWeapon*)res;
}
void AEnemyAIWeapon::TrackPointsEvent() {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.EnemyAIWeapon.TrackPointsEvent"));
    struct Params_TrackPointsEvent {
    }; // Size: 0x0
    Params_TrackPointsEvent params{};
    ProcessEvent(func, &params);
}
AMunitionType_Base* AEnemyAIWeapon::FireAtTarget(AActor* TargetPtr, APawn* WeaponOwnerPtr, float AccuracyOffset, float InDamage, float OverrideSpeed) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.EnemyAIWeapon.FireAtTarget"));
    struct Params_FireAtTarget {
        AActor* TargetPtr; // 0x0
        APawn* WeaponOwnerPtr; // 0x8
        float AccuracyOffset; // 0x10
        float InDamage; // 0x14
        float OverrideSpeed; // 0x18
        char pad_1c[0x4];
        AMunitionType_Base* ReturnValue; // 0x20
    }; // Size: 0x28
    Params_FireAtTarget params{};
    params.TargetPtr = (AActor*)TargetPtr;
    params.WeaponOwnerPtr = (APawn*)WeaponOwnerPtr;
    params.AccuracyOffset = (float)AccuracyOffset;
    params.InDamage = (float)InDamage;
    params.OverrideSpeed = (float)OverrideSpeed;
    ProcessEvent(func, &params);
    return (AMunitionType_Base*)params.ReturnValue;
}
void AEnemyAIWeapon::TrackPoints(FVector& InThrowLoc, FVector& InWieldLoc) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.EnemyAIWeapon.TrackPoints"));
    struct Params_TrackPoints {
        FVector InThrowLoc; // 0x0
        FVector InWieldLoc; // 0xc
    }; // Size: 0x18
    Params_TrackPoints params{};
    params.InThrowLoc = (FVector)InThrowLoc;
    params.InWieldLoc = (FVector)InWieldLoc;
    ProcessEvent(func, &params);
    InThrowLoc = params.InThrowLoc;
    InWieldLoc = params.InWieldLoc;
}
bool AEnemyAIWeapon::OverlapAttackCapsule_New(USceneComponent* OverlappedComponent, AActor* OtherActor, USceneComponent* OtherComponent, FHitResult SweepResult, FHitResult& OutHitResult) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.EnemyAIWeapon.OverlapAttackCapsule_New"));
    struct Params_OverlapAttackCapsule_New {
        USceneComponent* OverlappedComponent; // 0x0
        AActor* OtherActor; // 0x8
        USceneComponent* OtherComponent; // 0x10
        FHitResult SweepResult; // 0x18
        FHitResult OutHitResult; // 0xa0
        bool ReturnValue; // 0x128
    }; // Size: 0x129
    Params_OverlapAttackCapsule_New params{};
    params.OverlappedComponent = (USceneComponent*)OverlappedComponent;
    params.OtherActor = (AActor*)OtherActor;
    params.OtherComponent = (USceneComponent*)OtherComponent;
    params.SweepResult = (FHitResult)SweepResult;
    params.OutHitResult = (FHitResult)OutHitResult;
    ProcessEvent(func, &params);
    OutHitResult = params.OutHitResult;
    return (bool)params.ReturnValue;
}
void AEnemyAIWeapon::RangedNotifyHit(UPrimitiveComponent* MyComp, AActor* Other, UPrimitiveComponent* OtherComp, bool bSelfMoved, FVector HitLocation, FVector HitNormal, FVector NormalImpulse, FHitResult& Hit) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.EnemyAIWeapon.RangedNotifyHit"));
    struct Params_RangedNotifyHit {
        UPrimitiveComponent* MyComp; // 0x0
        AActor* Other; // 0x8
        UPrimitiveComponent* OtherComp; // 0x10
        bool bSelfMoved; // 0x18
        char pad_19[0x3];
        FVector HitLocation; // 0x1c
        FVector HitNormal; // 0x28
        FVector NormalImpulse; // 0x34
        FHitResult Hit; // 0x40
    }; // Size: 0xc8
    Params_RangedNotifyHit params{};
    params.MyComp = (UPrimitiveComponent*)MyComp;
    params.Other = (AActor*)Other;
    params.OtherComp = (UPrimitiveComponent*)OtherComp;
    params.bSelfMoved = (bool)bSelfMoved;
    params.HitLocation = (FVector)HitLocation;
    params.HitNormal = (FVector)HitNormal;
    params.NormalImpulse = (FVector)NormalImpulse;
    params.Hit = (FHitResult)Hit;
    ProcessEvent(func, &params);
    Hit = params.Hit;
}
AActor* AEnemyAIWeapon::DoDisarmOnOwner(FVector HitDirection, AActor* InInstigator) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.EnemyAIWeapon.DoDisarmOnOwner"));
    struct Params_DoDisarmOnOwner {
        FVector HitDirection; // 0x0
        char pad_c[0x4];
        AActor* InInstigator; // 0x10
        AActor* ReturnValue; // 0x18
    }; // Size: 0x20
    Params_DoDisarmOnOwner params{};
    params.HitDirection = (FVector)HitDirection;
    params.InInstigator = (AActor*)InInstigator;
    ProcessEvent(func, &params);
    return (AActor*)params.ReturnValue;
}
void AEnemyAIWeapon::SetState(EEnemyAIWeaponState::Type& InState) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.EnemyAIWeapon.SetState"));
    struct Params_SetState {
        EEnemyAIWeaponState::Type InState; // 0x0
    }; // Size: 0x1
    Params_SetState params{};
    params.InState = (EEnemyAIWeaponState::Type)InState;
    ProcessEvent(func, &params);
    InState = params.InState;
}
void AEnemyAIWeapon::PoweredUpStopEvent() {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.EnemyAIWeapon.PoweredUpStopEvent"));
    struct Params_PoweredUpStopEvent {
    }; // Size: 0x0
    Params_PoweredUpStopEvent params{};
    ProcessEvent(func, &params);
}
void AEnemyAIWeapon::EnablePhysicsSimEvent(bool bEnable) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.EnemyAIWeapon.EnablePhysicsSimEvent"));
    struct Params_EnablePhysicsSimEvent {
        bool bEnable; // 0x0
    }; // Size: 0x1
    Params_EnablePhysicsSimEvent params{};
    params.bEnable = (bool)bEnable;
    ProcessEvent(func, &params);
}
void AEnemyAIWeapon::PoweredUpStartEvent() {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.EnemyAIWeapon.PoweredUpStartEvent"));
    struct Params_PoweredUpStartEvent {
    }; // Size: 0x0
    Params_PoweredUpStartEvent params{};
    ProcessEvent(func, &params);
}
void AEnemyAIWeapon::BroadcastWeaponEvent(EEnemyAIWeapon_Event InEvent) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.EnemyAIWeapon.BroadcastWeaponEvent"));
    struct Params_BroadcastWeaponEvent {
        EEnemyAIWeapon_Event InEvent; // 0x0
    }; // Size: 0x1
    Params_BroadcastWeaponEvent params{};
    params.InEvent = (EEnemyAIWeapon_Event)InEvent;
    ProcessEvent(func, &params);
}
bool AEnemyAIWeapon::OverlapAttackCapsule(AActor* InVictim, FHitResult InHitResult, FEnemy_WeaponAttackOverlapData& OutOverlapData) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.EnemyAIWeapon.OverlapAttackCapsule"));
    struct Params_OverlapAttackCapsule {
        AActor* InVictim; // 0x0
        FHitResult InHitResult; // 0x8
        FEnemy_WeaponAttackOverlapData OutOverlapData; // 0x90
        bool ReturnValue; // 0x140
    }; // Size: 0x141
    Params_OverlapAttackCapsule params{};
    params.InVictim = (AActor*)InVictim;
    params.InHitResult = (FHitResult)InHitResult;
    params.OutOverlapData = (FEnemy_WeaponAttackOverlapData)OutOverlapData;
    ProcessEvent(func, &params);
    OutOverlapData = params.OutOverlapData;
    return (bool)params.ReturnValue;
}
void AEnemyAIWeapon::OnMunitionImpact(AMunitionType_Base* MunitionInstance, FMunitionImpactData& MunitionImpactData) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.EnemyAIWeapon.OnMunitionImpact"));
    struct Params_OnMunitionImpact {
        AMunitionType_Base* MunitionInstance; // 0x0
        FMunitionImpactData MunitionImpactData; // 0x8
    }; // Size: 0xf8
    Params_OnMunitionImpact params{};
    params.MunitionInstance = (AMunitionType_Base*)MunitionInstance;
    params.MunitionImpactData = (FMunitionImpactData)MunitionImpactData;
    ProcessEvent(func, &params);
    MunitionImpactData = params.MunitionImpactData;
}
void AEnemyAIWeapon::OnMunitionDestroyed(AMunitionType_Base* InMunitionInstance) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.EnemyAIWeapon.OnMunitionDestroyed"));
    struct Params_OnMunitionDestroyed {
        AMunitionType_Base* InMunitionInstance; // 0x0
    }; // Size: 0x8
    Params_OnMunitionDestroyed params{};
    params.InMunitionInstance = (AMunitionType_Base*)InMunitionInstance;
    ProcessEvent(func, &params);
}
void AEnemyAIWeapon::HandlePhysicsMunitionHit(EPhysicsMunitionHitType PhysicsMunitionHitType, FHitResult HitResult) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.EnemyAIWeapon.HandlePhysicsMunitionHit"));
    struct Params_HandlePhysicsMunitionHit {
        EPhysicsMunitionHitType PhysicsMunitionHitType; // 0x0
        FHitResult HitResult; // 0x4
    }; // Size: 0x8c
    Params_HandlePhysicsMunitionHit params{};
    params.PhysicsMunitionHitType = (EPhysicsMunitionHitType)PhysicsMunitionHitType;
    params.HitResult = (FHitResult)HitResult;
    ProcessEvent(func, &params);
}
AMunitionType_Physics* AEnemyAIWeapon::GetMunition() {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.EnemyAIWeapon.GetMunition"));
    struct Params_GetMunition {
        AMunitionType_Physics* ReturnValue; // 0x0
    }; // Size: 0x8
    Params_GetMunition params{};
    ProcessEvent(func, &params);
    return (AMunitionType_Physics*)params.ReturnValue;
}
FVector AEnemyAIWeapon::GetWieldImpactNormal(FVector& InNormal, AActor* InHitActor) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.EnemyAIWeapon.GetWieldImpactNormal"));
    struct Params_GetWieldImpactNormal {
        FVector InNormal; // 0x0
        char pad_c[0x4];
        AActor* InHitActor; // 0x10
        FVector ReturnValue; // 0x18
    }; // Size: 0x24
    Params_GetWieldImpactNormal params{};
    params.InNormal = (FVector)InNormal;
    params.InHitActor = (AActor*)InHitActor;
    ProcessEvent(func, &params);
    InNormal = params.InNormal;
    return (FVector)params.ReturnValue;
}
FVector AEnemyAIWeapon::GetThrowImpactNormal(FVector& InNormal, AActor* InHitActor) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.EnemyAIWeapon.GetThrowImpactNormal"));
    struct Params_GetThrowImpactNormal {
        FVector InNormal; // 0x0
        char pad_c[0x4];
        AActor* InHitActor; // 0x10
        FVector ReturnValue; // 0x18
    }; // Size: 0x24
    Params_GetThrowImpactNormal params{};
    params.InNormal = (FVector)InNormal;
    params.InHitActor = (AActor*)InHitActor;
    ProcessEvent(func, &params);
    InNormal = params.InNormal;
    return (FVector)params.ReturnValue;
}
AActor* AEnemyAIWeapon::GetAttackInstigator() {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.EnemyAIWeapon.GetAttackInstigator"));
    struct Params_GetAttackInstigator {
        AActor* ReturnValue; // 0x0
    }; // Size: 0x8
    Params_GetAttackInstigator params{};
    ProcessEvent(func, &params);
    return (AActor*)params.ReturnValue;
}
EEnemyAIWeaponState::Type AEnemyAIWeapon::GetState() {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.EnemyAIWeapon.GetState"));
    struct Params_GetState {
        EEnemyAIWeaponState::Type ReturnValue; // 0x0
    }; // Size: 0x1
    Params_GetState params{};
    ProcessEvent(func, &params);
    return (EEnemyAIWeaponState::Type)params.ReturnValue;
}
void AEnemyAIWeapon::ForceStoreWeapon() {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.EnemyAIWeapon.ForceStoreWeapon"));
    struct Params_ForceStoreWeapon {
    }; // Size: 0x0
    Params_ForceStoreWeapon params{};
    ProcessEvent(func, &params);
}
void AEnemyAIWeapon::FireWeaponAOEMunitionNew(UClass* InMunitionActor, AActor* TargetActor, FVector InLocation, UInteractionArchitectAsset* InMunitionDataAsset, FName InMunitionImpactType, FGameplayTagContainer InMunitionTagContainer, float AOEDamage) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.EnemyAIWeapon.FireWeaponAOEMunitionNew"));
    struct Params_FireWeaponAOEMunitionNew {
        UClass* InMunitionActor; // 0x0
        AActor* TargetActor; // 0x8
        FVector InLocation; // 0x10
        char pad_1c[0x4];
        UInteractionArchitectAsset* InMunitionDataAsset; // 0x20
        FName InMunitionImpactType; // 0x28
        FGameplayTagContainer InMunitionTagContainer; // 0x30
        float AOEDamage; // 0x50
    }; // Size: 0x54
    Params_FireWeaponAOEMunitionNew params{};
    params.InMunitionActor = (UClass*)InMunitionActor;
    params.TargetActor = (AActor*)TargetActor;
    params.InLocation = (FVector)InLocation;
    params.InMunitionDataAsset = (UInteractionArchitectAsset*)InMunitionDataAsset;
    params.InMunitionImpactType = (FName)InMunitionImpactType;
    params.InMunitionTagContainer = (FGameplayTagContainer)InMunitionTagContainer;
    params.AOEDamage = (float)AOEDamage;
    ProcessEvent(func, &params);
}
void AEnemyAIWeapon::FireWeaponAOEMunition(UClass* InMunitionActor, AActor* TargetActor, FVector InLocation, UInteractionArchitectAsset* InMunitionDataAsset, FName InMunitionImpactType, FGameplayTagContainer InMunitionTagContainer, float AOEDamage) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.EnemyAIWeapon.FireWeaponAOEMunition"));
    struct Params_FireWeaponAOEMunition {
        UClass* InMunitionActor; // 0x0
        AActor* TargetActor; // 0x8
        FVector InLocation; // 0x10
        char pad_1c[0x4];
        UInteractionArchitectAsset* InMunitionDataAsset; // 0x20
        FName InMunitionImpactType; // 0x28
        FGameplayTagContainer InMunitionTagContainer; // 0x30
        float AOEDamage; // 0x50
    }; // Size: 0x54
    Params_FireWeaponAOEMunition params{};
    params.InMunitionActor = (UClass*)InMunitionActor;
    params.TargetActor = (AActor*)TargetActor;
    params.InLocation = (FVector)InLocation;
    params.InMunitionDataAsset = (UInteractionArchitectAsset*)InMunitionDataAsset;
    params.InMunitionImpactType = (FName)InMunitionImpactType;
    params.InMunitionTagContainer = (FGameplayTagContainer)InMunitionTagContainer;
    params.AOEDamage = (float)AOEDamage;
    ProcessEvent(func, &params);
}
void AEnemyAIWeapon::EnableWeaponEffects() {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.EnemyAIWeapon.EnableWeaponEffects"));
    struct Params_EnableWeaponEffects {
    }; // Size: 0x0
    Params_EnableWeaponEffects params{};
    ProcessEvent(func, &params);
}
void AEnemyAIWeapon::EnableTrackPoints(bool bEnable) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.EnemyAIWeapon.EnableTrackPoints"));
    struct Params_EnableTrackPoints {
        bool bEnable; // 0x0
    }; // Size: 0x1
    Params_EnableTrackPoints params{};
    params.bEnable = (bool)bEnable;
    ProcessEvent(func, &params);
}
void AEnemyAIWeapon::DisableWeaponEffects() {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.EnemyAIWeapon.DisableWeaponEffects"));
    struct Params_DisableWeaponEffects {
    }; // Size: 0x0
    Params_DisableWeaponEffects params{};
    ProcessEvent(func, &params);
}
void AEnemyAIWeapon::BroadcastWeapon_AnimEvent(FName InName) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.EnemyAIWeapon.BroadcastWeapon_AnimEvent"));
    struct Params_BroadcastWeapon_AnimEvent {
        FName InName; // 0x0
    }; // Size: 0x8
    Params_BroadcastWeapon_AnimEvent params{};
    params.InName = (FName)InName;
    ProcessEvent(func, &params);
}
