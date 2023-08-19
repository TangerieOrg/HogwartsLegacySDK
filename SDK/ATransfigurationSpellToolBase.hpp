#pragma once
#include <cstdint>
#include "AChannelingSpellTool.hpp"
#include "ETransfigurationPlacementError.hpp"
#include "FBTCustomAction.hpp"
#include "FLockableTransfigurationItem.hpp"
#include "FTransfigurationResource.hpp"
class UTransformationSpellToolComponent;
class ATransfigurationPreviewActor;
#pragma pack(push, 1)
class ATransfigurationSpellToolBase : public AChannelingSpellTool {
public:
    FBTCustomAction TransfigurationAction; // 0x960
    char pad_96c[0x1c];
    FName ObjectCategoryName; // 0x988
    TArray<FLockableTransfigurationItem> TransformationOptions; // 0x990
    FLockableTransfigurationItem SelectedTransformationOption; // 0x9a0
    TArray<FLockableTransfigurationItem> ColorOptions; // 0xa10
    FLockableTransfigurationItem SelectedColorOption; // 0xa20
    TArray<FName> CategoryBreadcrumbs; // 0xa90
    float TwirlDirection; // 0xaa0
    char pad_aa4[0x4];
    float HoldingDurationBeforeTransfigurationTimerStart; // 0xaa8
    bool bWaitForCharacterAnimations; // 0xaac
    char pad_aad[0x3];
    static ATransfigurationSpellToolBase* StaticClass();
    void TransformObject_FromMotion();
    void SetTransformComponentRef(UTransformationSpellToolComponent* TC);
    void ScaleUp();
    void ScaleDown();
    void RotateRight_FromMotion();
    void RotateRight();
    void RotateLeft_FromMotion();
    void RotateLeft();
    bool PrevTransformation();
    void PrevColor();
    void PrepareToExit();
    void PrepareToBack();
    bool NextTransformation();
    void NextColor();
    bool IsObjectStationary();
    bool IsObjectScalable();
    bool IsObjectRotatable();
    bool HasTransformationOptions();
    bool HasColorOptions();
    float GetTransfigurationDuration();
    TArray<FTransfigurationResource> GetRequiredResources();
    ATransfigurationPreviewActor* GetPreviewActor();
    ETransfigurationPlacementError GetPlacementError();
    float GetHoldingDurationBeforeTransfigurationTimerStart();
    void Exit();
    bool DoesObjectSupportSnapping();
    bool ConsumesSanctuaryContextResources();
    void ConjurePreview_FromMotion();
    void ConfirmTransfiguration_FromMotion();
    bool ConfirmTransfiguration();
    void ColorObject_FromMotion();
    bool CanPlaceItem();
    void CancelPreview_FromMotion();
    void Back();
    bool AreResourceRequirementsMet();
}; // Size: 0xab0
#pragma pack(pop)
