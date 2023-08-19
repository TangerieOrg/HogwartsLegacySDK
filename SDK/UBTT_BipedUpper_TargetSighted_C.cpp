#include "AActor.hpp"
#include "FPointerToUberGraphFrame.hpp"
#include "FVariantMapHandle.hpp"
#include "UAISense.hpp"
#include "UAnimInstance.hpp"
#include "UBTT_BipedUpper_TargetSighted_C.hpp"
#include "UBTTask_AvaAITree_Input.hpp"
#include "UFunction.hpp"
UBTT_BipedUpper_TargetSighted_C* UBTT_BipedUpper_TargetSighted_C::StaticClass() {
    static auto res = find_uobject("BlueprintGeneratedClass /Game/Pawn/Shared/StateTree/BTT_BipedUpper_TargetSighted.BTT_BipedUpper_TargetSighted_C");
    return (UBTT_BipedUpper_TargetSighted_C*)res;
}
void UBTT_BipedUpper_TargetSighted_C::InpActEvt_InteractButton_K2Node_CustomInputActionEvent_0(FVariantMapHandle VariantMapHandle) {
    static auto func = (UFunction*)(find_uobject("Function /Game/Pawn/Shared/StateTree/BTT_BipedUpper_TargetSighted.BTT_BipedUpper_TargetSighted_C.InpActEvt_InteractButton_K2Node_CustomInputActionEvent_0"));
    struct Params_InpActEvt_InteractButton_K2Node_CustomInputActionEvent_0 {
        FVariantMapHandle VariantMapHandle; // 0x0
    }; // Size: 0x4
    Params_InpActEvt_InteractButton_K2Node_CustomInputActionEvent_0 params{};
    params.VariantMapHandle = (FVariantMapHandle)VariantMapHandle;
    ProcessEvent(func, &params);
}
void UBTT_BipedUpper_TargetSighted_C::ExitTask(AActor* OwnerActor) {
    static auto func = (UFunction*)(find_uobject("Function /Game/Pawn/Shared/StateTree/BTT_BipedUpper_TargetSighted.BTT_BipedUpper_TargetSighted_C.ExitTask"));
    struct Params_ExitTask {
        AActor* OwnerActor; // 0x0
    }; // Size: 0x8
    Params_ExitTask params{};
    params.OwnerActor = (AActor*)OwnerActor;
    ProcessEvent(func, &params);
}
void UBTT_BipedUpper_TargetSighted_C::ExecuteUbergraph_BTT_BipedUpper_TargetSighted(int32_t EntryPoint, UAnimInstance* CallFunc_GetAnimInstance_ReturnValue) {}
void UBTT_BipedUpper_TargetSighted_C::ReceiveExecute(AActor* OwnerActor) {
    static auto func = (UFunction*)(find_uobject("Function /Game/Pawn/Shared/StateTree/BTT_BipedUpper_TargetSighted.BTT_BipedUpper_TargetSighted_C.ReceiveExecute"));
    struct Params_ReceiveExecute {
        AActor* OwnerActor; // 0x0
    }; // Size: 0x8
    Params_ReceiveExecute params{};
    params.OwnerActor = (AActor*)OwnerActor;
    ProcessEvent(func, &params);
}
void UBTT_BipedUpper_TargetSighted_C::TSighted(UAISense* Sense, AActor* Target) {
    static auto func = (UFunction*)(find_uobject("Function /Game/Pawn/Shared/StateTree/BTT_BipedUpper_TargetSighted.BTT_BipedUpper_TargetSighted_C.TSighted"));
    struct Params_TSighted {
        UAISense* Sense; // 0x0
        AActor* Target; // 0x8
    }; // Size: 0x10
    Params_TSighted params{};
    params.Sense = (UAISense*)Sense;
    params.Target = (AActor*)Target;
    ProcessEvent(func, &params);
}
void UBTT_BipedUpper_TargetSighted_C::TLost(UAISense* Sense, AActor* OldTarget) {
    static auto func = (UFunction*)(find_uobject("Function /Game/Pawn/Shared/StateTree/BTT_BipedUpper_TargetSighted.BTT_BipedUpper_TargetSighted_C.TLost"));
    struct Params_TLost {
        UAISense* Sense; // 0x0
        AActor* OldTarget; // 0x8
    }; // Size: 0x10
    Params_TLost params{};
    params.Sense = (UAISense*)Sense;
    params.OldTarget = (AActor*)OldTarget;
    ProcessEvent(func, &params);
}
void UBTT_BipedUpper_TargetSighted_C::TChanged(UAISense* Sense, AActor* NewTarget, AActor* OldTarget) {
    static auto func = (UFunction*)(find_uobject("Function /Game/Pawn/Shared/StateTree/BTT_BipedUpper_TargetSighted.BTT_BipedUpper_TargetSighted_C.TChanged"));
    struct Params_TChanged {
        UAISense* Sense; // 0x0
        AActor* NewTarget; // 0x8
        AActor* OldTarget; // 0x10
    }; // Size: 0x18
    Params_TChanged params{};
    params.Sense = (UAISense*)Sense;
    params.NewTarget = (AActor*)NewTarget;
    params.OldTarget = (AActor*)OldTarget;
    ProcessEvent(func, &params);
}
