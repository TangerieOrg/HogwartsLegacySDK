#include "AActor.hpp"
#include "ABiped_Player.hpp"
#include "ASpellTool.hpp"
#include "ERightArmState\Type.hpp"
#include "FMunitionImpactData.hpp"
#include "FPointerToUberGraphFrame.hpp"
#include "FVariantMapHandle.hpp"
#include "UAmbulatory_AnimInstance.hpp"
#include "UAnimInstance.hpp"
#include "UBTT_BipedUpper_WandCast_C.hpp"
#include "UBTTask_AvaAITree_Input.hpp"
#include "UFunction.hpp"
#include "UObject.hpp"
UBTT_BipedUpper_WandCast_C* UBTT_BipedUpper_WandCast_C::StaticClass() {
    static auto res = find_uobject("BlueprintGeneratedClass /Game/Pawn/Shared/StateTree/BTT_BipedUpper_WandCast.BTT_BipedUpper_WandCast_C");
    return (UBTT_BipedUpper_WandCast_C*)res;
}
void UBTT_BipedUpper_WandCast_C::CustActionEvt_AnimCompletePartial_K2Node_BTCustomActionEvent_2(FVariantMapHandle VariantMapHandle) {
    static auto func = (UFunction*)(find_uobject("Function /Game/Pawn/Shared/StateTree/BTT_BipedUpper_WandCast.BTT_BipedUpper_WandCast_C.CustActionEvt_AnimCompletePartial_K2Node_BTCustomActionEvent_2"));
    struct Params_CustActionEvt_AnimCompletePartial_K2Node_BTCustomActionEvent_2 {
        FVariantMapHandle VariantMapHandle; // 0x0
    }; // Size: 0x4
    Params_CustActionEvt_AnimCompletePartial_K2Node_BTCustomActionEvent_2 params{};
    params.VariantMapHandle = (FVariantMapHandle)VariantMapHandle;
    ProcessEvent(func, &params);
}
void UBTT_BipedUpper_WandCast_C::FlushQueuedActions(AActor* InActor) {
    static auto func = (UFunction*)(find_uobject("Function /Game/Pawn/Shared/StateTree/BTT_BipedUpper_WandCast.BTT_BipedUpper_WandCast_C.FlushQueuedActions"));
    struct Params_FlushQueuedActions {
        AActor* InActor; // 0x0
    }; // Size: 0x8
    Params_FlushQueuedActions params{};
    params.InActor = (AActor*)InActor;
    ProcessEvent(func, &params);
}
void UBTT_BipedUpper_WandCast_C::StartWandAbility(AActor* InActor, ABiped_Player* K2Node_DynamicCast_AsBiped_Player, bool K2Node_DynamicCast_bSuccess, UAnimInstance* CallFunc_GetAnimInstance_ReturnValue) {}
void UBTT_BipedUpper_WandCast_C::SetTargetTrackers(AActor* InputPin) {
    static auto func = (UFunction*)(find_uobject("Function /Game/Pawn/Shared/StateTree/BTT_BipedUpper_WandCast.BTT_BipedUpper_WandCast_C.SetTargetTrackers"));
    struct Params_SetTargetTrackers {
        AActor* InputPin; // 0x0
    }; // Size: 0x8
    Params_SetTargetTrackers params{};
    params.InputPin = (AActor*)InputPin;
    ProcessEvent(func, &params);
}
void UBTT_BipedUpper_WandCast_C::SetContexts(bool Flag) {
    static auto func = (UFunction*)(find_uobject("Function /Game/Pawn/Shared/StateTree/BTT_BipedUpper_WandCast.BTT_BipedUpper_WandCast_C.SetContexts"));
    struct Params_SetContexts {
        bool Flag; // 0x0
    }; // Size: 0x1
    Params_SetContexts params{};
    params.Flag = (bool)Flag;
    ProcessEvent(func, &params);
}
void UBTT_BipedUpper_WandCast_C::CustActionEvt_ConjureMotionCommand_K2Node_BTCustomActionEvent_3(FVariantMapHandle VariantMapHandle) {
    static auto func = (UFunction*)(find_uobject("Function /Game/Pawn/Shared/StateTree/BTT_BipedUpper_WandCast.BTT_BipedUpper_WandCast_C.CustActionEvt_ConjureMotionCommand_K2Node_BTCustomActionEvent_3"));
    struct Params_CustActionEvt_ConjureMotionCommand_K2Node_BTCustomActionEvent_3 {
        FVariantMapHandle VariantMapHandle; // 0x0
    }; // Size: 0x4
    Params_CustActionEvt_ConjureMotionCommand_K2Node_BTCustomActionEvent_3 params{};
    params.VariantMapHandle = (FVariantMapHandle)VariantMapHandle;
    ProcessEvent(func, &params);
}
void UBTT_BipedUpper_WandCast_C::CustActionEvt_FireWandPartial_K2Node_BTCustomActionEvent_1(FVariantMapHandle VariantMapHandle) {
    static auto func = (UFunction*)(find_uobject("Function /Game/Pawn/Shared/StateTree/BTT_BipedUpper_WandCast.BTT_BipedUpper_WandCast_C.CustActionEvt_FireWandPartial_K2Node_BTCustomActionEvent_1"));
    struct Params_CustActionEvt_FireWandPartial_K2Node_BTCustomActionEvent_1 {
        FVariantMapHandle VariantMapHandle; // 0x0
    }; // Size: 0x4
    Params_CustActionEvt_FireWandPartial_K2Node_BTCustomActionEvent_1 params{};
    params.VariantMapHandle = (FVariantMapHandle)VariantMapHandle;
    ProcessEvent(func, &params);
}
void UBTT_BipedUpper_WandCast_C::CustActionEvt_FirePartialBodySpell_K2Node_BTCustomActionEvent_0(FVariantMapHandle VariantMapHandle) {
    static auto func = (UFunction*)(find_uobject("Function /Game/Pawn/Shared/StateTree/BTT_BipedUpper_WandCast.BTT_BipedUpper_WandCast_C.CustActionEvt_FirePartialBodySpell_K2Node_BTCustomActionEvent_0"));
    struct Params_CustActionEvt_FirePartialBodySpell_K2Node_BTCustomActionEvent_0 {
        FVariantMapHandle VariantMapHandle; // 0x0
    }; // Size: 0x4
    Params_CustActionEvt_FirePartialBodySpell_K2Node_BTCustomActionEvent_0 params{};
    params.VariantMapHandle = (FVariantMapHandle)VariantMapHandle;
    ProcessEvent(func, &params);
}
void UBTT_BipedUpper_WandCast_C::ExitTask(AActor* OwnerActor) {
    static auto func = (UFunction*)(find_uobject("Function /Game/Pawn/Shared/StateTree/BTT_BipedUpper_WandCast.BTT_BipedUpper_WandCast_C.ExitTask"));
    struct Params_ExitTask {
        AActor* OwnerActor; // 0x0
    }; // Size: 0x8
    Params_ExitTask params{};
    params.OwnerActor = (AActor*)OwnerActor;
    ProcessEvent(func, &params);
}
void UBTT_BipedUpper_WandCast_C::ReceiveExecute(AActor* OwnerActor) {
    static auto func = (UFunction*)(find_uobject("Function /Game/Pawn/Shared/StateTree/BTT_BipedUpper_WandCast.BTT_BipedUpper_WandCast_C.ReceiveExecute"));
    struct Params_ReceiveExecute {
        AActor* OwnerActor; // 0x0
    }; // Size: 0x8
    Params_ReceiveExecute params{};
    params.OwnerActor = (AActor*)OwnerActor;
    ProcessEvent(func, &params);
}
void UBTT_BipedUpper_WandCast_C::SpellMadeContact(UObject* Caller, FMunitionImpactData& MunitionImpactData) {
    static auto func = (UFunction*)(find_uobject("Function /Game/Pawn/Shared/StateTree/BTT_BipedUpper_WandCast.BTT_BipedUpper_WandCast_C.SpellMadeContact"));
    struct Params_SpellMadeContact {
        UObject* Caller; // 0x0
        FMunitionImpactData MunitionImpactData; // 0x8
    }; // Size: 0xf8
    Params_SpellMadeContact params{};
    params.Caller = (UObject*)Caller;
    params.MunitionImpactData = (FMunitionImpactData)MunitionImpactData;
    ProcessEvent(func, &params);
    MunitionImpactData = params.MunitionImpactData;
}
void UBTT_BipedUpper_WandCast_C::ExecuteUbergraph_BTT_BipedUpper_WandCast(int32_t EntryPoint, UAnimInstance* CallFunc_GetAnimInstance_ReturnValue, AActor* CallFunc_GetActorOwner_ReturnValue, UAmbulatory_AnimInstance* K2Node_DynamicCast_AsAmbulatory_Anim_Instance, bool K2Node_DynamicCast_bSuccess) {}
