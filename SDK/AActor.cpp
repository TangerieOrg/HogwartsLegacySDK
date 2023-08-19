#include "AActor.hpp"
#include "AController.hpp"
#include "AMatineeActor.hpp"
#include "APawn.hpp"
#include "APlayerController.hpp"
#include "EActorUpdateOverlapsMethod.hpp"
#include "EAttachLocation\Type.hpp"
#include "EAttachmentRule.hpp"
#include "EAutoReceiveInput\Type.hpp"
#include "EDetachmentRule.hpp"
#include "EEndPlayReason\Type.hpp"
#include "ENetDormancy.hpp"
#include "ENetRole.hpp"
#include "ESpawnActorCollisionHandlingMethod.hpp"
#include "ETickingGroup.hpp"
#include "ETouchIndex\Type.hpp"
#include "FActorTickFunction.hpp"
#include "FHitResult.hpp"
#include "FKey.hpp"
#include "FRepAttachment.hpp"
#include "FRepMovement.hpp"
#include "FRotator.hpp"
#include "FTransform.hpp"
#include "FVector.hpp"
#include "UActorComponent.hpp"
#include "UChildActorComponent.hpp"
#include "UClass.hpp"
#include "UDamageType.hpp"
#include "UFunction.hpp"
#include "UInputComponent.hpp"
#include "UMaterialInstanceDynamic.hpp"
#include "UMaterialInterface.hpp"
#include "UObject.hpp"
#include "UPrimitiveComponent.hpp"
#include "USceneComponent.hpp"
void AActor::SetTickGroup(ETickingGroup NewTickGroup) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Engine.Actor.SetTickGroup"));
    struct Params_SetTickGroup {
        ETickingGroup NewTickGroup; // 0x0
    }; // Size: 0x1
    Params_SetTickGroup params{};
    params.NewTickGroup = (ETickingGroup)NewTickGroup;
    ProcessEvent(func, &params);
}
AActor* AActor::StaticClass() {
    static auto res = find_uobject("Class /Script/Engine.Actor");
    return (AActor*)res;
}
void AActor::SetUpdateInitialOverlaps(bool InUpdateInitialOverlaps) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Engine.Actor.SetUpdateInitialOverlaps"));
    struct Params_SetUpdateInitialOverlaps {
        bool InUpdateInitialOverlaps; // 0x0
    }; // Size: 0x1
    Params_SetUpdateInitialOverlaps params{};
    params.InUpdateInitialOverlaps = (bool)InUpdateInitialOverlaps;
    ProcessEvent(func, &params);
}
void AActor::GetOverlappingActors(TArray<AActor*>& OverlappingActors, UClass* ClassFilter) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Engine.Actor.GetOverlappingActors"));
    struct Params_GetOverlappingActors {
        TArray<AActor*> OverlappingActors; // 0x0
        UClass* ClassFilter; // 0x10
    }; // Size: 0x18
    Params_GetOverlappingActors params{};
    params.OverlappingActors = (TArray<AActor*>)OverlappingActors;
    params.ClassFilter = (UClass*)ClassFilter;
    ProcessEvent(func, &params);
    OverlappingActors = params.OverlappingActors;
}
bool AActor::WasRecentlyRenderedOnScreen(float Tolerance) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Engine.Actor.WasRecentlyRenderedOnScreen"));
    struct Params_WasRecentlyRenderedOnScreen {
        float Tolerance; // 0x0
        bool ReturnValue; // 0x4
    }; // Size: 0x5
    Params_WasRecentlyRenderedOnScreen params{};
    params.Tolerance = (float)Tolerance;
    ProcessEvent(func, &params);
    return (bool)params.ReturnValue;
}
bool AActor::WasRecentlyRendered(float Tolerance) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Engine.Actor.WasRecentlyRendered"));
    struct Params_WasRecentlyRendered {
        float Tolerance; // 0x0
        bool ReturnValue; // 0x4
    }; // Size: 0x5
    Params_WasRecentlyRendered params{};
    params.Tolerance = (float)Tolerance;
    ProcessEvent(func, &params);
    return (bool)params.ReturnValue;
}
bool AActor::K2_SetActorLocation(FVector NewLocation, bool bSweep, FHitResult& SweepHitResult, bool bTeleport) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Engine.Actor.K2_SetActorLocation"));
    struct Params_K2_SetActorLocation {
        FVector NewLocation; // 0x0
        bool bSweep; // 0xc
        char pad_d[0x3];
        FHitResult SweepHitResult; // 0x10
        bool bTeleport; // 0x98
        bool ReturnValue; // 0x99
    }; // Size: 0x9a
    Params_K2_SetActorLocation params{};
    params.NewLocation = (FVector)NewLocation;
    params.bSweep = (bool)bSweep;
    params.SweepHitResult = (FHitResult)SweepHitResult;
    params.bTeleport = (bool)bTeleport;
    ProcessEvent(func, &params);
    SweepHitResult = params.SweepHitResult;
    return (bool)params.ReturnValue;
}
bool AActor::K2_SetActorRotation(FRotator NewRotation, bool bTeleportPhysics) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Engine.Actor.K2_SetActorRotation"));
    struct Params_K2_SetActorRotation {
        FRotator NewRotation; // 0x0
        bool bTeleportPhysics; // 0xc
        bool ReturnValue; // 0xd
    }; // Size: 0xe
    Params_K2_SetActorRotation params{};
    params.NewRotation = (FRotator)NewRotation;
    params.bTeleportPhysics = (bool)bTeleportPhysics;
    ProcessEvent(func, &params);
    return (bool)params.ReturnValue;
}
void AActor::ReceiveActorEndOverlap(AActor* OtherActor) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Engine.Actor.ReceiveActorEndOverlap"));
    struct Params_ReceiveActorEndOverlap {
        AActor* OtherActor; // 0x0
    }; // Size: 0x8
    Params_ReceiveActorEndOverlap params{};
    params.OtherActor = (AActor*)OtherActor;
    ProcessEvent(func, &params);
}
void AActor::TearOff() {
    static auto func = (UFunction*)(find_uobject("Function /Script/Engine.Actor.TearOff"));
    struct Params_TearOff {
    }; // Size: 0x0
    Params_TearOff params{};
    ProcessEvent(func, &params);
}
void AActor::UserConstructionScript() {
    static auto func = (UFunction*)(find_uobject("Function /Script/Engine.Actor.UserConstructionScript"));
    struct Params_UserConstructionScript {
    }; // Size: 0x0
    Params_UserConstructionScript params{};
    ProcessEvent(func, &params);
}
void AActor::SnapRootComponentTo(AActor* InParentActor, FName InSocketName) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Engine.Actor.SnapRootComponentTo"));
    struct Params_SnapRootComponentTo {
        AActor* InParentActor; // 0x0
        FName InSocketName; // 0x8
    }; // Size: 0x10
    Params_SnapRootComponentTo params{};
    params.InParentActor = (AActor*)InParentActor;
    params.InSocketName = (FName)InSocketName;
    ProcessEvent(func, &params);
}
void AActor::OnRep_Instigator() {
    static auto func = (UFunction*)(find_uobject("Function /Script/Engine.Actor.OnRep_Instigator"));
    struct Params_OnRep_Instigator {
    }; // Size: 0x0
    Params_OnRep_Instigator params{};
    ProcessEvent(func, &params);
}
void AActor::SetTickableWhenPaused(bool bTickableWhenPaused) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Engine.Actor.SetTickableWhenPaused"));
    struct Params_SetTickableWhenPaused {
        bool bTickableWhenPaused; // 0x0
    }; // Size: 0x1
    Params_SetTickableWhenPaused params{};
    params.bTickableWhenPaused = (bool)bTickableWhenPaused;
    ProcessEvent(func, &params);
}
void AActor::SetReplicates(bool bInReplicates) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Engine.Actor.SetReplicates"));
    struct Params_SetReplicates {
        bool bInReplicates; // 0x0
    }; // Size: 0x1
    Params_SetReplicates params{};
    params.bInReplicates = (bool)bInReplicates;
    ProcessEvent(func, &params);
}
void AActor::ReceiveActorBeginOverlap(AActor* OtherActor) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Engine.Actor.ReceiveActorBeginOverlap"));
    struct Params_ReceiveActorBeginOverlap {
        AActor* OtherActor; // 0x0
    }; // Size: 0x8
    Params_ReceiveActorBeginOverlap params{};
    params.OtherActor = (AActor*)OtherActor;
    ProcessEvent(func, &params);
}
bool AActor::GetActorEnableCollision() {
    static auto func = (UFunction*)(find_uobject("Function /Script/Engine.Actor.GetActorEnableCollision"));
    struct Params_GetActorEnableCollision {
        bool ReturnValue; // 0x0
    }; // Size: 0x1
    Params_GetActorEnableCollision params{};
    ProcessEvent(func, &params);
    return (bool)params.ReturnValue;
}
float AActor::GetDistanceTo(AActor* OtherActor) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Engine.Actor.GetDistanceTo"));
    struct Params_GetDistanceTo {
        AActor* OtherActor; // 0x0
        float ReturnValue; // 0x8
    }; // Size: 0xc
    Params_GetDistanceTo params{};
    params.OtherActor = (AActor*)OtherActor;
    ProcessEvent(func, &params);
    return (float)params.ReturnValue;
}
void AActor::K2_OnReset() {
    static auto func = (UFunction*)(find_uobject("Function /Script/Engine.Actor.K2_OnReset"));
    struct Params_K2_OnReset {
    }; // Size: 0x0
    Params_K2_OnReset params{};
    ProcessEvent(func, &params);
}
void AActor::SetReplicateMovement(bool bInReplicateMovement) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Engine.Actor.SetReplicateMovement"));
    struct Params_SetReplicateMovement {
        bool bInReplicateMovement; // 0x0
    }; // Size: 0x1
    Params_SetReplicateMovement params{};
    params.bInReplicateMovement = (bool)bInReplicateMovement;
    ProcessEvent(func, &params);
}
void AActor::RemoveTickPrerequisiteComponent(UActorComponent* PrerequisiteComponent) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Engine.Actor.RemoveTickPrerequisiteComponent"));
    struct Params_RemoveTickPrerequisiteComponent {
        UActorComponent* PrerequisiteComponent; // 0x0
    }; // Size: 0x8
    Params_RemoveTickPrerequisiteComponent params{};
    params.PrerequisiteComponent = (UActorComponent*)PrerequisiteComponent;
    ProcessEvent(func, &params);
}
void AActor::K2_SetActorRelativeTransform(FTransform& NewRelativeTransform, bool bSweep, FHitResult& SweepHitResult, bool bTeleport) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Engine.Actor.K2_SetActorRelativeTransform"));
    struct Params_K2_SetActorRelativeTransform {
        FTransform NewRelativeTransform; // 0x0
        bool bSweep; // 0x30
        char pad_31[0x3];
        FHitResult SweepHitResult; // 0x34
        bool bTeleport; // 0xbc
    }; // Size: 0xbd
    Params_K2_SetActorRelativeTransform params{};
    params.NewRelativeTransform = (FTransform)NewRelativeTransform;
    params.bSweep = (bool)bSweep;
    params.SweepHitResult = (FHitResult)SweepHitResult;
    params.bTeleport = (bool)bTeleport;
    ProcessEvent(func, &params);
    NewRelativeTransform = params.NewRelativeTransform;
    SweepHitResult = params.SweepHitResult;
}
void AActor::SetOwner(AActor* NewOwner) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Engine.Actor.SetOwner"));
    struct Params_SetOwner {
        AActor* NewOwner; // 0x0
    }; // Size: 0x8
    Params_SetOwner params{};
    params.NewOwner = (AActor*)NewOwner;
    ProcessEvent(func, &params);
}
bool AActor::K2_TeleportTo(FVector DestLocation, FRotator DestRotation) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Engine.Actor.K2_TeleportTo"));
    struct Params_K2_TeleportTo {
        FVector DestLocation; // 0x0
        FRotator DestRotation; // 0xc
        bool ReturnValue; // 0x18
    }; // Size: 0x19
    Params_K2_TeleportTo params{};
    params.DestLocation = (FVector)DestLocation;
    params.DestRotation = (FRotator)DestRotation;
    ProcessEvent(func, &params);
    return (bool)params.ReturnValue;
}
void AActor::ReceiveBeginPlay() {
    static auto func = (UFunction*)(find_uobject("Function /Script/Engine.Actor.ReceiveBeginPlay"));
    struct Params_ReceiveBeginPlay {
    }; // Size: 0x0
    Params_ReceiveBeginPlay params{};
    ProcessEvent(func, &params);
}
void AActor::ReceiveActorOnInputTouchEnter(ETouchIndex::Type FingerIndex) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Engine.Actor.ReceiveActorOnInputTouchEnter"));
    struct Params_ReceiveActorOnInputTouchEnter {
        ETouchIndex::Type FingerIndex; // 0x0
    }; // Size: 0x1
    Params_ReceiveActorOnInputTouchEnter params{};
    params.FingerIndex = (ETouchIndex::Type)FingerIndex;
    ProcessEvent(func, &params);
}
void AActor::SetNetDormancy(ENetDormancy NewDormancy) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Engine.Actor.SetNetDormancy"));
    struct Params_SetNetDormancy {
        ENetDormancy NewDormancy; // 0x0
    }; // Size: 0x1
    Params_SetNetDormancy params{};
    params.NewDormancy = (ENetDormancy)NewDormancy;
    ProcessEvent(func, &params);
}
void AActor::SetLifeSpan(float InLifespan) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Engine.Actor.SetLifeSpan"));
    struct Params_SetLifeSpan {
        float InLifespan; // 0x0
    }; // Size: 0x4
    Params_SetLifeSpan params{};
    params.InLifespan = (float)InLifespan;
    ProcessEvent(func, &params);
}
void AActor::SetAutoDestroyWhenFinished(bool bVal) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Engine.Actor.SetAutoDestroyWhenFinished"));
    struct Params_SetAutoDestroyWhenFinished {
        bool bVal; // 0x0
    }; // Size: 0x1
    Params_SetAutoDestroyWhenFinished params{};
    params.bVal = (bool)bVal;
    ProcessEvent(func, &params);
}
void AActor::SetActorTickInterval(float TickInterval) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Engine.Actor.SetActorTickInterval"));
    struct Params_SetActorTickInterval {
        float TickInterval; // 0x0
    }; // Size: 0x4
    Params_SetActorTickInterval params{};
    params.TickInterval = (float)TickInterval;
    ProcessEvent(func, &params);
}
void AActor::SetActorTickEnabled(bool bEnabled) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Engine.Actor.SetActorTickEnabled"));
    struct Params_SetActorTickEnabled {
        bool bEnabled; // 0x0
    }; // Size: 0x1
    Params_SetActorTickEnabled params{};
    params.bEnabled = (bool)bEnabled;
    ProcessEvent(func, &params);
}
float AActor::GetHorizontalDistanceTo(AActor* OtherActor) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Engine.Actor.GetHorizontalDistanceTo"));
    struct Params_GetHorizontalDistanceTo {
        AActor* OtherActor; // 0x0
        float ReturnValue; // 0x8
    }; // Size: 0xc
    Params_GetHorizontalDistanceTo params{};
    params.OtherActor = (AActor*)OtherActor;
    ProcessEvent(func, &params);
    return (float)params.ReturnValue;
}
void AActor::SetActorEnableCollision(bool bNewActorEnableCollision) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Engine.Actor.SetActorEnableCollision"));
    struct Params_SetActorEnableCollision {
        bool bNewActorEnableCollision; // 0x0
    }; // Size: 0x1
    Params_SetActorEnableCollision params{};
    params.bNewActorEnableCollision = (bool)bNewActorEnableCollision;
    ProcessEvent(func, &params);
}
void AActor::SetActorScale3D(FVector NewScale3D) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Engine.Actor.SetActorScale3D"));
    struct Params_SetActorScale3D {
        FVector NewScale3D; // 0x0
    }; // Size: 0xc
    Params_SetActorScale3D params{};
    params.NewScale3D = (FVector)NewScale3D;
    ProcessEvent(func, &params);
}
void AActor::SetActorRelativeScale3D(FVector NewRelativeScale) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Engine.Actor.SetActorRelativeScale3D"));
    struct Params_SetActorRelativeScale3D {
        FVector NewRelativeScale; // 0x0
    }; // Size: 0xc
    Params_SetActorRelativeScale3D params{};
    params.NewRelativeScale = (FVector)NewRelativeScale;
    ProcessEvent(func, &params);
}
void AActor::MakeNoise(float Loudness, APawn* NoiseInstigator, FVector NoiseLocation, float MaxRange, FName Tag) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Engine.Actor.MakeNoise"));
    struct Params_MakeNoise {
        float Loudness; // 0x0
        char pad_4[0x4];
        APawn* NoiseInstigator; // 0x8
        FVector NoiseLocation; // 0x10
        float MaxRange; // 0x1c
        FName Tag; // 0x20
    }; // Size: 0x28
    Params_MakeNoise params{};
    params.Loudness = (float)Loudness;
    params.NoiseInstigator = (APawn*)NoiseInstigator;
    params.NoiseLocation = (FVector)NoiseLocation;
    params.MaxRange = (float)MaxRange;
    params.Tag = (FName)Tag;
    ProcessEvent(func, &params);
}
void AActor::SetActorHiddenInGame(bool bNewHidden) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Engine.Actor.SetActorHiddenInGame"));
    struct Params_SetActorHiddenInGame {
        bool bNewHidden; // 0x0
    }; // Size: 0x1
    Params_SetActorHiddenInGame params{};
    params.bNewHidden = (bool)bNewHidden;
    ProcessEvent(func, &params);
}
void AActor::DisableInput(APlayerController* PlayerController) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Engine.Actor.DisableInput"));
    struct Params_DisableInput {
        APlayerController* PlayerController; // 0x0
    }; // Size: 0x8
    Params_DisableInput params{};
    params.PlayerController = (APlayerController*)PlayerController;
    ProcessEvent(func, &params);
}
void AActor::PrestreamMeshes(float Seconds, bool bEnableStreaming) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Engine.Actor.PrestreamMeshes"));
    struct Params_PrestreamMeshes {
        float Seconds; // 0x0
        bool bEnableStreaming; // 0x4
    }; // Size: 0x5
    Params_PrestreamMeshes params{};
    params.Seconds = (float)Seconds;
    params.bEnableStreaming = (bool)bEnableStreaming;
    ProcessEvent(func, &params);
}
void AActor::RemoveTickPrerequisiteActor(AActor* PrerequisiteActor) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Engine.Actor.RemoveTickPrerequisiteActor"));
    struct Params_RemoveTickPrerequisiteActor {
        AActor* PrerequisiteActor; // 0x0
    }; // Size: 0x8
    Params_RemoveTickPrerequisiteActor params{};
    params.PrerequisiteActor = (AActor*)PrerequisiteActor;
    ProcessEvent(func, &params);
}
void AActor::K2_OnEndViewTarget(APlayerController* PC) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Engine.Actor.K2_OnEndViewTarget"));
    struct Params_K2_OnEndViewTarget {
        APlayerController* PC; // 0x0
    }; // Size: 0x8
    Params_K2_OnEndViewTarget params{};
    params.PC = (APlayerController*)PC;
    ProcessEvent(func, &params);
}
void AActor::ReceiveTick(float DeltaSeconds) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Engine.Actor.ReceiveTick"));
    struct Params_ReceiveTick {
        float DeltaSeconds; // 0x0
    }; // Size: 0x4
    Params_ReceiveTick params{};
    params.DeltaSeconds = (float)DeltaSeconds;
    ProcessEvent(func, &params);
}
bool AActor::K2_SetActorLocationAndRotation(FVector NewLocation, FRotator NewRotation, bool bSweep, FHitResult& SweepHitResult, bool bTeleport) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Engine.Actor.K2_SetActorLocationAndRotation"));
    struct Params_K2_SetActorLocationAndRotation {
        FVector NewLocation; // 0x0
        FRotator NewRotation; // 0xc
        bool bSweep; // 0x18
        char pad_19[0x3];
        FHitResult SweepHitResult; // 0x1c
        bool bTeleport; // 0xa4
        bool ReturnValue; // 0xa5
    }; // Size: 0xa6
    Params_K2_SetActorLocationAndRotation params{};
    params.NewLocation = (FVector)NewLocation;
    params.NewRotation = (FRotator)NewRotation;
    params.bSweep = (bool)bSweep;
    params.SweepHitResult = (FHitResult)SweepHitResult;
    params.bTeleport = (bool)bTeleport;
    ProcessEvent(func, &params);
    SweepHitResult = params.SweepHitResult;
    return (bool)params.ReturnValue;
}
void AActor::OnRep_Owner() {
    static auto func = (UFunction*)(find_uobject("Function /Script/Engine.Actor.OnRep_Owner"));
    struct Params_OnRep_Owner {
    }; // Size: 0x0
    Params_OnRep_Owner params{};
    ProcessEvent(func, &params);
}
void AActor::ReceiveRadialDamage(float DamageReceived, UDamageType* DamageType, FVector Origin, FHitResult& HitInfo, AController* InstigatedBy, AActor* DamageCauser) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Engine.Actor.ReceiveRadialDamage"));
    struct Params_ReceiveRadialDamage {
        float DamageReceived; // 0x0
        char pad_4[0x4];
        UDamageType* DamageType; // 0x8
        FVector Origin; // 0x10
        FHitResult HitInfo; // 0x1c
        char pad_a4[0x4];
        AController* InstigatedBy; // 0xa8
        AActor* DamageCauser; // 0xb0
    }; // Size: 0xb8
    Params_ReceiveRadialDamage params{};
    params.DamageReceived = (float)DamageReceived;
    params.DamageType = (UDamageType*)DamageType;
    params.Origin = (FVector)Origin;
    params.HitInfo = (FHitResult)HitInfo;
    params.InstigatedBy = (AController*)InstigatedBy;
    params.DamageCauser = (AActor*)DamageCauser;
    ProcessEvent(func, &params);
    HitInfo = params.HitInfo;
}
float AActor::GetActorTimeDilation() {
    static auto func = (UFunction*)(find_uobject("Function /Script/Engine.Actor.GetActorTimeDilation"));
    struct Params_GetActorTimeDilation {
        float ReturnValue; // 0x0
    }; // Size: 0x4
    Params_GetActorTimeDilation params{};
    ProcessEvent(func, &params);
    return (float)params.ReturnValue;
}
void AActor::ReceivePointDamage(float Damage, UDamageType* DamageType, FVector HitLocation, FVector HitNormal, UPrimitiveComponent* HitComponent, FName BoneName, FVector ShotFromDirection, AController* InstigatedBy, AActor* DamageCauser, FHitResult& HitInfo) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Engine.Actor.ReceivePointDamage"));
    struct Params_ReceivePointDamage {
        float Damage; // 0x0
        char pad_4[0x4];
        UDamageType* DamageType; // 0x8
        FVector HitLocation; // 0x10
        FVector HitNormal; // 0x1c
        UPrimitiveComponent* HitComponent; // 0x28
        FName BoneName; // 0x30
        FVector ShotFromDirection; // 0x38
        char pad_44[0x4];
        AController* InstigatedBy; // 0x48
        AActor* DamageCauser; // 0x50
        FHitResult HitInfo; // 0x58
    }; // Size: 0xe0
    Params_ReceivePointDamage params{};
    params.Damage = (float)Damage;
    params.DamageType = (UDamageType*)DamageType;
    params.HitLocation = (FVector)HitLocation;
    params.HitNormal = (FVector)HitNormal;
    params.HitComponent = (UPrimitiveComponent*)HitComponent;
    params.BoneName = (FName)BoneName;
    params.ShotFromDirection = (FVector)ShotFromDirection;
    params.InstigatedBy = (AController*)InstigatedBy;
    params.DamageCauser = (AActor*)DamageCauser;
    params.HitInfo = (FHitResult)HitInfo;
    ProcessEvent(func, &params);
    HitInfo = params.HitInfo;
}
void AActor::ReceiveHit(UPrimitiveComponent* MyComp, AActor* Other, UPrimitiveComponent* OtherComp, bool bSelfMoved, FVector HitLocation, FVector HitNormal, FVector NormalImpulse, FHitResult& Hit) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Engine.Actor.ReceiveHit"));
    struct Params_ReceiveHit {
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
    Params_ReceiveHit params{};
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
void AActor::ReceiveEndPlay(EEndPlayReason::Type EndPlayReason) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Engine.Actor.ReceiveEndPlay"));
    struct Params_ReceiveEndPlay {
        EEndPlayReason::Type EndPlayReason; // 0x0
    }; // Size: 0x1
    Params_ReceiveEndPlay params{};
    params.EndPlayReason = (EEndPlayReason::Type)EndPlayReason;
    ProcessEvent(func, &params);
}
void AActor::ReceiveDestroyed() {
    static auto func = (UFunction*)(find_uobject("Function /Script/Engine.Actor.ReceiveDestroyed"));
    struct Params_ReceiveDestroyed {
    }; // Size: 0x0
    Params_ReceiveDestroyed params{};
    ProcessEvent(func, &params);
}
void AActor::ReceiveAnyDamage(float Damage, UDamageType* DamageType, AController* InstigatedBy, AActor* DamageCauser) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Engine.Actor.ReceiveAnyDamage"));
    struct Params_ReceiveAnyDamage {
        float Damage; // 0x0
        char pad_4[0x4];
        UDamageType* DamageType; // 0x8
        AController* InstigatedBy; // 0x10
        AActor* DamageCauser; // 0x18
    }; // Size: 0x20
    Params_ReceiveAnyDamage params{};
    params.Damage = (float)Damage;
    params.DamageType = (UDamageType*)DamageType;
    params.InstigatedBy = (AController*)InstigatedBy;
    params.DamageCauser = (AActor*)DamageCauser;
    ProcessEvent(func, &params);
}
void AActor::ReceiveActorOnReleased(FKey ButtonReleased) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Engine.Actor.ReceiveActorOnReleased"));
    struct Params_ReceiveActorOnReleased {
        FKey ButtonReleased; // 0x0
    }; // Size: 0x18
    Params_ReceiveActorOnReleased params{};
    params.ButtonReleased = (FKey)ButtonReleased;
    ProcessEvent(func, &params);
}
void AActor::ReceiveActorOnInputTouchLeave(ETouchIndex::Type FingerIndex) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Engine.Actor.ReceiveActorOnInputTouchLeave"));
    struct Params_ReceiveActorOnInputTouchLeave {
        ETouchIndex::Type FingerIndex; // 0x0
    }; // Size: 0x1
    Params_ReceiveActorOnInputTouchLeave params{};
    params.FingerIndex = (ETouchIndex::Type)FingerIndex;
    ProcessEvent(func, &params);
}
void AActor::ReceiveActorOnInputTouchEnd(ETouchIndex::Type FingerIndex) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Engine.Actor.ReceiveActorOnInputTouchEnd"));
    struct Params_ReceiveActorOnInputTouchEnd {
        ETouchIndex::Type FingerIndex; // 0x0
    }; // Size: 0x1
    Params_ReceiveActorOnInputTouchEnd params{};
    params.FingerIndex = (ETouchIndex::Type)FingerIndex;
    ProcessEvent(func, &params);
}
void AActor::ReceiveActorOnInputTouchBegin(ETouchIndex::Type FingerIndex) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Engine.Actor.ReceiveActorOnInputTouchBegin"));
    struct Params_ReceiveActorOnInputTouchBegin {
        ETouchIndex::Type FingerIndex; // 0x0
    }; // Size: 0x1
    Params_ReceiveActorOnInputTouchBegin params{};
    params.FingerIndex = (ETouchIndex::Type)FingerIndex;
    ProcessEvent(func, &params);
}
UMaterialInstanceDynamic* AActor::MakeMIDForMaterial(UMaterialInterface* Parent) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Engine.Actor.MakeMIDForMaterial"));
    struct Params_MakeMIDForMaterial {
        UMaterialInterface* Parent; // 0x0
        UMaterialInstanceDynamic* ReturnValue; // 0x8
    }; // Size: 0x10
    Params_MakeMIDForMaterial params{};
    params.Parent = (UMaterialInterface*)Parent;
    ProcessEvent(func, &params);
    return (UMaterialInstanceDynamic*)params.ReturnValue;
}
void AActor::ReceiveActorOnClicked(FKey ButtonPressed) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Engine.Actor.ReceiveActorOnClicked"));
    struct Params_ReceiveActorOnClicked {
        FKey ButtonPressed; // 0x0
    }; // Size: 0x18
    Params_ReceiveActorOnClicked params{};
    params.ButtonPressed = (FKey)ButtonPressed;
    ProcessEvent(func, &params);
}
void AActor::ReceiveActorEndCursorOver() {
    static auto func = (UFunction*)(find_uobject("Function /Script/Engine.Actor.ReceiveActorEndCursorOver"));
    struct Params_ReceiveActorEndCursorOver {
    }; // Size: 0x0
    Params_ReceiveActorEndCursorOver params{};
    ProcessEvent(func, &params);
}
void AActor::K2_OnBecomeViewTarget(APlayerController* PC) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Engine.Actor.K2_OnBecomeViewTarget"));
    struct Params_K2_OnBecomeViewTarget {
        APlayerController* PC; // 0x0
    }; // Size: 0x8
    Params_K2_OnBecomeViewTarget params{};
    params.PC = (APlayerController*)PC;
    ProcessEvent(func, &params);
}
void AActor::ReceiveActorBeginCursorOver() {
    static auto func = (UFunction*)(find_uobject("Function /Script/Engine.Actor.ReceiveActorBeginCursorOver"));
    struct Params_ReceiveActorBeginCursorOver {
    }; // Size: 0x0
    Params_ReceiveActorBeginCursorOver params{};
    ProcessEvent(func, &params);
}
void AActor::PrestreamTextures(float Seconds, bool bEnableStreaming, int32_t CinematicTextureGroups) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Engine.Actor.PrestreamTextures"));
    struct Params_PrestreamTextures {
        float Seconds; // 0x0
        bool bEnableStreaming; // 0x4
        char pad_5[0x3];
        int32_t CinematicTextureGroups; // 0x8
    }; // Size: 0xc
    Params_PrestreamTextures params{};
    params.Seconds = (float)Seconds;
    params.bEnableStreaming = (bool)bEnableStreaming;
    params.CinematicTextureGroups = (int32_t)CinematicTextureGroups;
    ProcessEvent(func, &params);
}
void AActor::OnRep_ReplicateMovement() {
    static auto func = (UFunction*)(find_uobject("Function /Script/Engine.Actor.OnRep_ReplicateMovement"));
    struct Params_OnRep_ReplicateMovement {
    }; // Size: 0x0
    Params_OnRep_ReplicateMovement params{};
    ProcessEvent(func, &params);
}
void AActor::OnRep_ReplicatedMovement() {
    static auto func = (UFunction*)(find_uobject("Function /Script/Engine.Actor.OnRep_ReplicatedMovement"));
    struct Params_OnRep_ReplicatedMovement {
    }; // Size: 0x0
    Params_OnRep_ReplicatedMovement params{};
    ProcessEvent(func, &params);
}
void AActor::OnRep_AttachmentReplication() {
    static auto func = (UFunction*)(find_uobject("Function /Script/Engine.Actor.OnRep_AttachmentReplication"));
    struct Params_OnRep_AttachmentReplication {
    }; // Size: 0x0
    Params_OnRep_AttachmentReplication params{};
    ProcessEvent(func, &params);
}
bool AActor::K2_SetActorTransform(FTransform& NewTransform, bool bSweep, FHitResult& SweepHitResult, bool bTeleport) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Engine.Actor.K2_SetActorTransform"));
    struct Params_K2_SetActorTransform {
        FTransform NewTransform; // 0x0
        bool bSweep; // 0x30
        char pad_31[0x3];
        FHitResult SweepHitResult; // 0x34
        bool bTeleport; // 0xbc
        bool ReturnValue; // 0xbd
    }; // Size: 0xbe
    Params_K2_SetActorTransform params{};
    params.NewTransform = (FTransform)NewTransform;
    params.bSweep = (bool)bSweep;
    params.SweepHitResult = (FHitResult)SweepHitResult;
    params.bTeleport = (bool)bTeleport;
    ProcessEvent(func, &params);
    NewTransform = params.NewTransform;
    SweepHitResult = params.SweepHitResult;
    return (bool)params.ReturnValue;
}
void AActor::K2_SetActorRelativeRotation(FRotator NewRelativeRotation, bool bSweep, FHitResult& SweepHitResult, bool bTeleport) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Engine.Actor.K2_SetActorRelativeRotation"));
    struct Params_K2_SetActorRelativeRotation {
        FRotator NewRelativeRotation; // 0x0
        bool bSweep; // 0xc
        char pad_d[0x3];
        FHitResult SweepHitResult; // 0x10
        bool bTeleport; // 0x98
    }; // Size: 0x99
    Params_K2_SetActorRelativeRotation params{};
    params.NewRelativeRotation = (FRotator)NewRelativeRotation;
    params.bSweep = (bool)bSweep;
    params.SweepHitResult = (FHitResult)SweepHitResult;
    params.bTeleport = (bool)bTeleport;
    ProcessEvent(func, &params);
    SweepHitResult = params.SweepHitResult;
}
void AActor::K2_SetActorRelativeLocation(FVector NewRelativeLocation, bool bSweep, FHitResult& SweepHitResult, bool bTeleport) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Engine.Actor.K2_SetActorRelativeLocation"));
    struct Params_K2_SetActorRelativeLocation {
        FVector NewRelativeLocation; // 0x0
        bool bSweep; // 0xc
        char pad_d[0x3];
        FHitResult SweepHitResult; // 0x10
        bool bTeleport; // 0x98
    }; // Size: 0x99
    Params_K2_SetActorRelativeLocation params{};
    params.NewRelativeLocation = (FVector)NewRelativeLocation;
    params.bSweep = (bool)bSweep;
    params.SweepHitResult = (FHitResult)SweepHitResult;
    params.bTeleport = (bool)bTeleport;
    ProcessEvent(func, &params);
    SweepHitResult = params.SweepHitResult;
}
USceneComponent* AActor::K2_GetRootComponent() {
    static auto func = (UFunction*)(find_uobject("Function /Script/Engine.Actor.K2_GetRootComponent"));
    struct Params_K2_GetRootComponent {
        USceneComponent* ReturnValue; // 0x0
    }; // Size: 0x8
    Params_K2_GetRootComponent params{};
    ProcessEvent(func, &params);
    return (USceneComponent*)params.ReturnValue;
}
TArray<UActorComponent*> AActor::K2_GetComponentsByClass(UClass* ComponentClass) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Engine.Actor.K2_GetComponentsByClass"));
    struct Params_K2_GetComponentsByClass {
        UClass* ComponentClass; // 0x0
        TArray<UActorComponent*> ReturnValue; // 0x8
    }; // Size: 0x18
    Params_K2_GetComponentsByClass params{};
    params.ComponentClass = (UClass*)ComponentClass;
    ProcessEvent(func, &params);
    return (TArray<UActorComponent*>)params.ReturnValue;
}
FRotator AActor::K2_GetActorRotation() {
    static auto func = (UFunction*)(find_uobject("Function /Script/Engine.Actor.K2_GetActorRotation"));
    struct Params_K2_GetActorRotation {
        FRotator ReturnValue; // 0x0
    }; // Size: 0xc
    Params_K2_GetActorRotation params{};
    ProcessEvent(func, &params);
    return (FRotator)params.ReturnValue;
}
FVector AActor::K2_GetActorLocation() {
    static auto func = (UFunction*)(find_uobject("Function /Script/Engine.Actor.K2_GetActorLocation"));
    struct Params_K2_GetActorLocation {
        FVector ReturnValue; // 0x0
    }; // Size: 0xc
    Params_K2_GetActorLocation params{};
    ProcessEvent(func, &params);
    return (FVector)params.ReturnValue;
}
float AActor::GetVerticalDistanceTo(AActor* OtherActor) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Engine.Actor.GetVerticalDistanceTo"));
    struct Params_GetVerticalDistanceTo {
        AActor* OtherActor; // 0x0
        float ReturnValue; // 0x8
    }; // Size: 0xc
    Params_GetVerticalDistanceTo params{};
    params.OtherActor = (AActor*)OtherActor;
    ProcessEvent(func, &params);
    return (float)params.ReturnValue;
}
void AActor::K2_DetachFromActor(EDetachmentRule LocationRule, EDetachmentRule RotationRule, EDetachmentRule ScaleRule) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Engine.Actor.K2_DetachFromActor"));
    struct Params_K2_DetachFromActor {
        EDetachmentRule LocationRule; // 0x0
        EDetachmentRule RotationRule; // 0x1
        EDetachmentRule ScaleRule; // 0x2
    }; // Size: 0x3
    Params_K2_DetachFromActor params{};
    params.LocationRule = (EDetachmentRule)LocationRule;
    params.RotationRule = (EDetachmentRule)RotationRule;
    params.ScaleRule = (EDetachmentRule)ScaleRule;
    ProcessEvent(func, &params);
}
void AActor::K2_DestroyComponent(UActorComponent* Component) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Engine.Actor.K2_DestroyComponent"));
    struct Params_K2_DestroyComponent {
        UActorComponent* Component; // 0x0
    }; // Size: 0x8
    Params_K2_DestroyComponent params{};
    params.Component = (UActorComponent*)Component;
    ProcessEvent(func, &params);
}
void AActor::K2_DestroyActor() {
    static auto func = (UFunction*)(find_uobject("Function /Script/Engine.Actor.K2_DestroyActor"));
    struct Params_K2_DestroyActor {
    }; // Size: 0x0
    Params_K2_DestroyActor params{};
    ProcessEvent(func, &params);
}
void AActor::FinishAddComponent(UActorComponent* Component, bool bManualAttachment, FTransform& RelativeTransform) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Engine.Actor.FinishAddComponent"));
    struct Params_FinishAddComponent {
        UActorComponent* Component; // 0x0
        bool bManualAttachment; // 0x8
        char pad_9[0x7];
        FTransform RelativeTransform; // 0x10
    }; // Size: 0x40
    Params_FinishAddComponent params{};
    params.Component = (UActorComponent*)Component;
    params.bManualAttachment = (bool)bManualAttachment;
    params.RelativeTransform = (FTransform)RelativeTransform;
    ProcessEvent(func, &params);
    RelativeTransform = params.RelativeTransform;
}
void AActor::K2_AttachToComponent(USceneComponent* Parent, FName SocketName, EAttachmentRule LocationRule, EAttachmentRule RotationRule, EAttachmentRule ScaleRule, bool bWeldSimulatedBodies) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Engine.Actor.K2_AttachToComponent"));
    struct Params_K2_AttachToComponent {
        USceneComponent* Parent; // 0x0
        FName SocketName; // 0x8
        EAttachmentRule LocationRule; // 0x10
        EAttachmentRule RotationRule; // 0x11
        EAttachmentRule ScaleRule; // 0x12
        bool bWeldSimulatedBodies; // 0x13
    }; // Size: 0x14
    Params_K2_AttachToComponent params{};
    params.Parent = (USceneComponent*)Parent;
    params.SocketName = (FName)SocketName;
    params.LocationRule = (EAttachmentRule)LocationRule;
    params.RotationRule = (EAttachmentRule)RotationRule;
    params.ScaleRule = (EAttachmentRule)ScaleRule;
    params.bWeldSimulatedBodies = (bool)bWeldSimulatedBodies;
    ProcessEvent(func, &params);
}
void AActor::K2_AttachToActor(AActor* ParentActor, FName SocketName, EAttachmentRule LocationRule, EAttachmentRule RotationRule, EAttachmentRule ScaleRule, bool bWeldSimulatedBodies) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Engine.Actor.K2_AttachToActor"));
    struct Params_K2_AttachToActor {
        AActor* ParentActor; // 0x0
        FName SocketName; // 0x8
        EAttachmentRule LocationRule; // 0x10
        EAttachmentRule RotationRule; // 0x11
        EAttachmentRule ScaleRule; // 0x12
        bool bWeldSimulatedBodies; // 0x13
    }; // Size: 0x14
    Params_K2_AttachToActor params{};
    params.ParentActor = (AActor*)ParentActor;
    params.SocketName = (FName)SocketName;
    params.LocationRule = (EAttachmentRule)LocationRule;
    params.RotationRule = (EAttachmentRule)RotationRule;
    params.ScaleRule = (EAttachmentRule)ScaleRule;
    params.bWeldSimulatedBodies = (bool)bWeldSimulatedBodies;
    ProcessEvent(func, &params);
}
void AActor::K2_AttachRootComponentToActor(AActor* InParentActor, FName InSocketName, EAttachLocation::Type AttachLocationType, bool bWeldSimulatedBodies) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Engine.Actor.K2_AttachRootComponentToActor"));
    struct Params_K2_AttachRootComponentToActor {
        AActor* InParentActor; // 0x0
        FName InSocketName; // 0x8
        EAttachLocation::Type AttachLocationType; // 0x10
        bool bWeldSimulatedBodies; // 0x11
    }; // Size: 0x12
    Params_K2_AttachRootComponentToActor params{};
    params.InParentActor = (AActor*)InParentActor;
    params.InSocketName = (FName)InSocketName;
    params.AttachLocationType = (EAttachLocation::Type)AttachLocationType;
    params.bWeldSimulatedBodies = (bool)bWeldSimulatedBodies;
    ProcessEvent(func, &params);
}
UActorComponent* AActor::GetComponentByClass(UClass* ComponentClass) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Engine.Actor.GetComponentByClass"));
    struct Params_GetComponentByClass {
        UClass* ComponentClass; // 0x0
        UActorComponent* ReturnValue; // 0x8
    }; // Size: 0x10
    Params_GetComponentByClass params{};
    params.ComponentClass = (UClass*)ComponentClass;
    ProcessEvent(func, &params);
    return (UActorComponent*)params.ReturnValue;
}
float AActor::GetSquaredDistanceTo(AActor* OtherActor) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Engine.Actor.GetSquaredDistanceTo"));
    struct Params_GetSquaredDistanceTo {
        AActor* OtherActor; // 0x0
        float ReturnValue; // 0x8
    }; // Size: 0xc
    Params_GetSquaredDistanceTo params{};
    params.OtherActor = (AActor*)OtherActor;
    ProcessEvent(func, &params);
    return (float)params.ReturnValue;
}
void AActor::K2_AttachRootComponentTo(USceneComponent* InParent, FName InSocketName, EAttachLocation::Type AttachLocationType, bool bWeldSimulatedBodies) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Engine.Actor.K2_AttachRootComponentTo"));
    struct Params_K2_AttachRootComponentTo {
        USceneComponent* InParent; // 0x0
        FName InSocketName; // 0x8
        EAttachLocation::Type AttachLocationType; // 0x10
        bool bWeldSimulatedBodies; // 0x11
    }; // Size: 0x12
    Params_K2_AttachRootComponentTo params{};
    params.InParent = (USceneComponent*)InParent;
    params.InSocketName = (FName)InSocketName;
    params.AttachLocationType = (EAttachLocation::Type)AttachLocationType;
    params.bWeldSimulatedBodies = (bool)bWeldSimulatedBodies;
    ProcessEvent(func, &params);
}
void AActor::K2_AddActorWorldTransformKeepScale(FTransform& DeltaTransform, bool bSweep, FHitResult& SweepHitResult, bool bTeleport) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Engine.Actor.K2_AddActorWorldTransformKeepScale"));
    struct Params_K2_AddActorWorldTransformKeepScale {
        FTransform DeltaTransform; // 0x0
        bool bSweep; // 0x30
        char pad_31[0x3];
        FHitResult SweepHitResult; // 0x34
        bool bTeleport; // 0xbc
    }; // Size: 0xbd
    Params_K2_AddActorWorldTransformKeepScale params{};
    params.DeltaTransform = (FTransform)DeltaTransform;
    params.bSweep = (bool)bSweep;
    params.SweepHitResult = (FHitResult)SweepHitResult;
    params.bTeleport = (bool)bTeleport;
    ProcessEvent(func, &params);
    DeltaTransform = params.DeltaTransform;
    SweepHitResult = params.SweepHitResult;
}
void AActor::K2_AddActorWorldTransform(FTransform& DeltaTransform, bool bSweep, FHitResult& SweepHitResult, bool bTeleport) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Engine.Actor.K2_AddActorWorldTransform"));
    struct Params_K2_AddActorWorldTransform {
        FTransform DeltaTransform; // 0x0
        bool bSweep; // 0x30
        char pad_31[0x3];
        FHitResult SweepHitResult; // 0x34
        bool bTeleport; // 0xbc
    }; // Size: 0xbd
    Params_K2_AddActorWorldTransform params{};
    params.DeltaTransform = (FTransform)DeltaTransform;
    params.bSweep = (bool)bSweep;
    params.SweepHitResult = (FHitResult)SweepHitResult;
    params.bTeleport = (bool)bTeleport;
    ProcessEvent(func, &params);
    DeltaTransform = params.DeltaTransform;
    SweepHitResult = params.SweepHitResult;
}
void AActor::K2_AddActorLocalRotation(FRotator DeltaRotation, bool bSweep, FHitResult& SweepHitResult, bool bTeleport) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Engine.Actor.K2_AddActorLocalRotation"));
    struct Params_K2_AddActorLocalRotation {
        FRotator DeltaRotation; // 0x0
        bool bSweep; // 0xc
        char pad_d[0x3];
        FHitResult SweepHitResult; // 0x10
        bool bTeleport; // 0x98
    }; // Size: 0x99
    Params_K2_AddActorLocalRotation params{};
    params.DeltaRotation = (FRotator)DeltaRotation;
    params.bSweep = (bool)bSweep;
    params.SweepHitResult = (FHitResult)SweepHitResult;
    params.bTeleport = (bool)bTeleport;
    ProcessEvent(func, &params);
    SweepHitResult = params.SweepHitResult;
}
void AActor::K2_AddActorWorldRotation(FRotator DeltaRotation, bool bSweep, FHitResult& SweepHitResult, bool bTeleport) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Engine.Actor.K2_AddActorWorldRotation"));
    struct Params_K2_AddActorWorldRotation {
        FRotator DeltaRotation; // 0x0
        bool bSweep; // 0xc
        char pad_d[0x3];
        FHitResult SweepHitResult; // 0x10
        bool bTeleport; // 0x98
    }; // Size: 0x99
    Params_K2_AddActorWorldRotation params{};
    params.DeltaRotation = (FRotator)DeltaRotation;
    params.bSweep = (bool)bSweep;
    params.SweepHitResult = (FHitResult)SweepHitResult;
    params.bTeleport = (bool)bTeleport;
    ProcessEvent(func, &params);
    SweepHitResult = params.SweepHitResult;
}
void AActor::K2_AddActorWorldOffset(FVector DeltaLocation, bool bSweep, FHitResult& SweepHitResult, bool bTeleport) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Engine.Actor.K2_AddActorWorldOffset"));
    struct Params_K2_AddActorWorldOffset {
        FVector DeltaLocation; // 0x0
        bool bSweep; // 0xc
        char pad_d[0x3];
        FHitResult SweepHitResult; // 0x10
        bool bTeleport; // 0x98
    }; // Size: 0x99
    Params_K2_AddActorWorldOffset params{};
    params.DeltaLocation = (FVector)DeltaLocation;
    params.bSweep = (bool)bSweep;
    params.SweepHitResult = (FHitResult)SweepHitResult;
    params.bTeleport = (bool)bTeleport;
    ProcessEvent(func, &params);
    SweepHitResult = params.SweepHitResult;
}
void AActor::K2_AddActorLocalTransform(FTransform& NewTransform, bool bSweep, FHitResult& SweepHitResult, bool bTeleport) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Engine.Actor.K2_AddActorLocalTransform"));
    struct Params_K2_AddActorLocalTransform {
        FTransform NewTransform; // 0x0
        bool bSweep; // 0x30
        char pad_31[0x3];
        FHitResult SweepHitResult; // 0x34
        bool bTeleport; // 0xbc
    }; // Size: 0xbd
    Params_K2_AddActorLocalTransform params{};
    params.NewTransform = (FTransform)NewTransform;
    params.bSweep = (bool)bSweep;
    params.SweepHitResult = (FHitResult)SweepHitResult;
    params.bTeleport = (bool)bTeleport;
    ProcessEvent(func, &params);
    NewTransform = params.NewTransform;
    SweepHitResult = params.SweepHitResult;
}
void AActor::K2_AddActorLocalOffset(FVector DeltaLocation, bool bSweep, FHitResult& SweepHitResult, bool bTeleport) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Engine.Actor.K2_AddActorLocalOffset"));
    struct Params_K2_AddActorLocalOffset {
        FVector DeltaLocation; // 0x0
        bool bSweep; // 0xc
        char pad_d[0x3];
        FHitResult SweepHitResult; // 0x10
        bool bTeleport; // 0x98
    }; // Size: 0x99
    Params_K2_AddActorLocalOffset params{};
    params.DeltaLocation = (FVector)DeltaLocation;
    params.bSweep = (bool)bSweep;
    params.SweepHitResult = (FHitResult)SweepHitResult;
    params.bTeleport = (bool)bTeleport;
    ProcessEvent(func, &params);
    SweepHitResult = params.SweepHitResult;
}
bool AActor::HasAuthority() {
    static auto func = (UFunction*)(find_uobject("Function /Script/Engine.Actor.HasAuthority"));
    struct Params_HasAuthority {
        bool ReturnValue; // 0x0
    }; // Size: 0x1
    Params_HasAuthority params{};
    ProcessEvent(func, &params);
    return (bool)params.ReturnValue;
}
bool AActor::IsOverlappingActor(AActor* Other) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Engine.Actor.IsOverlappingActor"));
    struct Params_IsOverlappingActor {
        AActor* Other; // 0x0
        bool ReturnValue; // 0x8
    }; // Size: 0x9
    Params_IsOverlappingActor params{};
    params.Other = (AActor*)Other;
    ProcessEvent(func, &params);
    return (bool)params.ReturnValue;
}
bool AActor::IsChildActor() {
    static auto func = (UFunction*)(find_uobject("Function /Script/Engine.Actor.IsChildActor"));
    struct Params_IsChildActor {
        bool ReturnValue; // 0x0
    }; // Size: 0x1
    Params_IsChildActor params{};
    ProcessEvent(func, &params);
    return (bool)params.ReturnValue;
}
bool AActor::IsActorTickEnabled() {
    static auto func = (UFunction*)(find_uobject("Function /Script/Engine.Actor.IsActorTickEnabled"));
    struct Params_IsActorTickEnabled {
        bool ReturnValue; // 0x0
    }; // Size: 0x1
    Params_IsActorTickEnabled params{};
    ProcessEvent(func, &params);
    return (bool)params.ReturnValue;
}
bool AActor::IsActorBeingDestroyed() {
    static auto func = (UFunction*)(find_uobject("Function /Script/Engine.Actor.IsActorBeingDestroyed"));
    struct Params_IsActorBeingDestroyed {
        bool ReturnValue; // 0x0
    }; // Size: 0x1
    Params_IsActorBeingDestroyed params{};
    ProcessEvent(func, &params);
    return (bool)params.ReturnValue;
}
FVector AActor::GetVelocity() {
    static auto func = (UFunction*)(find_uobject("Function /Script/Engine.Actor.GetVelocity"));
    struct Params_GetVelocity {
        FVector ReturnValue; // 0x0
    }; // Size: 0xc
    Params_GetVelocity params{};
    ProcessEvent(func, &params);
    return (FVector)params.ReturnValue;
}
FTransform AActor::GetTransform() {
    static auto func = (UFunction*)(find_uobject("Function /Script/Engine.Actor.GetTransform"));
    struct Params_GetTransform {
        FTransform ReturnValue; // 0x0
    }; // Size: 0x30
    Params_GetTransform params{};
    ProcessEvent(func, &params);
    return (FTransform)params.ReturnValue;
}
bool AActor::GetTickableWhenPaused() {
    static auto func = (UFunction*)(find_uobject("Function /Script/Engine.Actor.GetTickableWhenPaused"));
    struct Params_GetTickableWhenPaused {
        bool ReturnValue; // 0x0
    }; // Size: 0x1
    Params_GetTickableWhenPaused params{};
    ProcessEvent(func, &params);
    return (bool)params.ReturnValue;
}
float AActor::GetSquaredHorizontalDistanceTo(AActor* OtherActor) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Engine.Actor.GetSquaredHorizontalDistanceTo"));
    struct Params_GetSquaredHorizontalDistanceTo {
        AActor* OtherActor; // 0x0
        float ReturnValue; // 0x8
    }; // Size: 0xc
    Params_GetSquaredHorizontalDistanceTo params{};
    params.OtherActor = (AActor*)OtherActor;
    ProcessEvent(func, &params);
    return (float)params.ReturnValue;
}
ENetRole AActor::GetRemoteRole() {
    static auto func = (UFunction*)(find_uobject("Function /Script/Engine.Actor.GetRemoteRole"));
    struct Params_GetRemoteRole {
        ENetRole ReturnValue; // 0x0
    }; // Size: 0x1
    Params_GetRemoteRole params{};
    ProcessEvent(func, &params);
    return (ENetRole)params.ReturnValue;
}
UChildActorComponent* AActor::GetParentComponent() {
    static auto func = (UFunction*)(find_uobject("Function /Script/Engine.Actor.GetParentComponent"));
    struct Params_GetParentComponent {
        UChildActorComponent* ReturnValue; // 0x0
    }; // Size: 0x8
    Params_GetParentComponent params{};
    ProcessEvent(func, &params);
    return (UChildActorComponent*)params.ReturnValue;
}
AActor* AActor::GetParentActor() {
    static auto func = (UFunction*)(find_uobject("Function /Script/Engine.Actor.GetParentActor"));
    struct Params_GetParentActor {
        AActor* ReturnValue; // 0x0
    }; // Size: 0x8
    Params_GetParentActor params{};
    ProcessEvent(func, &params);
    return (AActor*)params.ReturnValue;
}
AActor* AActor::GetOwner() {
    static auto func = (UFunction*)(find_uobject("Function /Script/Engine.Actor.GetOwner"));
    struct Params_GetOwner {
        AActor* ReturnValue; // 0x0
    }; // Size: 0x8
    Params_GetOwner params{};
    ProcessEvent(func, &params);
    return (AActor*)params.ReturnValue;
}
void AActor::GetOverlappingComponents(TArray<UPrimitiveComponent*>& OverlappingComponents) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Engine.Actor.GetOverlappingComponents"));
    struct Params_GetOverlappingComponents {
        TArray<UPrimitiveComponent*> OverlappingComponents; // 0x0
    }; // Size: 0x10
    Params_GetOverlappingComponents params{};
    params.OverlappingComponents = (TArray<UPrimitiveComponent*>)OverlappingComponents;
    ProcessEvent(func, &params);
    OverlappingComponents = params.OverlappingComponents;
}
ENetRole AActor::GetLocalRole() {
    static auto func = (UFunction*)(find_uobject("Function /Script/Engine.Actor.GetLocalRole"));
    struct Params_GetLocalRole {
        ENetRole ReturnValue; // 0x0
    }; // Size: 0x1
    Params_GetLocalRole params{};
    ProcessEvent(func, &params);
    return (ENetRole)params.ReturnValue;
}
float AActor::GetLifeSpan() {
    static auto func = (UFunction*)(find_uobject("Function /Script/Engine.Actor.GetLifeSpan"));
    struct Params_GetLifeSpan {
        float ReturnValue; // 0x0
    }; // Size: 0x4
    Params_GetLifeSpan params{};
    ProcessEvent(func, &params);
    return (float)params.ReturnValue;
}
void AActor::GetActorEyesViewPoint(FVector& OutLocation, FRotator& OutRotation) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Engine.Actor.GetActorEyesViewPoint"));
    struct Params_GetActorEyesViewPoint {
        FVector OutLocation; // 0x0
        FRotator OutRotation; // 0xc
    }; // Size: 0x18
    Params_GetActorEyesViewPoint params{};
    params.OutLocation = (FVector)OutLocation;
    params.OutRotation = (FRotator)OutRotation;
    ProcessEvent(func, &params);
    OutLocation = params.OutLocation;
    OutRotation = params.OutRotation;
}
AController* AActor::GetInstigatorController() {
    static auto func = (UFunction*)(find_uobject("Function /Script/Engine.Actor.GetInstigatorController"));
    struct Params_GetInstigatorController {
        AController* ReturnValue; // 0x0
    }; // Size: 0x8
    Params_GetInstigatorController params{};
    ProcessEvent(func, &params);
    return (AController*)params.ReturnValue;
}
APawn* AActor::GetInstigator() {
    static auto func = (UFunction*)(find_uobject("Function /Script/Engine.Actor.GetInstigator"));
    struct Params_GetInstigator {
        APawn* ReturnValue; // 0x0
    }; // Size: 0x8
    Params_GetInstigator params{};
    ProcessEvent(func, &params);
    return (APawn*)params.ReturnValue;
}
FVector AActor::GetInputVectorAxisValue(FKey InputAxisKey) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Engine.Actor.GetInputVectorAxisValue"));
    struct Params_GetInputVectorAxisValue {
        FKey InputAxisKey; // 0x0
        FVector ReturnValue; // 0x18
    }; // Size: 0x24
    Params_GetInputVectorAxisValue params{};
    params.InputAxisKey = (FKey)InputAxisKey;
    ProcessEvent(func, &params);
    return (FVector)params.ReturnValue;
}
float AActor::GetInputAxisValue(FName InputAxisName) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Engine.Actor.GetInputAxisValue"));
    struct Params_GetInputAxisValue {
        FName InputAxisName; // 0x0
        float ReturnValue; // 0x8
    }; // Size: 0xc
    Params_GetInputAxisValue params{};
    params.InputAxisName = (FName)InputAxisName;
    ProcessEvent(func, &params);
    return (float)params.ReturnValue;
}
float AActor::GetInputAxisKeyValue(FKey InputAxisKey) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Engine.Actor.GetInputAxisKeyValue"));
    struct Params_GetInputAxisKeyValue {
        FKey InputAxisKey; // 0x0
        float ReturnValue; // 0x18
    }; // Size: 0x1c
    Params_GetInputAxisKeyValue params{};
    params.InputAxisKey = (FKey)InputAxisKey;
    ProcessEvent(func, &params);
    return (float)params.ReturnValue;
}
float AActor::GetHorizontalDotProductTo(AActor* OtherActor) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Engine.Actor.GetHorizontalDotProductTo"));
    struct Params_GetHorizontalDotProductTo {
        AActor* OtherActor; // 0x0
        float ReturnValue; // 0x8
    }; // Size: 0xc
    Params_GetHorizontalDotProductTo params{};
    params.OtherActor = (AActor*)OtherActor;
    ProcessEvent(func, &params);
    return (float)params.ReturnValue;
}
float AActor::GetGameTimeSinceCreation() {
    static auto func = (UFunction*)(find_uobject("Function /Script/Engine.Actor.GetGameTimeSinceCreation"));
    struct Params_GetGameTimeSinceCreation {
        float ReturnValue; // 0x0
    }; // Size: 0x4
    Params_GetGameTimeSinceCreation params{};
    ProcessEvent(func, &params);
    return (float)params.ReturnValue;
}
float AActor::GetDotProductTo(AActor* OtherActor) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Engine.Actor.GetDotProductTo"));
    struct Params_GetDotProductTo {
        AActor* OtherActor; // 0x0
        float ReturnValue; // 0x8
    }; // Size: 0xc
    Params_GetDotProductTo params{};
    params.OtherActor = (AActor*)OtherActor;
    ProcessEvent(func, &params);
    return (float)params.ReturnValue;
}
AActor* AActor::GetAttachParentActor() {
    static auto func = (UFunction*)(find_uobject("Function /Script/Engine.Actor.GetAttachParentActor"));
    struct Params_GetAttachParentActor {
        AActor* ReturnValue; // 0x0
    }; // Size: 0x8
    Params_GetAttachParentActor params{};
    ProcessEvent(func, &params);
    return (AActor*)params.ReturnValue;
}
TArray<UActorComponent*> AActor::GetComponentsByTag(UClass* ComponentClass, FName Tag) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Engine.Actor.GetComponentsByTag"));
    struct Params_GetComponentsByTag {
        UClass* ComponentClass; // 0x0
        FName Tag; // 0x8
        TArray<UActorComponent*> ReturnValue; // 0x10
    }; // Size: 0x20
    Params_GetComponentsByTag params{};
    params.ComponentClass = (UClass*)ComponentClass;
    params.Tag = (FName)Tag;
    ProcessEvent(func, &params);
    return (TArray<UActorComponent*>)params.ReturnValue;
}
TArray<UActorComponent*> AActor::GetComponentsByInterface(UClass* Interface) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Engine.Actor.GetComponentsByInterface"));
    struct Params_GetComponentsByInterface {
        UClass* Interface; // 0x0
        TArray<UActorComponent*> ReturnValue; // 0x8
    }; // Size: 0x18
    Params_GetComponentsByInterface params{};
    params.Interface = (UClass*)Interface;
    ProcessEvent(func, &params);
    return (TArray<UActorComponent*>)params.ReturnValue;
}
FName AActor::GetAttachParentSocketName() {
    static auto func = (UFunction*)(find_uobject("Function /Script/Engine.Actor.GetAttachParentSocketName"));
    struct Params_GetAttachParentSocketName {
        FName ReturnValue; // 0x0
    }; // Size: 0x8
    Params_GetAttachParentSocketName params{};
    ProcessEvent(func, &params);
    return (FName)params.ReturnValue;
}
void AActor::GetAttachedActors(TArray<AActor*>& OutActors, bool bResetArray) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Engine.Actor.GetAttachedActors"));
    struct Params_GetAttachedActors {
        TArray<AActor*> OutActors; // 0x0
        bool bResetArray; // 0x10
    }; // Size: 0x11
    Params_GetAttachedActors params{};
    params.OutActors = (TArray<AActor*>)OutActors;
    params.bResetArray = (bool)bResetArray;
    ProcessEvent(func, &params);
    OutActors = params.OutActors;
}
void AActor::GetAllChildActors(TArray<AActor*>& ChildActors, bool bIncludeDescendants) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Engine.Actor.GetAllChildActors"));
    struct Params_GetAllChildActors {
        TArray<AActor*> ChildActors; // 0x0
        bool bIncludeDescendants; // 0x10
    }; // Size: 0x11
    Params_GetAllChildActors params{};
    params.ChildActors = (TArray<AActor*>)ChildActors;
    params.bIncludeDescendants = (bool)bIncludeDescendants;
    ProcessEvent(func, &params);
    ChildActors = params.ChildActors;
}
FVector AActor::GetActorUpVector() {
    static auto func = (UFunction*)(find_uobject("Function /Script/Engine.Actor.GetActorUpVector"));
    struct Params_GetActorUpVector {
        FVector ReturnValue; // 0x0
    }; // Size: 0xc
    Params_GetActorUpVector params{};
    ProcessEvent(func, &params);
    return (FVector)params.ReturnValue;
}
float AActor::GetActorTickInterval() {
    static auto func = (UFunction*)(find_uobject("Function /Script/Engine.Actor.GetActorTickInterval"));
    struct Params_GetActorTickInterval {
        float ReturnValue; // 0x0
    }; // Size: 0x4
    Params_GetActorTickInterval params{};
    ProcessEvent(func, &params);
    return (float)params.ReturnValue;
}
FVector AActor::GetActorScale3D() {
    static auto func = (UFunction*)(find_uobject("Function /Script/Engine.Actor.GetActorScale3D"));
    struct Params_GetActorScale3D {
        FVector ReturnValue; // 0x0
    }; // Size: 0xc
    Params_GetActorScale3D params{};
    ProcessEvent(func, &params);
    return (FVector)params.ReturnValue;
}
FVector AActor::GetActorRightVector() {
    static auto func = (UFunction*)(find_uobject("Function /Script/Engine.Actor.GetActorRightVector"));
    struct Params_GetActorRightVector {
        FVector ReturnValue; // 0x0
    }; // Size: 0xc
    Params_GetActorRightVector params{};
    ProcessEvent(func, &params);
    return (FVector)params.ReturnValue;
}
FVector AActor::GetActorRelativeScale3D() {
    static auto func = (UFunction*)(find_uobject("Function /Script/Engine.Actor.GetActorRelativeScale3D"));
    struct Params_GetActorRelativeScale3D {
        FVector ReturnValue; // 0x0
    }; // Size: 0xc
    Params_GetActorRelativeScale3D params{};
    ProcessEvent(func, &params);
    return (FVector)params.ReturnValue;
}
FVector AActor::GetActorForwardVector() {
    static auto func = (UFunction*)(find_uobject("Function /Script/Engine.Actor.GetActorForwardVector"));
    struct Params_GetActorForwardVector {
        FVector ReturnValue; // 0x0
    }; // Size: 0xc
    Params_GetActorForwardVector params{};
    ProcessEvent(func, &params);
    return (FVector)params.ReturnValue;
}
void AActor::GetActorBounds(bool bOnlyCollidingComponents, FVector& Origin, FVector& BoxExtent, bool bIncludeFromChildActors) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Engine.Actor.GetActorBounds"));
    struct Params_GetActorBounds {
        bool bOnlyCollidingComponents; // 0x0
        char pad_1[0x3];
        FVector Origin; // 0x4
        FVector BoxExtent; // 0x10
        bool bIncludeFromChildActors; // 0x1c
    }; // Size: 0x1d
    Params_GetActorBounds params{};
    params.bOnlyCollidingComponents = (bool)bOnlyCollidingComponents;
    params.Origin = (FVector)Origin;
    params.BoxExtent = (FVector)BoxExtent;
    params.bIncludeFromChildActors = (bool)bIncludeFromChildActors;
    ProcessEvent(func, &params);
    Origin = params.Origin;
    BoxExtent = params.BoxExtent;
}
void AActor::ForceNetUpdate() {
    static auto func = (UFunction*)(find_uobject("Function /Script/Engine.Actor.ForceNetUpdate"));
    struct Params_ForceNetUpdate {
    }; // Size: 0x0
    Params_ForceNetUpdate params{};
    ProcessEvent(func, &params);
}
void AActor::FlushNetDormancy() {
    static auto func = (UFunction*)(find_uobject("Function /Script/Engine.Actor.FlushNetDormancy"));
    struct Params_FlushNetDormancy {
    }; // Size: 0x0
    Params_FlushNetDormancy params{};
    ProcessEvent(func, &params);
}
UActorComponent* AActor::AddComponentByClass(UClass* Class, bool bManualAttachment, FTransform& RelativeTransform, bool bDeferredFinish) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Engine.Actor.AddComponentByClass"));
    struct Params_AddComponentByClass {
        UClass* Class; // 0x0
        bool bManualAttachment; // 0x8
        char pad_9[0x7];
        FTransform RelativeTransform; // 0x10
        bool bDeferredFinish; // 0x40
        char pad_41[0x7];
        UActorComponent* ReturnValue; // 0x48
    }; // Size: 0x50
    Params_AddComponentByClass params{};
    params.Class = (UClass*)Class;
    params.bManualAttachment = (bool)bManualAttachment;
    params.RelativeTransform = (FTransform)RelativeTransform;
    params.bDeferredFinish = (bool)bDeferredFinish;
    ProcessEvent(func, &params);
    RelativeTransform = params.RelativeTransform;
    return (UActorComponent*)params.ReturnValue;
}
void AActor::EnableInput(APlayerController* PlayerController) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Engine.Actor.EnableInput"));
    struct Params_EnableInput {
        APlayerController* PlayerController; // 0x0
    }; // Size: 0x8
    Params_EnableInput params{};
    params.PlayerController = (APlayerController*)PlayerController;
    ProcessEvent(func, &params);
}
void AActor::DetachRootComponentFromParent(bool bMaintainWorldPosition) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Engine.Actor.DetachRootComponentFromParent"));
    struct Params_DetachRootComponentFromParent {
        bool bMaintainWorldPosition; // 0x0
    }; // Size: 0x1
    Params_DetachRootComponentFromParent params{};
    params.bMaintainWorldPosition = (bool)bMaintainWorldPosition;
    ProcessEvent(func, &params);
}
void AActor::AddTickPrerequisiteComponent(UActorComponent* PrerequisiteComponent) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Engine.Actor.AddTickPrerequisiteComponent"));
    struct Params_AddTickPrerequisiteComponent {
        UActorComponent* PrerequisiteComponent; // 0x0
    }; // Size: 0x8
    Params_AddTickPrerequisiteComponent params{};
    params.PrerequisiteComponent = (UActorComponent*)PrerequisiteComponent;
    ProcessEvent(func, &params);
}
void AActor::AddTickPrerequisiteActor(AActor* PrerequisiteActor) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Engine.Actor.AddTickPrerequisiteActor"));
    struct Params_AddTickPrerequisiteActor {
        AActor* PrerequisiteActor; // 0x0
    }; // Size: 0x8
    Params_AddTickPrerequisiteActor params{};
    params.PrerequisiteActor = (AActor*)PrerequisiteActor;
    ProcessEvent(func, &params);
}
UActorComponent* AActor::AddComponent(FName TemplateName, bool bManualAttachment, FTransform& RelativeTransform, UObject* ComponentTemplateContext, bool bDeferredFinish) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Engine.Actor.AddComponent"));
    struct Params_AddComponent {
        FName TemplateName; // 0x0
        bool bManualAttachment; // 0x8
        char pad_9[0x7];
        FTransform RelativeTransform; // 0x10
        UObject* ComponentTemplateContext; // 0x40
        bool bDeferredFinish; // 0x48
        char pad_49[0x7];
        UActorComponent* ReturnValue; // 0x50
    }; // Size: 0x58
    Params_AddComponent params{};
    params.TemplateName = (FName)TemplateName;
    params.bManualAttachment = (bool)bManualAttachment;
    params.RelativeTransform = (FTransform)RelativeTransform;
    params.ComponentTemplateContext = (UObject*)ComponentTemplateContext;
    params.bDeferredFinish = (bool)bDeferredFinish;
    ProcessEvent(func, &params);
    RelativeTransform = params.RelativeTransform;
    return (UActorComponent*)params.ReturnValue;
}
bool AActor::ActorHasTag(FName Tag) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Engine.Actor.ActorHasTag"));
    struct Params_ActorHasTag {
        FName Tag; // 0x0
        bool ReturnValue; // 0x8
    }; // Size: 0x9
    Params_ActorHasTag params{};
    params.Tag = (FName)Tag;
    ProcessEvent(func, &params);
    return (bool)params.ReturnValue;
}
