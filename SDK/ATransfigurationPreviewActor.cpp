#include "AActor.hpp"
#include "ATransfigurationMovementStyleBase.hpp"
#include "ATransfigurationPreviewActor.hpp"
#include "ATransformationStyleBase.hpp"
#include "AVanishmentStyleBase.hpp"
#include "ETransfigurationSnapping.hpp"
#include "FBox.hpp"
#include "FTransfigurationResource.hpp"
#include "FTransform.hpp"
#include "FVector.hpp"
#include "UFunction.hpp"
#include "UMeshComponent.hpp"
#include "USceneComponent.hpp"
bool ATransfigurationPreviewActor::GetIsPreviewMeshLoaded() {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.TransfigurationPreviewActor.GetIsPreviewMeshLoaded"));
    struct Params_GetIsPreviewMeshLoaded {
        bool ReturnValue; // 0x0
    }; // Size: 0x1
    Params_GetIsPreviewMeshLoaded params{};
    ProcessEvent(func, &params);
    return (bool)params.ReturnValue;
}
ATransfigurationPreviewActor* ATransfigurationPreviewActor::StaticClass() {
    static auto res = find_uobject("Class /Script/Phoenix.TransfigurationPreviewActor");
    return (ATransfigurationPreviewActor*)res;
}
void ATransfigurationPreviewActor::TransformedFromOtherPreview(ATransfigurationPreviewActor* InPreviousPreview) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.TransfigurationPreviewActor.TransformedFromOtherPreview"));
    struct Params_TransformedFromOtherPreview {
        ATransfigurationPreviewActor* InPreviousPreview; // 0x0
    }; // Size: 0x8
    Params_TransformedFromOtherPreview params{};
    params.InPreviousPreview = (ATransfigurationPreviewActor*)InPreviousPreview;
    ProcessEvent(func, &params);
}
void ATransfigurationPreviewActor::ResetToOriginalScale() {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.TransfigurationPreviewActor.ResetToOriginalScale"));
    struct Params_ResetToOriginalScale {
    }; // Size: 0x0
    Params_ResetToOriginalScale params{};
    ProcessEvent(func, &params);
}
void ATransfigurationPreviewActor::StartHoldConjuring(float TotalConjurationDuration, TArray<FTransfigurationResource>& Resources, FVector WandPos) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.TransfigurationPreviewActor.StartHoldConjuring"));
    struct Params_StartHoldConjuring {
        float TotalConjurationDuration; // 0x0
        char pad_4[0x4];
        TArray<FTransfigurationResource> Resources; // 0x8
        FVector WandPos; // 0x18
    }; // Size: 0x24
    Params_StartHoldConjuring params{};
    params.TotalConjurationDuration = (float)TotalConjurationDuration;
    params.Resources = (TArray<FTransfigurationResource>)Resources;
    params.WandPos = (FVector)WandPos;
    ProcessEvent(func, &params);
    Resources = params.Resources;
}
void ATransfigurationPreviewActor::UpdateHoldConjuring(float TimeRatio, TArray<FTransfigurationResource>& Resources, FVector WandPos) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.TransfigurationPreviewActor.UpdateHoldConjuring"));
    struct Params_UpdateHoldConjuring {
        float TimeRatio; // 0x0
        char pad_4[0x4];
        TArray<FTransfigurationResource> Resources; // 0x8
        FVector WandPos; // 0x18
    }; // Size: 0x24
    Params_UpdateHoldConjuring params{};
    params.TimeRatio = (float)TimeRatio;
    params.Resources = (TArray<FTransfigurationResource>)Resources;
    params.WandPos = (FVector)WandPos;
    ProcessEvent(func, &params);
    Resources = params.Resources;
}
bool ATransfigurationPreviewActor::AreResourceRequirementsMet() {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.TransfigurationPreviewActor.AreResourceRequirementsMet"));
    struct Params_AreResourceRequirementsMet {
        bool ReturnValue; // 0x0
    }; // Size: 0x1
    Params_AreResourceRequirementsMet params{};
    ProcessEvent(func, &params);
    return (bool)params.ReturnValue;
}
bool ATransfigurationPreviewActor::UsesSurfacePlacement() {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.TransfigurationPreviewActor.UsesSurfacePlacement"));
    struct Params_UsesSurfacePlacement {
        bool ReturnValue; // 0x0
    }; // Size: 0x1
    Params_UsesSurfacePlacement params{};
    ProcessEvent(func, &params);
    return (bool)params.ReturnValue;
}
FName ATransfigurationPreviewActor::GetObjectType() {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.TransfigurationPreviewActor.GetObjectType"));
    struct Params_GetObjectType {
        FName ReturnValue; // 0x0
    }; // Size: 0x8
    Params_GetObjectType params{};
    ProcessEvent(func, &params);
    return (FName)params.ReturnValue;
}
void ATransfigurationPreviewActor::UpdateMeshOpacity(float Opacity) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.TransfigurationPreviewActor.UpdateMeshOpacity"));
    struct Params_UpdateMeshOpacity {
        float Opacity; // 0x0
    }; // Size: 0x4
    Params_UpdateMeshOpacity params{};
    params.Opacity = (float)Opacity;
    ProcessEvent(func, &params);
}
bool ATransfigurationPreviewActor::CanPlace() {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.TransfigurationPreviewActor.CanPlace"));
    struct Params_CanPlace {
        bool ReturnValue; // 0x0
    }; // Size: 0x1
    Params_CanPlace params{};
    ProcessEvent(func, &params);
    return (bool)params.ReturnValue;
}
void ATransfigurationPreviewActor::UnpauseAssociatedSkeletalMeshComponents() {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.TransfigurationPreviewActor.UnpauseAssociatedSkeletalMeshComponents"));
    struct Params_UnpauseAssociatedSkeletalMeshComponents {
    }; // Size: 0x0
    Params_UnpauseAssociatedSkeletalMeshComponents params{};
    ProcessEvent(func, &params);
}
void ATransfigurationPreviewActor::CancelHoldVanishing() {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.TransfigurationPreviewActor.CancelHoldVanishing"));
    struct Params_CancelHoldVanishing {
    }; // Size: 0x0
    Params_CancelHoldVanishing params{};
    ProcessEvent(func, &params);
}
ATransformationStyleBase* ATransfigurationPreviewActor::SpawnTransformationStyle(ATransfigurationPreviewActor* InNewActor) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.TransfigurationPreviewActor.SpawnTransformationStyle"));
    struct Params_SpawnTransformationStyle {
        ATransfigurationPreviewActor* InNewActor; // 0x0
        ATransformationStyleBase* ReturnValue; // 0x8
    }; // Size: 0x10
    Params_SpawnTransformationStyle params{};
    params.InNewActor = (ATransfigurationPreviewActor*)InNewActor;
    ProcessEvent(func, &params);
    return (ATransformationStyleBase*)params.ReturnValue;
}
void ATransfigurationPreviewActor::TransfigurationPreviewMeshLoaded__DelegateSignature() {
    static auto func = (UFunction*)(find_uobject("DelegateFunction /Script/Phoenix.TransfigurationPreviewActor.TransfigurationPreviewMeshLoaded__DelegateSignature"));
    struct Params_TransfigurationPreviewMeshLoaded__DelegateSignature {
    }; // Size: 0x0
    Params_TransfigurationPreviewMeshLoaded__DelegateSignature params{};
    ProcessEvent(func, &params);
}
FName ATransfigurationPreviewActor::GetObjectCategory() {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.TransfigurationPreviewActor.GetObjectCategory"));
    struct Params_GetObjectCategory {
        FName ReturnValue; // 0x0
    }; // Size: 0x8
    Params_GetObjectCategory params{};
    ProcessEvent(func, &params);
    return (FName)params.ReturnValue;
}
FName ATransfigurationPreviewActor::GetTransfigurationClass() {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.TransfigurationPreviewActor.GetTransfigurationClass"));
    struct Params_GetTransfigurationClass {
        FName ReturnValue; // 0x0
    }; // Size: 0x8
    Params_GetTransfigurationClass params{};
    ProcessEvent(func, &params);
    return (FName)params.ReturnValue;
}
void ATransfigurationPreviewActor::SwitchToNewMesh() {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.TransfigurationPreviewActor.SwitchToNewMesh"));
    struct Params_SwitchToNewMesh {
    }; // Size: 0x0
    Params_SwitchToNewMesh params{};
    ProcessEvent(func, &params);
}
FBox ATransfigurationPreviewActor::GetActorLocalPreviewBounds() {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.TransfigurationPreviewActor.GetActorLocalPreviewBounds"));
    struct Params_GetActorLocalPreviewBounds {
        FBox ReturnValue; // 0x0
    }; // Size: 0x1c
    Params_GetActorLocalPreviewBounds params{};
    ProcessEvent(func, &params);
    return (FBox)params.ReturnValue;
}
void ATransfigurationPreviewActor::StartHoldVanishing() {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.TransfigurationPreviewActor.StartHoldVanishing"));
    struct Params_StartHoldVanishing {
    }; // Size: 0x0
    Params_StartHoldVanishing params{};
    ProcessEvent(func, &params);
}
void ATransfigurationPreviewActor::StartHoldTransforming() {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.TransfigurationPreviewActor.StartHoldTransforming"));
    struct Params_StartHoldTransforming {
    }; // Size: 0x0
    Params_StartHoldTransforming params{};
    ProcessEvent(func, &params);
}
AVanishmentStyleBase* ATransfigurationPreviewActor::SpawnVanishmentStyle() {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.TransfigurationPreviewActor.SpawnVanishmentStyle"));
    struct Params_SpawnVanishmentStyle {
        AVanishmentStyleBase* ReturnValue; // 0x0
    }; // Size: 0x8
    Params_SpawnVanishmentStyle params{};
    ProcessEvent(func, &params);
    return (AVanishmentStyleBase*)params.ReturnValue;
}
void ATransfigurationPreviewActor::SetSurfaceNormal(bool bInSurfaceFound, FVector& InSurfaceNormal) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.TransfigurationPreviewActor.SetSurfaceNormal"));
    struct Params_SetSurfaceNormal {
        bool bInSurfaceFound; // 0x0
        char pad_1[0x3];
        FVector InSurfaceNormal; // 0x4
    }; // Size: 0x10
    Params_SetSurfaceNormal params{};
    params.bInSurfaceFound = (bool)bInSurfaceFound;
    params.InSurfaceNormal = (FVector)InSurfaceNormal;
    ProcessEvent(func, &params);
    InSurfaceNormal = params.InSurfaceNormal;
}
bool ATransfigurationPreviewActor::IsSpawningIn() {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.TransfigurationPreviewActor.IsSpawningIn"));
    struct Params_IsSpawningIn {
        bool ReturnValue; // 0x0
    }; // Size: 0x1
    Params_IsSpawningIn params{};
    ProcessEvent(func, &params);
    return (bool)params.ReturnValue;
}
void ATransfigurationPreviewActor::SetSpawningIn(bool bIsSpawning) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.TransfigurationPreviewActor.SetSpawningIn"));
    struct Params_SetSpawningIn {
        bool bIsSpawning; // 0x0
    }; // Size: 0x1
    Params_SetSpawningIn params{};
    params.bIsSpawning = (bool)bIsSpawning;
    ProcessEvent(func, &params);
}
void ATransfigurationPreviewActor::OnFakeLoadDurationTimerElapsed() {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.TransfigurationPreviewActor.OnFakeLoadDurationTimerElapsed"));
    struct Params_OnFakeLoadDurationTimerElapsed {
    }; // Size: 0x0
    Params_OnFakeLoadDurationTimerElapsed params{};
    ProcessEvent(func, &params);
}
void ATransfigurationPreviewActor::SetCanPlace(bool bInCanPlace) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.TransfigurationPreviewActor.SetCanPlace"));
    struct Params_SetCanPlace {
        bool bInCanPlace; // 0x0
    }; // Size: 0x1
    Params_SetCanPlace params{};
    params.bInCanPlace = (bool)bInCanPlace;
    ProcessEvent(func, &params);
}
void ATransfigurationPreviewActor::SetAssociatedObjectActors(TArray<AActor*> InActorList) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.TransfigurationPreviewActor.SetAssociatedObjectActors"));
    struct Params_SetAssociatedObjectActors {
        TArray<AActor*> InActorList; // 0x0
    }; // Size: 0x10
    Params_SetAssociatedObjectActors params{};
    params.InActorList = (TArray<AActor*>)InActorList;
    ProcessEvent(func, &params);
}
void ATransfigurationPreviewActor::OnVanishStart() {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.TransfigurationPreviewActor.OnVanishStart"));
    struct Params_OnVanishStart {
    }; // Size: 0x0
    Params_OnVanishStart params{};
    ProcessEvent(func, &params);
}
void ATransfigurationPreviewActor::CancelledIntoThinAir() {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.TransfigurationPreviewActor.CancelledIntoThinAir"));
    struct Params_CancelledIntoThinAir {
    }; // Size: 0x0
    Params_CancelledIntoThinAir params{};
    ProcessEvent(func, &params);
}
void ATransfigurationPreviewActor::OnTransformWithoutStyle() {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.TransfigurationPreviewActor.OnTransformWithoutStyle"));
    struct Params_OnTransformWithoutStyle {
    }; // Size: 0x0
    Params_OnTransformWithoutStyle params{};
    ProcessEvent(func, &params);
}
void ATransfigurationPreviewActor::OnPreviewMeshLoaded() {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.TransfigurationPreviewActor.OnPreviewMeshLoaded"));
    struct Params_OnPreviewMeshLoaded {
    }; // Size: 0x0
    Params_OnPreviewMeshLoaded params{};
    ProcessEvent(func, &params);
}
void ATransfigurationPreviewActor::OnTransformStart(ATransfigurationPreviewActor* InNewPreview) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.TransfigurationPreviewActor.OnTransformStart"));
    struct Params_OnTransformStart {
        ATransfigurationPreviewActor* InNewPreview; // 0x0
    }; // Size: 0x8
    Params_OnTransformStart params{};
    params.InNewPreview = (ATransfigurationPreviewActor*)InNewPreview;
    ProcessEvent(func, &params);
}
FName ATransfigurationPreviewActor::GetColor() {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.TransfigurationPreviewActor.GetColor"));
    struct Params_GetColor {
        FName ReturnValue; // 0x0
    }; // Size: 0x8
    Params_GetColor params{};
    ProcessEvent(func, &params);
    return (FName)params.ReturnValue;
}
void ATransfigurationPreviewActor::OnSizeChange(float StartScale, float EndScale) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.TransfigurationPreviewActor.OnSizeChange"));
    struct Params_OnSizeChange {
        float StartScale; // 0x0
        float EndScale; // 0x4
    }; // Size: 0x8
    Params_OnSizeChange params{};
    params.StartScale = (float)StartScale;
    params.EndScale = (float)EndScale;
    ProcessEvent(func, &params);
}
bool ATransfigurationPreviewActor::IsBeingRemoved() {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.TransfigurationPreviewActor.IsBeingRemoved"));
    struct Params_IsBeingRemoved {
        bool ReturnValue; // 0x0
    }; // Size: 0x1
    Params_IsBeingRemoved params{};
    ProcessEvent(func, &params);
    return (bool)params.ReturnValue;
}
void ATransfigurationPreviewActor::ObjectSelected() {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.TransfigurationPreviewActor.ObjectSelected"));
    struct Params_ObjectSelected {
    }; // Size: 0x0
    Params_ObjectSelected params{};
    ProcessEvent(func, &params);
}
void ATransfigurationPreviewActor::ObjectDeselected(AActor* InNewActor) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.TransfigurationPreviewActor.ObjectDeselected"));
    struct Params_ObjectDeselected {
        AActor* InNewActor; // 0x0
    }; // Size: 0x8
    Params_ObjectDeselected params{};
    params.InNewActor = (AActor*)InNewActor;
    ProcessEvent(func, &params);
}
void ATransfigurationPreviewActor::FinishHoldTransforming() {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.TransfigurationPreviewActor.FinishHoldTransforming"));
    struct Params_FinishHoldTransforming {
    }; // Size: 0x0
    Params_FinishHoldTransforming params{};
    ProcessEvent(func, &params);
}
void ATransfigurationPreviewActor::ObjectConfirmed(TArray<AActor*>& InNewActors) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.TransfigurationPreviewActor.ObjectConfirmed"));
    struct Params_ObjectConfirmed {
        TArray<AActor*> InNewActors; // 0x0
    }; // Size: 0x10
    Params_ObjectConfirmed params{};
    params.InNewActors = (TArray<AActor*>)InNewActors;
    ProcessEvent(func, &params);
    InNewActors = params.InNewActors;
}
bool ATransfigurationPreviewActor::IsStationary() {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.TransfigurationPreviewActor.IsStationary"));
    struct Params_IsStationary {
        bool ReturnValue; // 0x0
    }; // Size: 0x1
    Params_IsStationary params{};
    ProcessEvent(func, &params);
    return (bool)params.ReturnValue;
}
void ATransfigurationPreviewActor::GetTransfigurationFxInfos(FVector& OutObjectCenter, FVector& OutObjectExtent) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.TransfigurationPreviewActor.GetTransfigurationFxInfos"));
    struct Params_GetTransfigurationFxInfos {
        FVector OutObjectCenter; // 0x0
        FVector OutObjectExtent; // 0xc
    }; // Size: 0x18
    Params_GetTransfigurationFxInfos params{};
    params.OutObjectCenter = (FVector)OutObjectCenter;
    params.OutObjectExtent = (FVector)OutObjectExtent;
    ProcessEvent(func, &params);
    OutObjectCenter = params.OutObjectCenter;
    OutObjectExtent = params.OutObjectExtent;
}
bool ATransfigurationPreviewActor::IsReadyForPlacement() {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.TransfigurationPreviewActor.IsReadyForPlacement"));
    struct Params_IsReadyForPlacement {
        bool ReturnValue; // 0x0
    }; // Size: 0x1
    Params_IsReadyForPlacement params{};
    ProcessEvent(func, &params);
    return (bool)params.ReturnValue;
}
void ATransfigurationPreviewActor::FinishHoldVanishing() {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.TransfigurationPreviewActor.FinishHoldVanishing"));
    struct Params_FinishHoldVanishing {
    }; // Size: 0x0
    Params_FinishHoldVanishing params{};
    ProcessEvent(func, &params);
}
bool ATransfigurationPreviewActor::IsPreviewInTransition() {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.TransfigurationPreviewActor.IsPreviewInTransition"));
    struct Params_IsPreviewInTransition {
        bool ReturnValue; // 0x0
    }; // Size: 0x1
    Params_IsPreviewInTransition params{};
    ProcessEvent(func, &params);
    return (bool)params.ReturnValue;
}
bool ATransfigurationPreviewActor::IsPrefab() {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.TransfigurationPreviewActor.IsPrefab"));
    struct Params_IsPrefab {
        bool ReturnValue; // 0x0
    }; // Size: 0x1
    Params_IsPrefab params{};
    ProcessEvent(func, &params);
    return (bool)params.ReturnValue;
}
void ATransfigurationPreviewActor::BP_OnTransformationLoaded() {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.TransfigurationPreviewActor.BP_OnTransformationLoaded"));
    struct Params_BP_OnTransformationLoaded {
    }; // Size: 0x0
    Params_BP_OnTransformationLoaded params{};
    ProcessEvent(func, &params);
}
bool ATransfigurationPreviewActor::IsLocked() {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.TransfigurationPreviewActor.IsLocked"));
    struct Params_IsLocked {
        bool ReturnValue; // 0x0
    }; // Size: 0x1
    Params_IsLocked params{};
    ProcessEvent(func, &params);
    return (bool)params.ReturnValue;
}
void ATransfigurationPreviewActor::CancelHoldConjuring(float TimeRatio, TArray<FTransfigurationResource>& Resources, FVector WandPos) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.TransfigurationPreviewActor.CancelHoldConjuring"));
    struct Params_CancelHoldConjuring {
        float TimeRatio; // 0x0
        char pad_4[0x4];
        TArray<FTransfigurationResource> Resources; // 0x8
        FVector WandPos; // 0x18
    }; // Size: 0x24
    Params_CancelHoldConjuring params{};
    params.TimeRatio = (float)TimeRatio;
    params.Resources = (TArray<FTransfigurationResource>)Resources;
    params.WandPos = (FVector)WandPos;
    ProcessEvent(func, &params);
    Resources = params.Resources;
}
void ATransfigurationPreviewActor::ConjuredFromThinAir() {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.TransfigurationPreviewActor.ConjuredFromThinAir"));
    struct Params_ConjuredFromThinAir {
    }; // Size: 0x0
    Params_ConjuredFromThinAir params{};
    ProcessEvent(func, &params);
}
void ATransfigurationPreviewActor::HideActorAndChildren(AActor* InActor, bool bHide) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.TransfigurationPreviewActor.HideActorAndChildren"));
    struct Params_HideActorAndChildren {
        AActor* InActor; // 0x0
        bool bHide; // 0x8
    }; // Size: 0x9
    Params_HideActorAndChildren params{};
    params.InActor = (AActor*)InActor;
    params.bHide = (bool)bHide;
    ProcessEvent(func, &params);
}
FTransform ATransfigurationPreviewActor::GetTargetTransform() {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.TransfigurationPreviewActor.GetTargetTransform"));
    struct Params_GetTargetTransform {
        FTransform ReturnValue; // 0x0
    }; // Size: 0x30
    Params_GetTargetTransform params{};
    ProcessEvent(func, &params);
    return (FTransform)params.ReturnValue;
}
void ATransfigurationPreviewActor::GetPreviewBounds(FVector& OutCenter, FVector& OutExtent) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.TransfigurationPreviewActor.GetPreviewBounds"));
    struct Params_GetPreviewBounds {
        FVector OutCenter; // 0x0
        FVector OutExtent; // 0xc
    }; // Size: 0x18
    Params_GetPreviewBounds params{};
    params.OutCenter = (FVector)OutCenter;
    params.OutExtent = (FVector)OutExtent;
    ProcessEvent(func, &params);
    OutCenter = params.OutCenter;
    OutExtent = params.OutExtent;
}
FTransform ATransfigurationPreviewActor::GetAttachmentTransform() {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.TransfigurationPreviewActor.GetAttachmentTransform"));
    struct Params_GetAttachmentTransform {
        FTransform ReturnValue; // 0x0
    }; // Size: 0x30
    Params_GetAttachmentTransform params{};
    ProcessEvent(func, &params);
    return (FTransform)params.ReturnValue;
}
void ATransfigurationPreviewActor::FinishHoldConjuring(TArray<FTransfigurationResource>& Resources, FVector WandPos) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.TransfigurationPreviewActor.FinishHoldConjuring"));
    struct Params_FinishHoldConjuring {
        TArray<FTransfigurationResource> Resources; // 0x0
        FVector WandPos; // 0x10
    }; // Size: 0x1c
    Params_FinishHoldConjuring params{};
    params.Resources = (TArray<FTransfigurationResource>)Resources;
    params.WandPos = (FVector)WandPos;
    ProcessEvent(func, &params);
    Resources = params.Resources;
}
TArray<UMeshComponent*> ATransfigurationPreviewActor::DuplicateMeshComponents() {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.TransfigurationPreviewActor.DuplicateMeshComponents"));
    struct Params_DuplicateMeshComponents {
        TArray<UMeshComponent*> ReturnValue; // 0x0
    }; // Size: 0x10
    Params_DuplicateMeshComponents params{};
    ProcessEvent(func, &params);
    return (TArray<UMeshComponent*>)params.ReturnValue;
}
void ATransfigurationPreviewActor::ColorAboutToChange() {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.TransfigurationPreviewActor.ColorAboutToChange"));
    struct Params_ColorAboutToChange {
    }; // Size: 0x0
    Params_ColorAboutToChange params{};
    ProcessEvent(func, &params);
}
void ATransfigurationPreviewActor::CannotHoldConjuring() {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.TransfigurationPreviewActor.CannotHoldConjuring"));
    struct Params_CannotHoldConjuring {
    }; // Size: 0x0
    Params_CannotHoldConjuring params{};
    ProcessEvent(func, &params);
}
bool ATransfigurationPreviewActor::CanChangeColor() {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.TransfigurationPreviewActor.CanChangeColor"));
    struct Params_CanChangeColor {
        bool ReturnValue; // 0x0
    }; // Size: 0x1
    Params_CanChangeColor params{};
    ProcessEvent(func, &params);
    return (bool)params.ReturnValue;
}
void ATransfigurationPreviewActor::CancelHoldTransforming() {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.TransfigurationPreviewActor.CancelHoldTransforming"));
    struct Params_CancelHoldTransforming {
    }; // Size: 0x0
    Params_CancelHoldTransforming params{};
    ProcessEvent(func, &params);
}
void ATransfigurationPreviewActor::BlueprintInitialize() {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.TransfigurationPreviewActor.BlueprintInitialize"));
    struct Params_BlueprintInitialize {
    }; // Size: 0x0
    Params_BlueprintInitialize params{};
    ProcessEvent(func, &params);
}
