#include "ABP_TransfigurationPreviewPlacementAnimator_C.hpp"
#include "ATransfigurationPlacementAnimator.hpp"
#include "ATransfigurationPreviewActor.hpp"
#include "FPointerToUberGraphFrame.hpp"
#include "UABP_TransfigurationPlaceDown_C.hpp"
#include "UAnimInstance.hpp"
#include "UFunction.hpp"
#include "USkeletalMeshComponent.hpp"
ABP_TransfigurationPreviewPlacementAnimator_C* ABP_TransfigurationPreviewPlacementAnimator_C::StaticClass() {
    static auto res = find_uobject("BlueprintGeneratedClass /Game/Gameplay/ToolSet/Spells/Transformation/BP_TransfigurationPreviewPlacementAnimator.BP_TransfigurationPreviewPlacementAnimator_C");
    return (ABP_TransfigurationPreviewPlacementAnimator_C*)res;
}
void ABP_TransfigurationPreviewPlacementAnimator_C::DetachPreviewObject0() {
    static auto func = (UFunction*)(find_uobject("Function /Game/Gameplay/ToolSet/Spells/Transformation/BP_TransfigurationPreviewPlacementAnimator.BP_TransfigurationPreviewPlacementAnimator_C.DetachPreviewObject"));
    struct Params_DetachPreviewObject {
    }; // Size: 0x0
    Params_DetachPreviewObject params{};
    ProcessEvent(func, &params);
}
void ABP_TransfigurationPreviewPlacementAnimator_C::AttachPreviewObject0(ATransfigurationPreviewActor* InPreviewActor) {
    static auto func = (UFunction*)(find_uobject("Function /Game/Gameplay/ToolSet/Spells/Transformation/BP_TransfigurationPreviewPlacementAnimator.BP_TransfigurationPreviewPlacementAnimator_C.AttachPreviewObject"));
    struct Params_AttachPreviewObject {
        ATransfigurationPreviewActor* InPreviewActor; // 0x0
    }; // Size: 0x8
    Params_AttachPreviewObject params{};
    params.InPreviewActor = (ATransfigurationPreviewActor*)InPreviewActor;
    ProcessEvent(func, &params);
}
void ABP_TransfigurationPreviewPlacementAnimator_C::ExecuteUbergraph_BP_TransfigurationPreviewPlacementAnimator(int32_t EntryPoint, UAnimInstance* CallFunc_GetAnimInstance_ReturnValue, UABP_TransfigurationPlaceDown_C* K2Node_DynamicCast_AsABP_Transfiguration_Place_Down, bool K2Node_DynamicCast_bSuccess, bool CallFunc_K2_AttachToComponent_ReturnValue, ATransfigurationPreviewActor* K2Node_Event_InPreviewActor) {
    static auto func = (UFunction*)(find_uobject("Function /Game/Gameplay/ToolSet/Spells/Transformation/BP_TransfigurationPreviewPlacementAnimator.BP_TransfigurationPreviewPlacementAnimator_C.ExecuteUbergraph_BP_TransfigurationPreviewPlacementAnimator"));
    struct Params_ExecuteUbergraph_BP_TransfigurationPreviewPlacementAnimator {
        int32_t EntryPoint; // 0x0
        char pad_4[0x4];
        UAnimInstance* CallFunc_GetAnimInstance_ReturnValue; // 0x8
        UABP_TransfigurationPlaceDown_C* K2Node_DynamicCast_AsABP_Transfiguration_Place_Down; // 0x10
        bool K2Node_DynamicCast_bSuccess; // 0x18
        bool CallFunc_K2_AttachToComponent_ReturnValue; // 0x19
        char pad_1a[0x6];
        ATransfigurationPreviewActor* K2Node_Event_InPreviewActor; // 0x20
    }; // Size: 0x28
    Params_ExecuteUbergraph_BP_TransfigurationPreviewPlacementAnimator params{};
    params.EntryPoint = (int32_t)EntryPoint;
    params.CallFunc_GetAnimInstance_ReturnValue = (UAnimInstance*)CallFunc_GetAnimInstance_ReturnValue;
    params.K2Node_DynamicCast_AsABP_Transfiguration_Place_Down = (UABP_TransfigurationPlaceDown_C*)K2Node_DynamicCast_AsABP_Transfiguration_Place_Down;
    params.K2Node_DynamicCast_bSuccess = (bool)K2Node_DynamicCast_bSuccess;
    params.CallFunc_K2_AttachToComponent_ReturnValue = (bool)CallFunc_K2_AttachToComponent_ReturnValue;
    params.K2Node_Event_InPreviewActor = (ATransfigurationPreviewActor*)K2Node_Event_InPreviewActor;
    ProcessEvent(func, &params);
}
