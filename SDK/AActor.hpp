#pragma once
#include <cstdint>
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
#include "FKey.hpp"
#include "FRepAttachment.hpp"
#include "FRepMovement.hpp"
#include "FRotator.hpp"
#include "FTransform.hpp"
#include "FVector.hpp"
#include "UObject.hpp"
class UInputComponent;
class APawn;
struct FHitResult;
class USceneComponent;
class AMatineeActor;
class UActorComponent;
class AController;
class UDamageType;
class UPrimitiveComponent;
class UMaterialInterface;
class UMaterialInstanceDynamic;
class APlayerController;
class UClass;
class UChildActorComponent;
#pragma pack(push, 1)
class AActor : public UObject {
public:
    FActorTickFunction PrimaryActorTick; // 0x28
    uint8_t bHiddenIsManaged : 1; // 0x70
    uint8_t bHiddenCalledFromManager : 1; // 0x70
    uint8_t bNetTemporary : 1; // 0x70
    uint8_t bNetStartup : 1; // 0x70
    uint8_t bOnlyRelevantToOwner : 1; // 0x70
    uint8_t bAlwaysRelevant : 1; // 0x70
    uint8_t bReplicateMovement : 1; // 0x70
    uint8_t bHidden : 1; // 0x70
    uint8_t bTearOff : 1; // 0x71
    uint8_t bForceNetAddressable : 1; // 0x71
    uint8_t bExchangedRoles : 1; // 0x71
    uint8_t bNetLoadOnClient : 1; // 0x71
    uint8_t bNetUseOwnerRelevancy : 1; // 0x71
    uint8_t bRelevantForNetworkReplays : 1; // 0x71
    uint8_t bRelevantForLevelBounds : 1; // 0x71
    uint8_t bReplayRewindable : 1; // 0x71
    uint8_t bAllowTickBeforeBeginPlay : 1; // 0x72
    uint8_t bAutoDestroyWhenFinished : 1; // 0x72
    uint8_t bCanBeDamaged : 1; // 0x72
    uint8_t bBlockInput : 1; // 0x72
    uint8_t bCollideWhenPlacing : 1; // 0x72
    uint8_t bFindCameraComponentWhenViewTarget : 1; // 0x72
    uint8_t bGenerateOverlapEventsDuringLevelStreaming : 1; // 0x72
    uint8_t bIgnoresOriginShifting : 1; // 0x72
    uint8_t bEnableAutoLODGeneration : 1; // 0x73
    uint8_t bIsEditorOnlyActor : 1; // 0x73
    uint8_t bActorSeamlessTraveled : 1; // 0x73
    uint8_t bReplicates : 1; // 0x73
    uint8_t bCanBeInCluster : 1; // 0x73
    uint8_t bAllowReceiveTickEventOnDedicatedServer : 1; // 0x73
    uint8_t pad_bitfield_73_6 : 2;
    uint8_t pad_bitfield_74_0 : 2;
    uint8_t bUpdateInitialOverlaps : 1; // 0x74
    uint8_t pad_bitfield_74_3 : 5;
    uint8_t bActorEnableCollision : 1; // 0x75
    uint8_t bActorIsBeingDestroyed : 1; // 0x75
    uint8_t pad_bitfield_75_2 : 6;
    EActorUpdateOverlapsMethod UpdateOverlapsMethodDuringLevelStreaming; // 0x76
    EActorUpdateOverlapsMethod DefaultUpdateOverlapsMethodDuringLevelStreaming; // 0x77
    ENetRole RemoteRole; // 0x78
    char pad_79[0x3];
    FRepMovement ReplicatedMovement; // 0x7c
    float InitialLifeSpan; // 0xb0
    float CustomTimeDilation; // 0xb4
    char pad_b8[0x8];
    FRepAttachment AttachmentReplication; // 0xc0
    AActor* Owner; // 0x100
    FName NetDriverName; // 0x108
    ENetRole Role; // 0x110
    ENetDormancy NetDormancy; // 0x111
    ESpawnActorCollisionHandlingMethod SpawnCollisionHandlingMethod; // 0x112
    EAutoReceiveInput::Type AutoReceiveInput; // 0x113
    int32_t InputPriority; // 0x114
    UInputComponent* InputComponent; // 0x118
    float NetCullDistanceSquared; // 0x120
    int32_t NetTag; // 0x124
    float NetUpdateFrequency; // 0x128
    float MinNetUpdateFrequency; // 0x12c
    float NetPriority; // 0x130
    char pad_134[0xc];
    APawn* Instigator; // 0x140
    TArray<AActor*> Children; // 0x148
    USceneComponent* RootComponent; // 0x158
    TArray<AMatineeActor*> ControllingMatineeActors; // 0x160
    char pad_170[0x8];
    TArray<FName> Layers; // 0x178
    char pad_188[0x10];
    TArray<FName> Tags; // 0x198
    char pad_1a8[0x70];
    TArray<UActorComponent*> InstanceComponents; // 0x218
    TArray<UActorComponent*> BlueprintCreatedComponents; // 0x228
    char pad_238[0x10];
    static AActor* StaticClass();
    bool WasRecentlyRenderedOnScreen(float Tolerance);
    bool WasRecentlyRendered(float Tolerance);
    void UserConstructionScript();
    void TearOff();
    void SnapRootComponentTo(AActor* InParentActor, FName InSocketName);
    void SetUpdateInitialOverlaps(bool InUpdateInitialOverlaps);
    void SetTickGroup(ETickingGroup NewTickGroup);
    void SetTickableWhenPaused(bool bTickableWhenPaused);
    void SetReplicates(bool bInReplicates);
    void SetReplicateMovement(bool bInReplicateMovement);
    void SetOwner(AActor* NewOwner);
    void SetNetDormancy(ENetDormancy NewDormancy);
    void SetLifeSpan(float InLifespan);
    void SetAutoDestroyWhenFinished(bool bVal);
    void SetActorTickInterval(float TickInterval);
    void SetActorTickEnabled(bool bEnabled);
    void SetActorScale3D(FVector NewScale3D);
    void SetActorRelativeScale3D(FVector NewRelativeScale);
    void SetActorHiddenInGame(bool bNewHidden);
    void SetActorEnableCollision(bool bNewActorEnableCollision);
    void RemoveTickPrerequisiteComponent(UActorComponent* PrerequisiteComponent);
    void RemoveTickPrerequisiteActor(AActor* PrerequisiteActor);
    void ReceiveTick(float DeltaSeconds);
    void ReceiveRadialDamage(float DamageReceived, UDamageType* DamageType, FVector Origin, FHitResult& HitInfo, AController* InstigatedBy, AActor* DamageCauser);
    void ReceivePointDamage(float Damage, UDamageType* DamageType, FVector HitLocation, FVector HitNormal, UPrimitiveComponent* HitComponent, FName BoneName, FVector ShotFromDirection, AController* InstigatedBy, AActor* DamageCauser, FHitResult& HitInfo);
    void ReceiveHit(UPrimitiveComponent* MyComp, AActor* Other, UPrimitiveComponent* OtherComp, bool bSelfMoved, FVector HitLocation, FVector HitNormal, FVector NormalImpulse, FHitResult& Hit);
    void ReceiveEndPlay(EEndPlayReason::Type EndPlayReason);
    void ReceiveDestroyed();
    void ReceiveBeginPlay();
    void ReceiveAnyDamage(float Damage, UDamageType* DamageType, AController* InstigatedBy, AActor* DamageCauser);
    void ReceiveActorOnReleased(FKey ButtonReleased);
    void ReceiveActorOnInputTouchLeave(ETouchIndex::Type FingerIndex);
    void ReceiveActorOnInputTouchEnter(ETouchIndex::Type FingerIndex);
    void ReceiveActorOnInputTouchEnd(ETouchIndex::Type FingerIndex);
    void ReceiveActorOnInputTouchBegin(ETouchIndex::Type FingerIndex);
    void ReceiveActorOnClicked(FKey ButtonPressed);
    void ReceiveActorEndOverlap(AActor* OtherActor);
    void ReceiveActorEndCursorOver();
    void ReceiveActorBeginOverlap(AActor* OtherActor);
    void ReceiveActorBeginCursorOver();
    void PrestreamTextures(float Seconds, bool bEnableStreaming, int32_t CinematicTextureGroups);
    void PrestreamMeshes(float Seconds, bool bEnableStreaming);
    void OnRep_ReplicateMovement();
    void OnRep_ReplicatedMovement();
    void OnRep_Owner();
    void OnRep_Instigator();
    void OnRep_AttachmentReplication();
    void MakeNoise(float Loudness, APawn* NoiseInstigator, FVector NoiseLocation, float MaxRange, FName Tag);
    UMaterialInstanceDynamic* MakeMIDForMaterial(UMaterialInterface* Parent);
    bool K2_TeleportTo(FVector DestLocation, FRotator DestRotation);
    bool K2_SetActorTransform(FTransform& NewTransform, bool bSweep, FHitResult& SweepHitResult, bool bTeleport);
    bool K2_SetActorRotation(FRotator NewRotation, bool bTeleportPhysics);
    void K2_SetActorRelativeTransform(FTransform& NewRelativeTransform, bool bSweep, FHitResult& SweepHitResult, bool bTeleport);
    void K2_SetActorRelativeRotation(FRotator NewRelativeRotation, bool bSweep, FHitResult& SweepHitResult, bool bTeleport);
    void K2_SetActorRelativeLocation(FVector NewRelativeLocation, bool bSweep, FHitResult& SweepHitResult, bool bTeleport);
    bool K2_SetActorLocationAndRotation(FVector NewLocation, FRotator NewRotation, bool bSweep, FHitResult& SweepHitResult, bool bTeleport);
    bool K2_SetActorLocation(FVector NewLocation, bool bSweep, FHitResult& SweepHitResult, bool bTeleport);
    void K2_OnReset();
    void K2_OnEndViewTarget(APlayerController* PC);
    void K2_OnBecomeViewTarget(APlayerController* PC);
    USceneComponent* K2_GetRootComponent();
    TArray<UActorComponent*> K2_GetComponentsByClass(UClass* ComponentClass);
    FRotator K2_GetActorRotation();
    FVector K2_GetActorLocation();
    void K2_DetachFromActor(EDetachmentRule LocationRule, EDetachmentRule RotationRule, EDetachmentRule ScaleRule);
    void K2_DestroyComponent(UActorComponent* Component);
    void K2_DestroyActor();
    void K2_AttachToComponent(USceneComponent* Parent, FName SocketName, EAttachmentRule LocationRule, EAttachmentRule RotationRule, EAttachmentRule ScaleRule, bool bWeldSimulatedBodies);
    void K2_AttachToActor(AActor* ParentActor, FName SocketName, EAttachmentRule LocationRule, EAttachmentRule RotationRule, EAttachmentRule ScaleRule, bool bWeldSimulatedBodies);
    void K2_AttachRootComponentToActor(AActor* InParentActor, FName InSocketName, EAttachLocation::Type AttachLocationType, bool bWeldSimulatedBodies);
    void K2_AttachRootComponentTo(USceneComponent* InParent, FName InSocketName, EAttachLocation::Type AttachLocationType, bool bWeldSimulatedBodies);
    void K2_AddActorWorldTransformKeepScale(FTransform& DeltaTransform, bool bSweep, FHitResult& SweepHitResult, bool bTeleport);
    void K2_AddActorWorldTransform(FTransform& DeltaTransform, bool bSweep, FHitResult& SweepHitResult, bool bTeleport);
    void K2_AddActorWorldRotation(FRotator DeltaRotation, bool bSweep, FHitResult& SweepHitResult, bool bTeleport);
    void K2_AddActorWorldOffset(FVector DeltaLocation, bool bSweep, FHitResult& SweepHitResult, bool bTeleport);
    void K2_AddActorLocalTransform(FTransform& NewTransform, bool bSweep, FHitResult& SweepHitResult, bool bTeleport);
    void K2_AddActorLocalRotation(FRotator DeltaRotation, bool bSweep, FHitResult& SweepHitResult, bool bTeleport);
    void K2_AddActorLocalOffset(FVector DeltaLocation, bool bSweep, FHitResult& SweepHitResult, bool bTeleport);
    bool IsOverlappingActor(AActor* Other);
    bool IsChildActor();
    bool IsActorTickEnabled();
    bool IsActorBeingDestroyed();
    bool HasAuthority();
    float GetVerticalDistanceTo(AActor* OtherActor);
    FVector GetVelocity();
    FTransform GetTransform();
    bool GetTickableWhenPaused();
    float GetSquaredHorizontalDistanceTo(AActor* OtherActor);
    float GetSquaredDistanceTo(AActor* OtherActor);
    ENetRole GetRemoteRole();
    UChildActorComponent* GetParentComponent();
    AActor* GetParentActor();
    AActor* GetOwner();
    void GetOverlappingComponents(TArray<UPrimitiveComponent*>& OverlappingComponents);
    void GetOverlappingActors(TArray<AActor*>& OverlappingActors, UClass* ClassFilter);
    ENetRole GetLocalRole();
    float GetLifeSpan();
    AController* GetInstigatorController();
    APawn* GetInstigator();
    FVector GetInputVectorAxisValue(FKey InputAxisKey);
    float GetInputAxisValue(FName InputAxisName);
    float GetInputAxisKeyValue(FKey InputAxisKey);
    float GetHorizontalDotProductTo(AActor* OtherActor);
    float GetHorizontalDistanceTo(AActor* OtherActor);
    float GetGameTimeSinceCreation();
    float GetDotProductTo(AActor* OtherActor);
    float GetDistanceTo(AActor* OtherActor);
    TArray<UActorComponent*> GetComponentsByTag(UClass* ComponentClass, FName Tag);
    TArray<UActorComponent*> GetComponentsByInterface(UClass* Interface);
    UActorComponent* GetComponentByClass(UClass* ComponentClass);
    FName GetAttachParentSocketName();
    AActor* GetAttachParentActor();
    void GetAttachedActors(TArray<AActor*>& OutActors, bool bResetArray);
    void GetAllChildActors(TArray<AActor*>& ChildActors, bool bIncludeDescendants);
    FVector GetActorUpVector();
    float GetActorTimeDilation();
    float GetActorTickInterval();
    FVector GetActorScale3D();
    FVector GetActorRightVector();
    FVector GetActorRelativeScale3D();
    FVector GetActorForwardVector();
    void GetActorEyesViewPoint(FVector& OutLocation, FRotator& OutRotation);
    bool GetActorEnableCollision();
    void GetActorBounds(bool bOnlyCollidingComponents, FVector& Origin, FVector& BoxExtent, bool bIncludeFromChildActors);
    void ForceNetUpdate();
    void FlushNetDormancy();
    void FinishAddComponent(UActorComponent* Component, bool bManualAttachment, FTransform& RelativeTransform);
    void EnableInput(APlayerController* PlayerController);
    void DisableInput(APlayerController* PlayerController);
    void DetachRootComponentFromParent(bool bMaintainWorldPosition);
    void AddTickPrerequisiteComponent(UActorComponent* PrerequisiteComponent);
    void AddTickPrerequisiteActor(AActor* PrerequisiteActor);
    UActorComponent* AddComponentByClass(UClass* Class, bool bManualAttachment, FTransform& RelativeTransform, bool bDeferredFinish);
    UActorComponent* AddComponent(FName TemplateName, bool bManualAttachment, FTransform& RelativeTransform, UObject* ComponentTemplateContext, bool bDeferredFinish);
    bool ActorHasTag(FName Tag);
}; // Size: 0x248
#pragma pack(pop)
