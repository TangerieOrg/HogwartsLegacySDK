#include "AActor.hpp"
#include "ABiped_Player.hpp"
#include "ACharacter.hpp"
#include "FPointerToUberGraphFrame.hpp"
#include "FRotator.hpp"
#include "FVariantMapHandle.hpp"
#include "FVector.hpp"
#include "UAnimInstance.hpp"
#include "UBTT_Biped_ShadowBlinkAOE_C.hpp"
#include "UBTTask_AvaAITree_Input.hpp"
#include "UClass.hpp"
#include "UFunction.hpp"
void UBTT_Biped_ShadowBlinkAOE_C::FallingTest(bool& Falling, AActor* CallFunc_GetActorOwner_ReturnValue, ACharacter* K2Node_DynamicCast_AsCharacter, bool K2Node_DynamicCast_bSuccess) {}
UBTT_Biped_ShadowBlinkAOE_C* UBTT_Biped_ShadowBlinkAOE_C::StaticClass() {
    static auto res = find_uobject("BlueprintGeneratedClass /Game/Pawn/Shared/StateTree/BTT_Biped_ShadowBlinkAOE.BTT_Biped_ShadowBlinkAOE_C");
    return (UBTT_Biped_ShadowBlinkAOE_C*)res;
}
void UBTT_Biped_ShadowBlinkAOE_C::CustActionEvt_AnimComplete_K2Node_BTCustomActionEvent_1(FVariantMapHandle VariantMapHandle) {
    static auto func = (UFunction*)(find_uobject("Function /Game/Pawn/Shared/StateTree/BTT_Biped_ShadowBlinkAOE.BTT_Biped_ShadowBlinkAOE_C.CustActionEvt_AnimComplete_K2Node_BTCustomActionEvent_1"));
    struct Params_CustActionEvt_AnimComplete_K2Node_BTCustomActionEvent_1 {
        FVariantMapHandle VariantMapHandle; // 0x0
    }; // Size: 0x4
    Params_CustActionEvt_AnimComplete_K2Node_BTCustomActionEvent_1 params{};
    params.VariantMapHandle = (FVariantMapHandle)VariantMapHandle;
    ProcessEvent(func, &params);
}
void UBTT_Biped_ShadowBlinkAOE_C::ReceiveExecute(AActor* OwnerActor) {
    static auto func = (UFunction*)(find_uobject("Function /Game/Pawn/Shared/StateTree/BTT_Biped_ShadowBlinkAOE.BTT_Biped_ShadowBlinkAOE_C.ReceiveExecute"));
    struct Params_ReceiveExecute {
        AActor* OwnerActor; // 0x0
    }; // Size: 0x8
    Params_ReceiveExecute params{};
    params.OwnerActor = (AActor*)OwnerActor;
    ProcessEvent(func, &params);
}
void UBTT_Biped_ShadowBlinkAOE_C::InpActEvt_Move_K2Node_CustomStickInputActionEvent_0(FVariantMapHandle VariantMapHandle) {
    static auto func = (UFunction*)(find_uobject("Function /Game/Pawn/Shared/StateTree/BTT_Biped_ShadowBlinkAOE.BTT_Biped_ShadowBlinkAOE_C.InpActEvt_Move_K2Node_CustomStickInputActionEvent_0"));
    struct Params_InpActEvt_Move_K2Node_CustomStickInputActionEvent_0 {
        FVariantMapHandle VariantMapHandle; // 0x0
    }; // Size: 0x4
    Params_InpActEvt_Move_K2Node_CustomStickInputActionEvent_0 params{};
    params.VariantMapHandle = (FVariantMapHandle)VariantMapHandle;
    ProcessEvent(func, &params);
}
void UBTT_Biped_ShadowBlinkAOE_C::CustActionEvt_FireWand_K2Node_BTCustomActionEvent_0(FVariantMapHandle VariantMapHandle) {
    static auto func = (UFunction*)(find_uobject("Function /Game/Pawn/Shared/StateTree/BTT_Biped_ShadowBlinkAOE.BTT_Biped_ShadowBlinkAOE_C.CustActionEvt_FireWand_K2Node_BTCustomActionEvent_0"));
    struct Params_CustActionEvt_FireWand_K2Node_BTCustomActionEvent_0 {
        FVariantMapHandle VariantMapHandle; // 0x0
    }; // Size: 0x4
    Params_CustActionEvt_FireWand_K2Node_BTCustomActionEvent_0 params{};
    params.VariantMapHandle = (FVariantMapHandle)VariantMapHandle;
    ProcessEvent(func, &params);
}
void UBTT_Biped_ShadowBlinkAOE_C::ReceiveTick(AActor* OwnerActor, float DeltaSeconds) {
    static auto func = (UFunction*)(find_uobject("Function /Game/Pawn/Shared/StateTree/BTT_Biped_ShadowBlinkAOE.BTT_Biped_ShadowBlinkAOE_C.ReceiveTick"));
    struct Params_ReceiveTick {
        AActor* OwnerActor; // 0x0
        float DeltaSeconds; // 0x8
    }; // Size: 0xc
    Params_ReceiveTick params{};
    params.OwnerActor = (AActor*)OwnerActor;
    params.DeltaSeconds = (float)DeltaSeconds;
    ProcessEvent(func, &params);
}
void UBTT_Biped_ShadowBlinkAOE_C::ExitTask(AActor* OwnerActor) {
    static auto func = (UFunction*)(find_uobject("Function /Game/Pawn/Shared/StateTree/BTT_Biped_ShadowBlinkAOE.BTT_Biped_ShadowBlinkAOE_C.ExitTask"));
    struct Params_ExitTask {
        AActor* OwnerActor; // 0x0
    }; // Size: 0x8
    Params_ExitTask params{};
    params.OwnerActor = (AActor*)OwnerActor;
    ProcessEvent(func, &params);
}
void UBTT_Biped_ShadowBlinkAOE_C::ExecuteUbergraph_BTT_Biped_ShadowBlinkAOE(int32_t EntryPoint, AActor* K2Node_Event_OwnerActor_2, float K2Node_Event_DeltaSeconds, UAnimInstance* CallFunc_GetAnimInstance_ReturnValue, ABiped_Player* K2Node_DynamicCast_AsBiped_Player, bool K2Node_DynamicCast_bSuccess) {}
