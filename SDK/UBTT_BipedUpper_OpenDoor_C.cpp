#include "AActor.hpp"
#include "FPointerToUberGraphFrame.hpp"
#include "FVariantMapHandle.hpp"
#include "UAnimInstance.hpp"
#include "UBTT_BipedUpper_OpenDoor_C.hpp"
#include "UBTTask_AvaAITree_Input.hpp"
#include "UBiped_AnimInstance.hpp"
#include "UFunction.hpp"
void UBTT_BipedUpper_OpenDoor_C::ExecuteUbergraph_BTT_BipedUpper_OpenDoor(int32_t EntryPoint, UAnimInstance* CallFunc_GetAnimInstance_ReturnValue, UAnimInstance* CallFunc_GetAnimInstance_ReturnValue_1, UBiped_AnimInstance* K2Node_DynamicCast_AsBiped_Anim_Instance, bool K2Node_DynamicCast_bSuccess) {}
UBTT_BipedUpper_OpenDoor_C* UBTT_BipedUpper_OpenDoor_C::StaticClass() {
    static auto res = find_uobject("BlueprintGeneratedClass /Game/Pawn/Shared/StateTree/BTT_BipedUpper_OpenDoor.BTT_BipedUpper_OpenDoor_C");
    return (UBTT_BipedUpper_OpenDoor_C*)res;
}
void UBTT_BipedUpper_OpenDoor_C::CustActionEvt_AnimCompletePartial_K2Node_BTCustomActionEvent_0(FVariantMapHandle VariantMapHandle) {
    static auto func = (UFunction*)(find_uobject("Function /Game/Pawn/Shared/StateTree/BTT_BipedUpper_OpenDoor.BTT_BipedUpper_OpenDoor_C.CustActionEvt_AnimCompletePartial_K2Node_BTCustomActionEvent_0"));
    struct Params_CustActionEvt_AnimCompletePartial_K2Node_BTCustomActionEvent_0 {
        FVariantMapHandle VariantMapHandle; // 0x0
    }; // Size: 0x4
    Params_CustActionEvt_AnimCompletePartial_K2Node_BTCustomActionEvent_0 params{};
    params.VariantMapHandle = (FVariantMapHandle)VariantMapHandle;
    ProcessEvent(func, &params);
}
void UBTT_BipedUpper_OpenDoor_C::ExitTask(AActor* OwnerActor) {
    static auto func = (UFunction*)(find_uobject("Function /Game/Pawn/Shared/StateTree/BTT_BipedUpper_OpenDoor.BTT_BipedUpper_OpenDoor_C.ExitTask"));
    struct Params_ExitTask {
        AActor* OwnerActor; // 0x0
    }; // Size: 0x8
    Params_ExitTask params{};
    params.OwnerActor = (AActor*)OwnerActor;
    ProcessEvent(func, &params);
}
void UBTT_BipedUpper_OpenDoor_C::ReceiveExecute(AActor* OwnerActor) {
    static auto func = (UFunction*)(find_uobject("Function /Game/Pawn/Shared/StateTree/BTT_BipedUpper_OpenDoor.BTT_BipedUpper_OpenDoor_C.ReceiveExecute"));
    struct Params_ReceiveExecute {
        AActor* OwnerActor; // 0x0
    }; // Size: 0x8
    Params_ReceiveExecute params{};
    params.OwnerActor = (AActor*)OwnerActor;
    ProcessEvent(func, &params);
}
