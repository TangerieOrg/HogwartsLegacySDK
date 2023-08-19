#include "APhysicsVolume.hpp"
#include "EAttachLocation\Type.hpp"
#include "EAttachmentRule.hpp"
#include "EComponentMobility\Type.hpp"
#include "EDetachmentRule.hpp"
#include "EDetailMode.hpp"
#include "ERelativeTransformSpace.hpp"
#include "FHitResult.hpp"
#include "FQuat.hpp"
#include "FRotator.hpp"
#include "FTransform.hpp"
#include "FVector.hpp"
#include "UActorComponent.hpp"
#include "UFunction.hpp"
#include "USceneComponent.hpp"
void USceneComponent::SetRelativeScale3D(FVector NewScale3D) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Engine.SceneComponent.SetRelativeScale3D"));
    struct Params_SetRelativeScale3D {
        FVector NewScale3D; // 0x0
    }; // Size: 0xc
    Params_SetRelativeScale3D params{};
    params.NewScale3D = (FVector)NewScale3D;
    ProcessEvent(func, &params);
}
void USceneComponent::K2_AddWorldOffset(FVector DeltaLocation, bool bSweep, FHitResult& SweepHitResult, bool bTeleport) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Engine.SceneComponent.K2_AddWorldOffset"));
    struct Params_K2_AddWorldOffset {
        FVector DeltaLocation; // 0x0
        bool bSweep; // 0xc
        char pad_d[0x3];
        FHitResult SweepHitResult; // 0x10
        bool bTeleport; // 0x98
    }; // Size: 0x99
    Params_K2_AddWorldOffset params{};
    params.DeltaLocation = (FVector)DeltaLocation;
    params.bSweep = (bool)bSweep;
    params.SweepHitResult = (FHitResult)SweepHitResult;
    params.bTeleport = (bool)bTeleport;
    ProcessEvent(func, &params);
    SweepHitResult = params.SweepHitResult;
}
void USceneComponent::K2_SetRelativeRotation(FRotator NewRotation, bool bSweep, FHitResult& SweepHitResult, bool bTeleport) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Engine.SceneComponent.K2_SetRelativeRotation"));
    struct Params_K2_SetRelativeRotation {
        FRotator NewRotation; // 0x0
        bool bSweep; // 0xc
        char pad_d[0x3];
        FHitResult SweepHitResult; // 0x10
        bool bTeleport; // 0x98
    }; // Size: 0x99
    Params_K2_SetRelativeRotation params{};
    params.NewRotation = (FRotator)NewRotation;
    params.bSweep = (bool)bSweep;
    params.SweepHitResult = (FHitResult)SweepHitResult;
    params.bTeleport = (bool)bTeleport;
    ProcessEvent(func, &params);
    SweepHitResult = params.SweepHitResult;
}
void USceneComponent::SetVisibility(bool bNewVisibility, bool bPropagateToChildren) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Engine.SceneComponent.SetVisibility"));
    struct Params_SetVisibility {
        bool bNewVisibility; // 0x0
        bool bPropagateToChildren; // 0x1
    }; // Size: 0x2
    Params_SetVisibility params{};
    params.bNewVisibility = (bool)bNewVisibility;
    params.bPropagateToChildren = (bool)bPropagateToChildren;
    ProcessEvent(func, &params);
}
USceneComponent* USceneComponent::StaticClass() {
    static auto res = find_uobject("Class /Script/Engine.SceneComponent");
    return (USceneComponent*)res;
}
FVector USceneComponent::GetForwardVector() {
    static auto func = (UFunction*)(find_uobject("Function /Script/Engine.SceneComponent.GetForwardVector"));
    struct Params_GetForwardVector {
        FVector ReturnValue; // 0x0
    }; // Size: 0xc
    Params_GetForwardVector params{};
    ProcessEvent(func, &params);
    return (FVector)params.ReturnValue;
}
FRotator USceneComponent::K2_GetComponentRotation() {
    static auto func = (UFunction*)(find_uobject("Function /Script/Engine.SceneComponent.K2_GetComponentRotation"));
    struct Params_K2_GetComponentRotation {
        FRotator ReturnValue; // 0x0
    }; // Size: 0xc
    Params_K2_GetComponentRotation params{};
    ProcessEvent(func, &params);
    return (FRotator)params.ReturnValue;
}
void USceneComponent::ToggleVisibility(bool bPropagateToChildren) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Engine.SceneComponent.ToggleVisibility"));
    struct Params_ToggleVisibility {
        bool bPropagateToChildren; // 0x0
    }; // Size: 0x1
    Params_ToggleVisibility params{};
    params.bPropagateToChildren = (bool)bPropagateToChildren;
    ProcessEvent(func, &params);
}
bool USceneComponent::SnapTo(USceneComponent* InParent, FName InSocketName) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Engine.SceneComponent.SnapTo"));
    struct Params_SnapTo {
        USceneComponent* InParent; // 0x0
        FName InSocketName; // 0x8
        bool ReturnValue; // 0x10
    }; // Size: 0x11
    Params_SnapTo params{};
    params.InParent = (USceneComponent*)InParent;
    params.InSocketName = (FName)InSocketName;
    ProcessEvent(func, &params);
    return (bool)params.ReturnValue;
}
void USceneComponent::SetWorldScale3D(FVector NewScale) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Engine.SceneComponent.SetWorldScale3D"));
    struct Params_SetWorldScale3D {
        FVector NewScale; // 0x0
    }; // Size: 0xc
    Params_SetWorldScale3D params{};
    params.NewScale = (FVector)NewScale;
    ProcessEvent(func, &params);
}
void USceneComponent::DetachFromParent(bool bMaintainWorldPosition, bool bCallModify) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Engine.SceneComponent.DetachFromParent"));
    struct Params_DetachFromParent {
        bool bMaintainWorldPosition; // 0x0
        bool bCallModify; // 0x1
    }; // Size: 0x2
    Params_DetachFromParent params{};
    params.bMaintainWorldPosition = (bool)bMaintainWorldPosition;
    params.bCallModify = (bool)bCallModify;
    ProcessEvent(func, &params);
}
void USceneComponent::K2_AddWorldRotation(FRotator DeltaRotation, bool bSweep, FHitResult& SweepHitResult, bool bTeleport) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Engine.SceneComponent.K2_AddWorldRotation"));
    struct Params_K2_AddWorldRotation {
        FRotator DeltaRotation; // 0x0
        bool bSweep; // 0xc
        char pad_d[0x3];
        FHitResult SweepHitResult; // 0x10
        bool bTeleport; // 0x98
    }; // Size: 0x99
    Params_K2_AddWorldRotation params{};
    params.DeltaRotation = (FRotator)DeltaRotation;
    params.bSweep = (bool)bSweep;
    params.SweepHitResult = (FHitResult)SweepHitResult;
    params.bTeleport = (bool)bTeleport;
    ProcessEvent(func, &params);
    SweepHitResult = params.SweepHitResult;
}
void USceneComponent::K2_SetWorldRotation(FRotator NewRotation, bool bSweep, FHitResult& SweepHitResult, bool bTeleport) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Engine.SceneComponent.K2_SetWorldRotation"));
    struct Params_K2_SetWorldRotation {
        FRotator NewRotation; // 0x0
        bool bSweep; // 0xc
        char pad_d[0x3];
        FHitResult SweepHitResult; // 0x10
        bool bTeleport; // 0x98
    }; // Size: 0x99
    Params_K2_SetWorldRotation params{};
    params.NewRotation = (FRotator)NewRotation;
    params.bSweep = (bool)bSweep;
    params.SweepHitResult = (FHitResult)SweepHitResult;
    params.bTeleport = (bool)bTeleport;
    ProcessEvent(func, &params);
    SweepHitResult = params.SweepHitResult;
}
void USceneComponent::SetShouldUpdatePhysicsVolume(bool bInShouldUpdatePhysicsVolume) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Engine.SceneComponent.SetShouldUpdatePhysicsVolume"));
    struct Params_SetShouldUpdatePhysicsVolume {
        bool bInShouldUpdatePhysicsVolume; // 0x0
    }; // Size: 0x1
    Params_SetShouldUpdatePhysicsVolume params{};
    params.bInShouldUpdatePhysicsVolume = (bool)bInShouldUpdatePhysicsVolume;
    ProcessEvent(func, &params);
}
USceneComponent* USceneComponent::GetAttachParent() {
    static auto func = (UFunction*)(find_uobject("Function /Script/Engine.SceneComponent.GetAttachParent"));
    struct Params_GetAttachParent {
        USceneComponent* ReturnValue; // 0x0
    }; // Size: 0x8
    Params_GetAttachParent params{};
    ProcessEvent(func, &params);
    return (USceneComponent*)params.ReturnValue;
}
FTransform USceneComponent::K2_GetComponentToWorld() {
    static auto func = (UFunction*)(find_uobject("Function /Script/Engine.SceneComponent.K2_GetComponentToWorld"));
    struct Params_K2_GetComponentToWorld {
        FTransform ReturnValue; // 0x0
    }; // Size: 0x30
    Params_K2_GetComponentToWorld params{};
    ProcessEvent(func, &params);
    return (FTransform)params.ReturnValue;
}
void USceneComponent::SetMobility(EComponentMobility::Type NewMobility) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Engine.SceneComponent.SetMobility"));
    struct Params_SetMobility {
        EComponentMobility::Type NewMobility; // 0x0
    }; // Size: 0x1
    Params_SetMobility params{};
    params.NewMobility = (EComponentMobility::Type)NewMobility;
    ProcessEvent(func, &params);
}
void USceneComponent::K2_AddLocalOffset(FVector DeltaLocation, bool bSweep, FHitResult& SweepHitResult, bool bTeleport) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Engine.SceneComponent.K2_AddLocalOffset"));
    struct Params_K2_AddLocalOffset {
        FVector DeltaLocation; // 0x0
        bool bSweep; // 0xc
        char pad_d[0x3];
        FHitResult SweepHitResult; // 0x10
        bool bTeleport; // 0x98
    }; // Size: 0x99
    Params_K2_AddLocalOffset params{};
    params.DeltaLocation = (FVector)DeltaLocation;
    params.bSweep = (bool)bSweep;
    params.SweepHitResult = (FHitResult)SweepHitResult;
    params.bTeleport = (bool)bTeleport;
    ProcessEvent(func, &params);
    SweepHitResult = params.SweepHitResult;
}
void USceneComponent::SetHiddenInGame(bool NewHidden, bool bPropagateToChildren) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Engine.SceneComponent.SetHiddenInGame"));
    struct Params_SetHiddenInGame {
        bool NewHidden; // 0x0
        bool bPropagateToChildren; // 0x1
    }; // Size: 0x2
    Params_SetHiddenInGame params{};
    params.NewHidden = (bool)NewHidden;
    params.bPropagateToChildren = (bool)bPropagateToChildren;
    ProcessEvent(func, &params);
}
void USceneComponent::K2_DetachFromComponent(EDetachmentRule LocationRule, EDetachmentRule RotationRule, EDetachmentRule ScaleRule, bool bCallModify) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Engine.SceneComponent.K2_DetachFromComponent"));
    struct Params_K2_DetachFromComponent {
        EDetachmentRule LocationRule; // 0x0
        EDetachmentRule RotationRule; // 0x1
        EDetachmentRule ScaleRule; // 0x2
        bool bCallModify; // 0x3
    }; // Size: 0x4
    Params_K2_DetachFromComponent params{};
    params.LocationRule = (EDetachmentRule)LocationRule;
    params.RotationRule = (EDetachmentRule)RotationRule;
    params.ScaleRule = (EDetachmentRule)ScaleRule;
    params.bCallModify = (bool)bCallModify;
    ProcessEvent(func, &params);
}
void USceneComponent::SetCanSkipOverlaps(bool bInSkipOverlaps) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Engine.SceneComponent.SetCanSkipOverlaps"));
    struct Params_SetCanSkipOverlaps {
        bool bInSkipOverlaps; // 0x0
    }; // Size: 0x1
    Params_SetCanSkipOverlaps params{};
    params.bInSkipOverlaps = (bool)bInSkipOverlaps;
    ProcessEvent(func, &params);
}
void USceneComponent::K2_AddRelativeRotation(FRotator DeltaRotation, bool bSweep, FHitResult& SweepHitResult, bool bTeleport) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Engine.SceneComponent.K2_AddRelativeRotation"));
    struct Params_K2_AddRelativeRotation {
        FRotator DeltaRotation; // 0x0
        bool bSweep; // 0xc
        char pad_d[0x3];
        FHitResult SweepHitResult; // 0x10
        bool bTeleport; // 0x98
    }; // Size: 0x99
    Params_K2_AddRelativeRotation params{};
    params.DeltaRotation = (FRotator)DeltaRotation;
    params.bSweep = (bool)bSweep;
    params.SweepHitResult = (FHitResult)SweepHitResult;
    params.bTeleport = (bool)bTeleport;
    ProcessEvent(func, &params);
    SweepHitResult = params.SweepHitResult;
}
void USceneComponent::SetAbsolute(bool bNewAbsoluteLocation, bool bNewAbsoluteRotation, bool bNewAbsoluteScale) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Engine.SceneComponent.SetAbsolute"));
    struct Params_SetAbsolute {
        bool bNewAbsoluteLocation; // 0x0
        bool bNewAbsoluteRotation; // 0x1
        bool bNewAbsoluteScale; // 0x2
    }; // Size: 0x3
    Params_SetAbsolute params{};
    params.bNewAbsoluteLocation = (bool)bNewAbsoluteLocation;
    params.bNewAbsoluteRotation = (bool)bNewAbsoluteRotation;
    params.bNewAbsoluteScale = (bool)bNewAbsoluteScale;
    ProcessEvent(func, &params);
}
void USceneComponent::K2_SetRelativeLocationAndRotation(FVector NewLocation, FRotator NewRotation, bool bSweep, FHitResult& SweepHitResult, bool bTeleport) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Engine.SceneComponent.K2_SetRelativeLocationAndRotation"));
    struct Params_K2_SetRelativeLocationAndRotation {
        FVector NewLocation; // 0x0
        FRotator NewRotation; // 0xc
        bool bSweep; // 0x18
        char pad_19[0x3];
        FHitResult SweepHitResult; // 0x1c
        bool bTeleport; // 0xa4
    }; // Size: 0xa5
    Params_K2_SetRelativeLocationAndRotation params{};
    params.NewLocation = (FVector)NewLocation;
    params.NewRotation = (FRotator)NewRotation;
    params.bSweep = (bool)bSweep;
    params.SweepHitResult = (FHitResult)SweepHitResult;
    params.bTeleport = (bool)bTeleport;
    ProcessEvent(func, &params);
    SweepHitResult = params.SweepHitResult;
}
void USceneComponent::ResetRelativeTransform() {
    static auto func = (UFunction*)(find_uobject("Function /Script/Engine.SceneComponent.ResetRelativeTransform"));
    struct Params_ResetRelativeTransform {
    }; // Size: 0x0
    Params_ResetRelativeTransform params{};
    ProcessEvent(func, &params);
}
void USceneComponent::OnRep_Visibility(bool OldValue) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Engine.SceneComponent.OnRep_Visibility"));
    struct Params_OnRep_Visibility {
        bool OldValue; // 0x0
    }; // Size: 0x1
    Params_OnRep_Visibility params{};
    params.OldValue = (bool)OldValue;
    ProcessEvent(func, &params);
}
void USceneComponent::K2_AddWorldTransformKeepScale(FTransform& DeltaTransform, bool bSweep, FHitResult& SweepHitResult, bool bTeleport) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Engine.SceneComponent.K2_AddWorldTransformKeepScale"));
    struct Params_K2_AddWorldTransformKeepScale {
        FTransform DeltaTransform; // 0x0
        bool bSweep; // 0x30
        char pad_31[0x3];
        FHitResult SweepHitResult; // 0x34
        bool bTeleport; // 0xbc
    }; // Size: 0xbd
    Params_K2_AddWorldTransformKeepScale params{};
    params.DeltaTransform = (FTransform)DeltaTransform;
    params.bSweep = (bool)bSweep;
    params.SweepHitResult = (FHitResult)SweepHitResult;
    params.bTeleport = (bool)bTeleport;
    ProcessEvent(func, &params);
    DeltaTransform = params.DeltaTransform;
    SweepHitResult = params.SweepHitResult;
}
void USceneComponent::K2_SetWorldTransform(FTransform& NewTransform, bool bSweep, FHitResult& SweepHitResult, bool bTeleport) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Engine.SceneComponent.K2_SetWorldTransform"));
    struct Params_K2_SetWorldTransform {
        FTransform NewTransform; // 0x0
        bool bSweep; // 0x30
        char pad_31[0x3];
        FHitResult SweepHitResult; // 0x34
        bool bTeleport; // 0xbc
    }; // Size: 0xbd
    Params_K2_SetWorldTransform params{};
    params.NewTransform = (FTransform)NewTransform;
    params.bSweep = (bool)bSweep;
    params.SweepHitResult = (FHitResult)SweepHitResult;
    params.bTeleport = (bool)bTeleport;
    ProcessEvent(func, &params);
    NewTransform = params.NewTransform;
    SweepHitResult = params.SweepHitResult;
}
void USceneComponent::OnRep_Transform() {
    static auto func = (UFunction*)(find_uobject("Function /Script/Engine.SceneComponent.OnRep_Transform"));
    struct Params_OnRep_Transform {
    }; // Size: 0x0
    Params_OnRep_Transform params{};
    ProcessEvent(func, &params);
}
APhysicsVolume* USceneComponent::GetPhysicsVolume() {
    static auto func = (UFunction*)(find_uobject("Function /Script/Engine.SceneComponent.GetPhysicsVolume"));
    struct Params_GetPhysicsVolume {
        APhysicsVolume* ReturnValue; // 0x0
    }; // Size: 0x8
    Params_GetPhysicsVolume params{};
    ProcessEvent(func, &params);
    return (APhysicsVolume*)params.ReturnValue;
}
bool USceneComponent::K2_AttachTo(USceneComponent* InParent, FName InSocketName, EAttachLocation::Type AttachType, bool bWeldSimulatedBodies) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Engine.SceneComponent.K2_AttachTo"));
    struct Params_K2_AttachTo {
        USceneComponent* InParent; // 0x0
        FName InSocketName; // 0x8
        EAttachLocation::Type AttachType; // 0x10
        bool bWeldSimulatedBodies; // 0x11
        bool ReturnValue; // 0x12
    }; // Size: 0x13
    Params_K2_AttachTo params{};
    params.InParent = (USceneComponent*)InParent;
    params.InSocketName = (FName)InSocketName;
    params.AttachType = (EAttachLocation::Type)AttachType;
    params.bWeldSimulatedBodies = (bool)bWeldSimulatedBodies;
    ProcessEvent(func, &params);
    return (bool)params.ReturnValue;
}
void USceneComponent::OnRep_AttachSocketName() {
    static auto func = (UFunction*)(find_uobject("Function /Script/Engine.SceneComponent.OnRep_AttachSocketName"));
    struct Params_OnRep_AttachSocketName {
    }; // Size: 0x0
    Params_OnRep_AttachSocketName params{};
    ProcessEvent(func, &params);
}
void USceneComponent::K2_SetWorldLocationAndRotation(FVector NewLocation, FRotator NewRotation, bool bSweep, FHitResult& SweepHitResult, bool bTeleport) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Engine.SceneComponent.K2_SetWorldLocationAndRotation"));
    struct Params_K2_SetWorldLocationAndRotation {
        FVector NewLocation; // 0x0
        FRotator NewRotation; // 0xc
        bool bSweep; // 0x18
        char pad_19[0x3];
        FHitResult SweepHitResult; // 0x1c
        bool bTeleport; // 0xa4
    }; // Size: 0xa5
    Params_K2_SetWorldLocationAndRotation params{};
    params.NewLocation = (FVector)NewLocation;
    params.NewRotation = (FRotator)NewRotation;
    params.bSweep = (bool)bSweep;
    params.SweepHitResult = (FHitResult)SweepHitResult;
    params.bTeleport = (bool)bTeleport;
    ProcessEvent(func, &params);
    SweepHitResult = params.SweepHitResult;
}
void USceneComponent::OnRep_AttachParent() {
    static auto func = (UFunction*)(find_uobject("Function /Script/Engine.SceneComponent.OnRep_AttachParent"));
    struct Params_OnRep_AttachParent {
    }; // Size: 0x0
    Params_OnRep_AttachParent params{};
    ProcessEvent(func, &params);
}
void USceneComponent::OnRep_AttachChildren() {
    static auto func = (UFunction*)(find_uobject("Function /Script/Engine.SceneComponent.OnRep_AttachChildren"));
    struct Params_OnRep_AttachChildren {
    }; // Size: 0x0
    Params_OnRep_AttachChildren params{};
    ProcessEvent(func, &params);
}
void USceneComponent::K2_SetWorldLocation(FVector NewLocation, bool bSweep, FHitResult& SweepHitResult, bool bTeleport) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Engine.SceneComponent.K2_SetWorldLocation"));
    struct Params_K2_SetWorldLocation {
        FVector NewLocation; // 0x0
        bool bSweep; // 0xc
        char pad_d[0x3];
        FHitResult SweepHitResult; // 0x10
        bool bTeleport; // 0x98
    }; // Size: 0x99
    Params_K2_SetWorldLocation params{};
    params.NewLocation = (FVector)NewLocation;
    params.bSweep = (bool)bSweep;
    params.SweepHitResult = (FHitResult)SweepHitResult;
    params.bTeleport = (bool)bTeleport;
    ProcessEvent(func, &params);
    SweepHitResult = params.SweepHitResult;
}
bool USceneComponent::K2_AttachToComponent(USceneComponent* Parent, FName SocketName, EAttachmentRule LocationRule, EAttachmentRule RotationRule, EAttachmentRule ScaleRule, bool bWeldSimulatedBodies) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Engine.SceneComponent.K2_AttachToComponent"));
    struct Params_K2_AttachToComponent {
        USceneComponent* Parent; // 0x0
        FName SocketName; // 0x8
        EAttachmentRule LocationRule; // 0x10
        EAttachmentRule RotationRule; // 0x11
        EAttachmentRule ScaleRule; // 0x12
        bool bWeldSimulatedBodies; // 0x13
        bool ReturnValue; // 0x14
    }; // Size: 0x15
    Params_K2_AttachToComponent params{};
    params.Parent = (USceneComponent*)Parent;
    params.SocketName = (FName)SocketName;
    params.LocationRule = (EAttachmentRule)LocationRule;
    params.RotationRule = (EAttachmentRule)RotationRule;
    params.ScaleRule = (EAttachmentRule)ScaleRule;
    params.bWeldSimulatedBodies = (bool)bWeldSimulatedBodies;
    ProcessEvent(func, &params);
    return (bool)params.ReturnValue;
}
void USceneComponent::K2_SetRelativeTransform(FTransform& NewTransform, bool bSweep, FHitResult& SweepHitResult, bool bTeleport) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Engine.SceneComponent.K2_SetRelativeTransform"));
    struct Params_K2_SetRelativeTransform {
        FTransform NewTransform; // 0x0
        bool bSweep; // 0x30
        char pad_31[0x3];
        FHitResult SweepHitResult; // 0x34
        bool bTeleport; // 0xbc
    }; // Size: 0xbd
    Params_K2_SetRelativeTransform params{};
    params.NewTransform = (FTransform)NewTransform;
    params.bSweep = (bool)bSweep;
    params.SweepHitResult = (FHitResult)SweepHitResult;
    params.bTeleport = (bool)bTeleport;
    ProcessEvent(func, &params);
    NewTransform = params.NewTransform;
    SweepHitResult = params.SweepHitResult;
}
void USceneComponent::K2_SetRelativeLocation(FVector NewLocation, bool bSweep, FHitResult& SweepHitResult, bool bTeleport) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Engine.SceneComponent.K2_SetRelativeLocation"));
    struct Params_K2_SetRelativeLocation {
        FVector NewLocation; // 0x0
        bool bSweep; // 0xc
        char pad_d[0x3];
        FHitResult SweepHitResult; // 0x10
        bool bTeleport; // 0x98
    }; // Size: 0x99
    Params_K2_SetRelativeLocation params{};
    params.NewLocation = (FVector)NewLocation;
    params.bSweep = (bool)bSweep;
    params.SweepHitResult = (FHitResult)SweepHitResult;
    params.bTeleport = (bool)bTeleport;
    ProcessEvent(func, &params);
    SweepHitResult = params.SweepHitResult;
}
void USceneComponent::K2_AddLocalTransform(FTransform& DeltaTransform, bool bSweep, FHitResult& SweepHitResult, bool bTeleport) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Engine.SceneComponent.K2_AddLocalTransform"));
    struct Params_K2_AddLocalTransform {
        FTransform DeltaTransform; // 0x0
        bool bSweep; // 0x30
        char pad_31[0x3];
        FHitResult SweepHitResult; // 0x34
        bool bTeleport; // 0xbc
    }; // Size: 0xbd
    Params_K2_AddLocalTransform params{};
    params.DeltaTransform = (FTransform)DeltaTransform;
    params.bSweep = (bool)bSweep;
    params.SweepHitResult = (FHitResult)SweepHitResult;
    params.bTeleport = (bool)bTeleport;
    ProcessEvent(func, &params);
    DeltaTransform = params.DeltaTransform;
    SweepHitResult = params.SweepHitResult;
}
FVector USceneComponent::K2_GetComponentScale() {
    static auto func = (UFunction*)(find_uobject("Function /Script/Engine.SceneComponent.K2_GetComponentScale"));
    struct Params_K2_GetComponentScale {
        FVector ReturnValue; // 0x0
    }; // Size: 0xc
    Params_K2_GetComponentScale params{};
    ProcessEvent(func, &params);
    return (FVector)params.ReturnValue;
}
void USceneComponent::GetParentComponents(TArray<USceneComponent*>& Parents) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Engine.SceneComponent.GetParentComponents"));
    struct Params_GetParentComponents {
        TArray<USceneComponent*> Parents; // 0x0
    }; // Size: 0x10
    Params_GetParentComponents params{};
    params.Parents = (TArray<USceneComponent*>)Parents;
    ProcessEvent(func, &params);
    Parents = params.Parents;
}
FVector USceneComponent::K2_GetComponentLocation() {
    static auto func = (UFunction*)(find_uobject("Function /Script/Engine.SceneComponent.K2_GetComponentLocation"));
    struct Params_K2_GetComponentLocation {
        FVector ReturnValue; // 0x0
    }; // Size: 0xc
    Params_K2_GetComponentLocation params{};
    ProcessEvent(func, &params);
    return (FVector)params.ReturnValue;
}
void USceneComponent::K2_AddWorldTransform(FTransform& DeltaTransform, bool bSweep, FHitResult& SweepHitResult, bool bTeleport) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Engine.SceneComponent.K2_AddWorldTransform"));
    struct Params_K2_AddWorldTransform {
        FTransform DeltaTransform; // 0x0
        bool bSweep; // 0x30
        char pad_31[0x3];
        FHitResult SweepHitResult; // 0x34
        bool bTeleport; // 0xbc
    }; // Size: 0xbd
    Params_K2_AddWorldTransform params{};
    params.DeltaTransform = (FTransform)DeltaTransform;
    params.bSweep = (bool)bSweep;
    params.SweepHitResult = (FHitResult)SweepHitResult;
    params.bTeleport = (bool)bTeleport;
    ProcessEvent(func, &params);
    DeltaTransform = params.DeltaTransform;
    SweepHitResult = params.SweepHitResult;
}
void USceneComponent::K2_AddRelativeLocation(FVector DeltaLocation, bool bSweep, FHitResult& SweepHitResult, bool bTeleport) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Engine.SceneComponent.K2_AddRelativeLocation"));
    struct Params_K2_AddRelativeLocation {
        FVector DeltaLocation; // 0x0
        bool bSweep; // 0xc
        char pad_d[0x3];
        FHitResult SweepHitResult; // 0x10
        bool bTeleport; // 0x98
    }; // Size: 0x99
    Params_K2_AddRelativeLocation params{};
    params.DeltaLocation = (FVector)DeltaLocation;
    params.bSweep = (bool)bSweep;
    params.SweepHitResult = (FHitResult)SweepHitResult;
    params.bTeleport = (bool)bTeleport;
    ProcessEvent(func, &params);
    SweepHitResult = params.SweepHitResult;
}
bool USceneComponent::DoesSocketExist(FName InSocketName) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Engine.SceneComponent.DoesSocketExist"));
    struct Params_DoesSocketExist {
        FName InSocketName; // 0x0
        bool ReturnValue; // 0x8
    }; // Size: 0x9
    Params_DoesSocketExist params{};
    params.InSocketName = (FName)InSocketName;
    ProcessEvent(func, &params);
    return (bool)params.ReturnValue;
}
void USceneComponent::K2_AddLocalRotation(FRotator DeltaRotation, bool bSweep, FHitResult& SweepHitResult, bool bTeleport) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Engine.SceneComponent.K2_AddLocalRotation"));
    struct Params_K2_AddLocalRotation {
        FRotator DeltaRotation; // 0x0
        bool bSweep; // 0xc
        char pad_d[0x3];
        FHitResult SweepHitResult; // 0x10
        bool bTeleport; // 0x98
    }; // Size: 0x99
    Params_K2_AddLocalRotation params{};
    params.DeltaRotation = (FRotator)DeltaRotation;
    params.bSweep = (bool)bSweep;
    params.SweepHitResult = (FHitResult)SweepHitResult;
    params.bTeleport = (bool)bTeleport;
    ProcessEvent(func, &params);
    SweepHitResult = params.SweepHitResult;
}
bool USceneComponent::IsVisible() {
    static auto func = (UFunction*)(find_uobject("Function /Script/Engine.SceneComponent.IsVisible"));
    struct Params_IsVisible {
        bool ReturnValue; // 0x0
    }; // Size: 0x1
    Params_IsVisible params{};
    ProcessEvent(func, &params);
    return (bool)params.ReturnValue;
}
bool USceneComponent::IsSimulatingPhysics(FName BoneName) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Engine.SceneComponent.IsSimulatingPhysics"));
    struct Params_IsSimulatingPhysics {
        FName BoneName; // 0x0
        bool ReturnValue; // 0x8
    }; // Size: 0x9
    Params_IsSimulatingPhysics params{};
    params.BoneName = (FName)BoneName;
    ProcessEvent(func, &params);
    return (bool)params.ReturnValue;
}
FName USceneComponent::GetAttachSocketName() {
    static auto func = (UFunction*)(find_uobject("Function /Script/Engine.SceneComponent.GetAttachSocketName"));
    struct Params_GetAttachSocketName {
        FName ReturnValue; // 0x0
    }; // Size: 0x8
    Params_GetAttachSocketName params{};
    ProcessEvent(func, &params);
    return (FName)params.ReturnValue;
}
bool USceneComponent::IsAnySimulatingPhysics() {
    static auto func = (UFunction*)(find_uobject("Function /Script/Engine.SceneComponent.IsAnySimulatingPhysics"));
    struct Params_IsAnySimulatingPhysics {
        bool ReturnValue; // 0x0
    }; // Size: 0x1
    Params_IsAnySimulatingPhysics params{};
    ProcessEvent(func, &params);
    return (bool)params.ReturnValue;
}
TArray<FName> USceneComponent::GetAllSocketNames() {
    static auto func = (UFunction*)(find_uobject("Function /Script/Engine.SceneComponent.GetAllSocketNames"));
    struct Params_GetAllSocketNames {
        TArray<FName> ReturnValue; // 0x0
    }; // Size: 0x10
    Params_GetAllSocketNames params{};
    ProcessEvent(func, &params);
    return (TArray<FName>)params.ReturnValue;
}
FVector USceneComponent::GetUpVector() {
    static auto func = (UFunction*)(find_uobject("Function /Script/Engine.SceneComponent.GetUpVector"));
    struct Params_GetUpVector {
        FVector ReturnValue; // 0x0
    }; // Size: 0xc
    Params_GetUpVector params{};
    ProcessEvent(func, &params);
    return (FVector)params.ReturnValue;
}
USceneComponent* USceneComponent::GetChildComponent(int32_t ChildIndex) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Engine.SceneComponent.GetChildComponent"));
    struct Params_GetChildComponent {
        int32_t ChildIndex; // 0x0
        char pad_4[0x4];
        USceneComponent* ReturnValue; // 0x8
    }; // Size: 0x10
    Params_GetChildComponent params{};
    params.ChildIndex = (int32_t)ChildIndex;
    ProcessEvent(func, &params);
    return (USceneComponent*)params.ReturnValue;
}
FTransform USceneComponent::GetSocketTransform(FName InSocketName, ERelativeTransformSpace TransformSpace) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Engine.SceneComponent.GetSocketTransform"));
    struct Params_GetSocketTransform {
        FName InSocketName; // 0x0
        ERelativeTransformSpace TransformSpace; // 0x8
        char pad_9[0x7];
        FTransform ReturnValue; // 0x10
    }; // Size: 0x40
    Params_GetSocketTransform params{};
    params.InSocketName = (FName)InSocketName;
    params.TransformSpace = (ERelativeTransformSpace)TransformSpace;
    ProcessEvent(func, &params);
    return (FTransform)params.ReturnValue;
}
FRotator USceneComponent::GetSocketRotation(FName InSocketName) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Engine.SceneComponent.GetSocketRotation"));
    struct Params_GetSocketRotation {
        FName InSocketName; // 0x0
        FRotator ReturnValue; // 0x8
    }; // Size: 0x14
    Params_GetSocketRotation params{};
    params.InSocketName = (FName)InSocketName;
    ProcessEvent(func, &params);
    return (FRotator)params.ReturnValue;
}
FQuat USceneComponent::GetSocketQuaternion(FName InSocketName) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Engine.SceneComponent.GetSocketQuaternion"));
    struct Params_GetSocketQuaternion {
        FName InSocketName; // 0x0
        char pad_8[0x8];
        FQuat ReturnValue; // 0x10
    }; // Size: 0x20
    Params_GetSocketQuaternion params{};
    params.InSocketName = (FName)InSocketName;
    ProcessEvent(func, &params);
    return (FQuat)params.ReturnValue;
}
FVector USceneComponent::GetSocketLocation(FName InSocketName) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Engine.SceneComponent.GetSocketLocation"));
    struct Params_GetSocketLocation {
        FName InSocketName; // 0x0
        FVector ReturnValue; // 0x8
    }; // Size: 0x14
    Params_GetSocketLocation params{};
    params.InSocketName = (FName)InSocketName;
    ProcessEvent(func, &params);
    return (FVector)params.ReturnValue;
}
bool USceneComponent::GetShouldUpdatePhysicsVolume() {
    static auto func = (UFunction*)(find_uobject("Function /Script/Engine.SceneComponent.GetShouldUpdatePhysicsVolume"));
    struct Params_GetShouldUpdatePhysicsVolume {
        bool ReturnValue; // 0x0
    }; // Size: 0x1
    Params_GetShouldUpdatePhysicsVolume params{};
    ProcessEvent(func, &params);
    return (bool)params.ReturnValue;
}
FVector USceneComponent::GetRightVector() {
    static auto func = (UFunction*)(find_uobject("Function /Script/Engine.SceneComponent.GetRightVector"));
    struct Params_GetRightVector {
        FVector ReturnValue; // 0x0
    }; // Size: 0xc
    Params_GetRightVector params{};
    ProcessEvent(func, &params);
    return (FVector)params.ReturnValue;
}
FTransform USceneComponent::GetRelativeTransform() {
    static auto func = (UFunction*)(find_uobject("Function /Script/Engine.SceneComponent.GetRelativeTransform"));
    struct Params_GetRelativeTransform {
        FTransform ReturnValue; // 0x0
    }; // Size: 0x30
    Params_GetRelativeTransform params{};
    ProcessEvent(func, &params);
    return (FTransform)params.ReturnValue;
}
int32_t USceneComponent::GetNumChildrenComponents() {
    static auto func = (UFunction*)(find_uobject("Function /Script/Engine.SceneComponent.GetNumChildrenComponents"));
    struct Params_GetNumChildrenComponents {
        int32_t ReturnValue; // 0x0
    }; // Size: 0x4
    Params_GetNumChildrenComponents params{};
    ProcessEvent(func, &params);
    return (int32_t)params.ReturnValue;
}
FVector USceneComponent::GetComponentVelocity() {
    static auto func = (UFunction*)(find_uobject("Function /Script/Engine.SceneComponent.GetComponentVelocity"));
    struct Params_GetComponentVelocity {
        FVector ReturnValue; // 0x0
    }; // Size: 0xc
    Params_GetComponentVelocity params{};
    ProcessEvent(func, &params);
    return (FVector)params.ReturnValue;
}
void USceneComponent::GetChildrenComponents(bool bIncludeAllDescendants, TArray<USceneComponent*>& Children) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Engine.SceneComponent.GetChildrenComponents"));
    struct Params_GetChildrenComponents {
        bool bIncludeAllDescendants; // 0x0
        char pad_1[0x7];
        TArray<USceneComponent*> Children; // 0x8
    }; // Size: 0x18
    Params_GetChildrenComponents params{};
    params.bIncludeAllDescendants = (bool)bIncludeAllDescendants;
    params.Children = (TArray<USceneComponent*>)Children;
    ProcessEvent(func, &params);
    Children = params.Children;
}
