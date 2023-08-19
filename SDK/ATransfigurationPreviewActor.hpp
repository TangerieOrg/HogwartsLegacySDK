#pragma once
#include <cstdint>
#include "AActor.hpp"
#include "ETransfigurationSnapping.hpp"
#include "FBox.hpp"
#include "FTransfigurationResource.hpp"
#include "FTransform.hpp"
#include "FVector.hpp"
class ATransfigurationMovementStyleBase;
class USceneComponent;
class AVanishmentStyleBase;
class ATransformationStyleBase;
class UMeshComponent;
#pragma pack(push, 1)
class ATransfigurationPreviewActor : public AActor {
public:
    ATransfigurationMovementStyleBase* MovementStyle; // 0x248
    float TwirlDirection; // 0x250
    char pad_254[0x134];
    FVector SurfaceNormal; // 0x388
    ETransfigurationSnapping Snapping; // 0x394
    char pad_395[0x18];
    bool bSurfaceFound; // 0x3ad
    char pad_3ae[0x8];
    bool bCopyDecalComponents; // 0x3b6
    bool bMaintainCollision; // 0x3b7
    TArray<void*> AnimBPsExcludedFromBlendOut; // 0x3b8
    USceneComponent* PreviewMeshRoot; // 0x3c8
    char pad_3d0[0x8];
    bool bTestFixedLoadDuration; // 0x3d8
    char pad_3d9[0x3];
    float FixedLoadDuration; // 0x3dc
    TArray<void*> CopiedComponents; // 0x3e0
    TArray<void*> AssociatedObjects; // 0x3f0
    char pad_400[0x30];
    static ATransfigurationPreviewActor* StaticClass();
    bool UsesSurfacePlacement();
    void UpdateMeshOpacity(float Opacity);
    void UpdateHoldConjuring(float TimeRatio, TArray<FTransfigurationResource>& Resources, FVector WandPos);
    void UnpauseAssociatedSkeletalMeshComponents();
    void TransformedFromOtherPreview(ATransfigurationPreviewActor* InPreviousPreview);
    void TransfigurationPreviewMeshLoaded__DelegateSignature();
    void SwitchToNewMesh();
    void StartHoldVanishing();
    void StartHoldTransforming();
    void StartHoldConjuring(float TotalConjurationDuration, TArray<FTransfigurationResource>& Resources, FVector WandPos);
    AVanishmentStyleBase* SpawnVanishmentStyle();
    ATransformationStyleBase* SpawnTransformationStyle(ATransfigurationPreviewActor* InNewActor);
    void SetSurfaceNormal(bool bInSurfaceFound, FVector& InSurfaceNormal);
    void SetSpawningIn(bool bIsSpawning);
    void SetCanPlace(bool bInCanPlace);
    void SetAssociatedObjectActors(TArray<AActor*> InActorList);
    void ResetToOriginalScale();
    void OnVanishStart();
    void OnTransformWithoutStyle();
    void OnTransformStart(ATransfigurationPreviewActor* InNewPreview);
    void OnSizeChange(float StartScale, float EndScale);
    void OnPreviewMeshLoaded();
    void OnFakeLoadDurationTimerElapsed();
    void ObjectSelected();
    void ObjectDeselected(AActor* InNewActor);
    void ObjectConfirmed(TArray<AActor*>& InNewActors);
    bool IsStationary();
    bool IsSpawningIn();
    bool IsReadyForPlacement();
    bool IsPreviewInTransition();
    bool IsPrefab();
    bool IsLocked();
    bool IsBeingRemoved();
    void HideActorAndChildren(AActor* InActor, bool bHide);
    void GetTransfigurationFxInfos(FVector& OutObjectCenter, FVector& OutObjectExtent);
    FName GetTransfigurationClass();
    FTransform GetTargetTransform();
    void GetPreviewBounds(FVector& OutCenter, FVector& OutExtent);
    FName GetObjectType();
    FName GetObjectCategory();
    bool GetIsPreviewMeshLoaded();
    FName GetColor();
    FTransform GetAttachmentTransform();
    FBox GetActorLocalPreviewBounds();
    void FinishHoldVanishing();
    void FinishHoldTransforming();
    void FinishHoldConjuring(TArray<FTransfigurationResource>& Resources, FVector WandPos);
    TArray<UMeshComponent*> DuplicateMeshComponents();
    void ConjuredFromThinAir();
    void ColorAboutToChange();
    bool CanPlace();
    void CannotHoldConjuring();
    bool CanChangeColor();
    void CancelledIntoThinAir();
    void CancelHoldVanishing();
    void CancelHoldTransforming();
    void CancelHoldConjuring(float TimeRatio, TArray<FTransfigurationResource>& Resources, FVector WandPos);
    void BP_OnTransformationLoaded();
    void BlueprintInitialize();
    bool AreResourceRequirementsMet();
}; // Size: 0x430
#pragma pack(pop)
