#include "AActor.hpp"
#include "AAmbulatory_Character.hpp"
#include "ABiped_Player.hpp"
#include "ABiped_PlayerController.hpp"
#include "AController.hpp"
#include "ERespawnReason.hpp"
#include "FPointerToUberGraphFrame.hpp"
#include "FVariantMapHandle.hpp"
#include "FVector.hpp"
#include "UAnimInstance.hpp"
#include "UBTT_Biped_Idle_C.hpp"
#include "UBTTask_AvaAITree_Input.hpp"
#include "UBlackboardComponent.hpp"
#include "UClass.hpp"
#include "UCurveFloat.hpp"
#include "UFunction.hpp"
#include "UUIManager.hpp"
void UBTT_Biped_Idle_C::InpActEvt_Move_K2Node_CustomStickInputActionEvent_0(FVariantMapHandle VariantMapHandle) {
    static auto func = (UFunction*)(find_uobject("Function /Game/Pawn/Shared/StateTree/BTT_Biped_Idle.BTT_Biped_Idle_C.InpActEvt_Move_K2Node_CustomStickInputActionEvent_0"));
    struct Params_InpActEvt_Move_K2Node_CustomStickInputActionEvent_0 {
        FVariantMapHandle VariantMapHandle; // 0x0
    }; // Size: 0x4
    Params_InpActEvt_Move_K2Node_CustomStickInputActionEvent_0 params{};
    params.VariantMapHandle = (FVariantMapHandle)VariantMapHandle;
    ProcessEvent(func, &params);
}
UBTT_Biped_Idle_C* UBTT_Biped_Idle_C::StaticClass() {
    static auto res = find_uobject("BlueprintGeneratedClass /Game/Pawn/Shared/StateTree/BTT_Biped_Idle.BTT_Biped_Idle_C");
    return (UBTT_Biped_Idle_C*)res;
}
void UBTT_Biped_Idle_C::Stop(AAmbulatory_Character* AmbulatoryCharacter) {
    static auto func = (UFunction*)(find_uobject("Function /Game/Pawn/Shared/StateTree/BTT_Biped_Idle.BTT_Biped_Idle_C.Stop"));
    struct Params_Stop {
        AAmbulatory_Character* AmbulatoryCharacter; // 0x0
    }; // Size: 0x8
    Params_Stop params{};
    params.AmbulatoryCharacter = (AAmbulatory_Character*)AmbulatoryCharacter;
    ProcessEvent(func, &params);
}
void UBTT_Biped_Idle_C::ExecuteWorldStartAbility(ERespawnReason RespawnReason, UClass* AbilityClass, ABiped_Player* CallFunc_GetTheBipedPlayer_ReturnValue, bool CallFunc_GetIsOnAMountOrInTransition_ReturnValue, bool CallFunc_Not_PreBool_ReturnValue, UUIManager* CallFunc_Get_ReturnValue, FString CallFunc_GetPlayerHouse_ReturnValue, bool K2Node_SwitchEnum_CmpSuccess, bool K2Node_SwitchString_CmpSuccess, FName CallFunc_MakeLiteralName_ReturnValue, UBlackboardComponent* CallFunc_GetBlackboardComponent_ReturnValue, ABiped_Player* CallFunc_GetTheBipedPlayer_ReturnValue_1) {}
void UBTT_Biped_Idle_C::ReceiveExecute(AActor* OwnerActor) {
    static auto func = (UFunction*)(find_uobject("Function /Game/Pawn/Shared/StateTree/BTT_Biped_Idle.BTT_Biped_Idle_C.ReceiveExecute"));
    struct Params_ReceiveExecute {
        AActor* OwnerActor; // 0x0
    }; // Size: 0x8
    Params_ReceiveExecute params{};
    params.OwnerActor = (AActor*)OwnerActor;
    ProcessEvent(func, &params);
}
void UBTT_Biped_Idle_C::InpActEvt_Move_K2Node_CustomStickInputActionEvent_1(FVariantMapHandle VariantMapHandle) {
    static auto func = (UFunction*)(find_uobject("Function /Game/Pawn/Shared/StateTree/BTT_Biped_Idle.BTT_Biped_Idle_C.InpActEvt_Move_K2Node_CustomStickInputActionEvent_1"));
    struct Params_InpActEvt_Move_K2Node_CustomStickInputActionEvent_1 {
        FVariantMapHandle VariantMapHandle; // 0x0
    }; // Size: 0x4
    Params_InpActEvt_Move_K2Node_CustomStickInputActionEvent_1 params{};
    params.VariantMapHandle = (FVariantMapHandle)VariantMapHandle;
    ProcessEvent(func, &params);
}
void UBTT_Biped_Idle_C::InpActEvt_Move_K2Node_CustomStickInputActionEvent_2(FVariantMapHandle VariantMapHandle) {
    static auto func = (UFunction*)(find_uobject("Function /Game/Pawn/Shared/StateTree/BTT_Biped_Idle.BTT_Biped_Idle_C.InpActEvt_Move_K2Node_CustomStickInputActionEvent_2"));
    struct Params_InpActEvt_Move_K2Node_CustomStickInputActionEvent_2 {
        FVariantMapHandle VariantMapHandle; // 0x0
    }; // Size: 0x4
    Params_InpActEvt_Move_K2Node_CustomStickInputActionEvent_2 params{};
    params.VariantMapHandle = (FVariantMapHandle)VariantMapHandle;
    ProcessEvent(func, &params);
}
void UBTT_Biped_Idle_C::ExitTask(AActor* OwnerActor) {
    static auto func = (UFunction*)(find_uobject("Function /Game/Pawn/Shared/StateTree/BTT_Biped_Idle.BTT_Biped_Idle_C.ExitTask"));
    struct Params_ExitTask {
        AActor* OwnerActor; // 0x0
    }; // Size: 0x8
    Params_ExitTask params{};
    params.OwnerActor = (AActor*)OwnerActor;
    ProcessEvent(func, &params);
}
void UBTT_Biped_Idle_C::ReceiveTick(AActor* OwnerActor, float DeltaSeconds) {
    static auto func = (UFunction*)(find_uobject("Function /Game/Pawn/Shared/StateTree/BTT_Biped_Idle.BTT_Biped_Idle_C.ReceiveTick"));
    struct Params_ReceiveTick {
        AActor* OwnerActor; // 0x0
        float DeltaSeconds; // 0x8
    }; // Size: 0xc
    Params_ReceiveTick params{};
    params.OwnerActor = (AActor*)OwnerActor;
    params.DeltaSeconds = (float)DeltaSeconds;
    ProcessEvent(func, &params);
}
void UBTT_Biped_Idle_C::LeafNodeSwitchRequested() {
    static auto func = (UFunction*)(find_uobject("Function /Game/Pawn/Shared/StateTree/BTT_Biped_Idle.BTT_Biped_Idle_C.LeafNodeSwitchRequested"));
    struct Params_LeafNodeSwitchRequested {
    }; // Size: 0x0
    Params_LeafNodeSwitchRequested params{};
    ProcessEvent(func, &params);
}
void UBTT_Biped_Idle_C::ExecuteUbergraph_BTT_Biped_Idle(int32_t EntryPoint, ABiped_Player* CallFunc_GetTheBipedPlayer_ReturnValue, AActor* CallFunc_GetActorOwner_ReturnValue, ABiped_Player* K2Node_DynamicCast_AsBiped_Player, bool K2Node_DynamicCast_bSuccess, AActor* CallFunc_GetActorOwner_ReturnValue_1, ABiped_Player* K2Node_DynamicCast_AsBiped_Player_1, bool K2Node_DynamicCast_bSuccess_1, AController* CallFunc_GetController_ReturnValue, ABiped_PlayerController* K2Node_DynamicCast_AsBiped_Player_Controller, bool K2Node_DynamicCast_bSuccess_2, float CallFunc_GetMoveStickValues_X, float CallFunc_GetMoveStickValues_Y, bool CallFunc_GetSpeedCurve_bIgnoreGovernor, UCurveFloat* CallFunc_GetSpeedCurve_ReturnValue, float CallFunc_GetWorldDeltaSeconds_ReturnValue, bool CallFunc_AllowMove_ReturnValue, UAnimInstance* CallFunc_GetAnimInstance_ReturnValue) {}
