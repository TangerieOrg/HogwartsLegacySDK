#pragma once
#include <cstdint>
#include "ATransfigurationPlacementAnimator.hpp"
#include "FPointerToUberGraphFrame.hpp"
class USkeletalMeshComponent;
class UABP_TransfigurationPlaceDown_C;
class ATransfigurationPreviewActor;
class UAnimInstance;
#pragma pack(push, 1)
class ABP_TransfigurationPreviewPlacementAnimator_C : public ATransfigurationPlacementAnimator {
public:
    FPointerToUberGraphFrame UberGraphFrame; // 0x258
    USkeletalMeshComponent* SkeletalMesh; // 0x260
    bool PreviewAttached; // 0x268
    char pad_269[0x7];
    static ABP_TransfigurationPreviewPlacementAnimator_C* StaticClass();
    void AttachPreviewObject0(ATransfigurationPreviewActor* InPreviewActor);
    void DetachPreviewObject0();
    void ExecuteUbergraph_BP_TransfigurationPreviewPlacementAnimator(int32_t EntryPoint, UAnimInstance* CallFunc_GetAnimInstance_ReturnValue, UABP_TransfigurationPlaceDown_C* K2Node_DynamicCast_AsABP_Transfiguration_Place_Down, bool K2Node_DynamicCast_bSuccess, bool CallFunc_K2_AttachToComponent_ReturnValue, ATransfigurationPreviewActor* K2Node_Event_InPreviewActor);
}; // Size: 0x270
#pragma pack(pop)
