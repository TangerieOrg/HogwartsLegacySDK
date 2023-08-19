#pragma once
#include <cstdint>
#include "EAttachLocation\Type.hpp"
#include "EAttachmentRule.hpp"
#include "EComponentMobility\Type.hpp"
#include "EDetachmentRule.hpp"
#include "EDetailMode.hpp"
#include "ERelativeTransformSpace.hpp"
#include "FQuat.hpp"
#include "FRotator.hpp"
#include "FTransform.hpp"
#include "FVector.hpp"
#include "UActorComponent.hpp"
class APhysicsVolume;
struct FHitResult;
#pragma pack(push, 1)
class USceneComponent : public UActorComponent {
public:
    char pad_c8[0x10];
    USceneComponent* AttachParent; // 0xd8
    FName AttachSocketName; // 0xe0
    TArray<USceneComponent*> AttachChildren; // 0xe8
    TArray<USceneComponent*> ClientAttachedChildren; // 0xf8
    char pad_108[0x2c];
    FVector RelativeLocation; // 0x134
    FRotator RelativeRotation; // 0x140
    FVector RelativeScale3D; // 0x14c
    FVector ComponentVelocity; // 0x158
    uint8_t bComponentToWorldUpdated : 1; // 0x164
    uint8_t pad_bitfield_164_1 : 1;
    uint8_t bAbsoluteLocation : 1; // 0x164
    uint8_t bAbsoluteRotation : 1; // 0x164
    uint8_t bAbsoluteScale : 1; // 0x164
    uint8_t bVisible : 1; // 0x164
    uint8_t bHiddenIsManaged : 1; // 0x164
    uint8_t bHiddenCalledFromManager : 1; // 0x164
    uint8_t bShouldBeAttached : 1; // 0x165
    uint8_t bShouldSnapLocationWhenAttached : 1; // 0x165
    uint8_t bShouldSnapRotationWhenAttached : 1; // 0x165
    uint8_t bShouldUpdatePhysicsVolume : 1; // 0x165
    uint8_t bHiddenInGame : 1; // 0x165
    uint8_t bBoundsChangeTriggersStreamingDataRebuild : 1; // 0x165
    uint8_t bUseAttachParentBound : 1; // 0x165
    uint8_t pad_bitfield_165_7 : 1;
    char pad_166[0x1];
    EComponentMobility::Type Mobility; // 0x167
    EDetailMode DetailMode; // 0x168
    char pad_169[0xb7];
    static USceneComponent* StaticClass();
    void ToggleVisibility(bool bPropagateToChildren);
    bool SnapTo(USceneComponent* InParent, FName InSocketName);
    void SetWorldScale3D(FVector NewScale);
    void SetVisibility(bool bNewVisibility, bool bPropagateToChildren);
    void SetShouldUpdatePhysicsVolume(bool bInShouldUpdatePhysicsVolume);
    void SetRelativeScale3D(FVector NewScale3D);
    void SetMobility(EComponentMobility::Type NewMobility);
    void SetHiddenInGame(bool NewHidden, bool bPropagateToChildren);
    void SetCanSkipOverlaps(bool bInSkipOverlaps);
    void SetAbsolute(bool bNewAbsoluteLocation, bool bNewAbsoluteRotation, bool bNewAbsoluteScale);
    void ResetRelativeTransform();
    void OnRep_Visibility(bool OldValue);
    void OnRep_Transform();
    void OnRep_AttachSocketName();
    void OnRep_AttachParent();
    void OnRep_AttachChildren();
    void K2_SetWorldTransform(FTransform& NewTransform, bool bSweep, FHitResult& SweepHitResult, bool bTeleport);
    void K2_SetWorldRotation(FRotator NewRotation, bool bSweep, FHitResult& SweepHitResult, bool bTeleport);
    void K2_SetWorldLocationAndRotation(FVector NewLocation, FRotator NewRotation, bool bSweep, FHitResult& SweepHitResult, bool bTeleport);
    void K2_SetWorldLocation(FVector NewLocation, bool bSweep, FHitResult& SweepHitResult, bool bTeleport);
    void K2_SetRelativeTransform(FTransform& NewTransform, bool bSweep, FHitResult& SweepHitResult, bool bTeleport);
    void K2_SetRelativeRotation(FRotator NewRotation, bool bSweep, FHitResult& SweepHitResult, bool bTeleport);
    void K2_SetRelativeLocationAndRotation(FVector NewLocation, FRotator NewRotation, bool bSweep, FHitResult& SweepHitResult, bool bTeleport);
    void K2_SetRelativeLocation(FVector NewLocation, bool bSweep, FHitResult& SweepHitResult, bool bTeleport);
    FTransform K2_GetComponentToWorld();
    FVector K2_GetComponentScale();
    FRotator K2_GetComponentRotation();
    FVector K2_GetComponentLocation();
    void K2_DetachFromComponent(EDetachmentRule LocationRule, EDetachmentRule RotationRule, EDetachmentRule ScaleRule, bool bCallModify);
    bool K2_AttachToComponent(USceneComponent* Parent, FName SocketName, EAttachmentRule LocationRule, EAttachmentRule RotationRule, EAttachmentRule ScaleRule, bool bWeldSimulatedBodies);
    bool K2_AttachTo(USceneComponent* InParent, FName InSocketName, EAttachLocation::Type AttachType, bool bWeldSimulatedBodies);
    void K2_AddWorldTransformKeepScale(FTransform& DeltaTransform, bool bSweep, FHitResult& SweepHitResult, bool bTeleport);
    void K2_AddWorldTransform(FTransform& DeltaTransform, bool bSweep, FHitResult& SweepHitResult, bool bTeleport);
    void K2_AddWorldRotation(FRotator DeltaRotation, bool bSweep, FHitResult& SweepHitResult, bool bTeleport);
    void K2_AddWorldOffset(FVector DeltaLocation, bool bSweep, FHitResult& SweepHitResult, bool bTeleport);
    void K2_AddRelativeRotation(FRotator DeltaRotation, bool bSweep, FHitResult& SweepHitResult, bool bTeleport);
    void K2_AddRelativeLocation(FVector DeltaLocation, bool bSweep, FHitResult& SweepHitResult, bool bTeleport);
    void K2_AddLocalTransform(FTransform& DeltaTransform, bool bSweep, FHitResult& SweepHitResult, bool bTeleport);
    void K2_AddLocalRotation(FRotator DeltaRotation, bool bSweep, FHitResult& SweepHitResult, bool bTeleport);
    void K2_AddLocalOffset(FVector DeltaLocation, bool bSweep, FHitResult& SweepHitResult, bool bTeleport);
    bool IsVisible();
    bool IsSimulatingPhysics(FName BoneName);
    bool IsAnySimulatingPhysics();
    FVector GetUpVector();
    FTransform GetSocketTransform(FName InSocketName, ERelativeTransformSpace TransformSpace);
    FRotator GetSocketRotation(FName InSocketName);
    FQuat GetSocketQuaternion(FName InSocketName);
    FVector GetSocketLocation(FName InSocketName);
    bool GetShouldUpdatePhysicsVolume();
    FVector GetRightVector();
    FTransform GetRelativeTransform();
    APhysicsVolume* GetPhysicsVolume();
    void GetParentComponents(TArray<USceneComponent*>& Parents);
    int32_t GetNumChildrenComponents();
    FVector GetForwardVector();
    FVector GetComponentVelocity();
    void GetChildrenComponents(bool bIncludeAllDescendants, TArray<USceneComponent*>& Children);
    USceneComponent* GetChildComponent(int32_t ChildIndex);
    FName GetAttachSocketName();
    USceneComponent* GetAttachParent();
    TArray<FName> GetAllSocketNames();
    bool DoesSocketExist(FName InSocketName);
    void DetachFromParent(bool bMaintainWorldPosition, bool bCallModify);
}; // Size: 0x220
#pragma pack(pop)
