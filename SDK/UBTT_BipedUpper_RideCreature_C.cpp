#include "AActor.hpp"
#include "FPointerToUberGraphFrame.hpp"
#include "FVariantMapHandle.hpp"
#include "UAnimInstance.hpp"
#include "UBTT_BipedUpper_RideCreature_C.hpp"
#include "UBTTask_AvaAITree_Input.hpp"
#include "UFunction.hpp"
UBTT_BipedUpper_RideCreature_C* UBTT_BipedUpper_RideCreature_C::StaticClass() {
    static auto res = find_uobject("BlueprintGeneratedClass /Game/Pawn/Shared/StateTree/BTT_BipedUpper_RideCreature.BTT_BipedUpper_RideCreature_C");
    return (UBTT_BipedUpper_RideCreature_C*)res;
}
void UBTT_BipedUpper_RideCreature_C::SetContexts(bool Flag) {
    static auto func = (UFunction*)(find_uobject("Function /Game/Pawn/Shared/StateTree/BTT_BipedUpper_RideCreature.BTT_BipedUpper_RideCreature_C.SetContexts"));
    struct Params_SetContexts {
        bool Flag; // 0x0
    }; // Size: 0x1
    Params_SetContexts params{};
    params.Flag = (bool)Flag;
    ProcessEvent(func, &params);
}
void UBTT_BipedUpper_RideCreature_C::CustActionEvt_DismountCreatureUpper_K2Node_BTCustomActionEvent_0(FVariantMapHandle VariantMapHandle) {
    static auto func = (UFunction*)(find_uobject("Function /Game/Pawn/Shared/StateTree/BTT_BipedUpper_RideCreature.BTT_BipedUpper_RideCreature_C.CustActionEvt_DismountCreatureUpper_K2Node_BTCustomActionEvent_0"));
    struct Params_CustActionEvt_DismountCreatureUpper_K2Node_BTCustomActionEvent_0 {
        FVariantMapHandle VariantMapHandle; // 0x0
    }; // Size: 0x4
    Params_CustActionEvt_DismountCreatureUpper_K2Node_BTCustomActionEvent_0 params{};
    params.VariantMapHandle = (FVariantMapHandle)VariantMapHandle;
    ProcessEvent(func, &params);
}
void UBTT_BipedUpper_RideCreature_C::ReceiveExecute(AActor* OwnerActor) {
    static auto func = (UFunction*)(find_uobject("Function /Game/Pawn/Shared/StateTree/BTT_BipedUpper_RideCreature.BTT_BipedUpper_RideCreature_C.ReceiveExecute"));
    struct Params_ReceiveExecute {
        AActor* OwnerActor; // 0x0
    }; // Size: 0x8
    Params_ReceiveExecute params{};
    params.OwnerActor = (AActor*)OwnerActor;
    ProcessEvent(func, &params);
}
void UBTT_BipedUpper_RideCreature_C::ExitTask(AActor* OwnerActor) {
    static auto func = (UFunction*)(find_uobject("Function /Game/Pawn/Shared/StateTree/BTT_BipedUpper_RideCreature.BTT_BipedUpper_RideCreature_C.ExitTask"));
    struct Params_ExitTask {
        AActor* OwnerActor; // 0x0
    }; // Size: 0x8
    Params_ExitTask params{};
    params.OwnerActor = (AActor*)OwnerActor;
    ProcessEvent(func, &params);
}
void UBTT_BipedUpper_RideCreature_C::ExecuteUbergraph_BTT_BipedUpper_RideCreature(int32_t EntryPoint, UAnimInstance* CallFunc_GetAnimInstance_ReturnValue) {}
