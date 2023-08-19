#include "AActor.hpp"
#include "ABiped_Player.hpp"
#include "AInventoryItemTool.hpp"
#include "FPointerToUberGraphFrame.hpp"
#include "FTimerHandle.hpp"
#include "FVariantMapHandle.hpp"
#include "UBTT_Biped_UseInventoryItem_C.hpp"
#include "UBTTask_AvaAITree_Input.hpp"
#include "UFunction.hpp"
UBTT_Biped_UseInventoryItem_C* UBTT_Biped_UseInventoryItem_C::StaticClass() {
    static auto res = find_uobject("BlueprintGeneratedClass /Game/Pawn/Shared/StateTree/BTT_Biped_UseInventoryItem.BTT_Biped_UseInventoryItem_C");
    return (UBTT_Biped_UseInventoryItem_C*)res;
}
void UBTT_Biped_UseInventoryItem_C::InpActEvt_Move_K2Node_CustomStickInputActionEvent_1(FVariantMapHandle VariantMapHandle) {
    static auto func = (UFunction*)(find_uobject("Function /Game/Pawn/Shared/StateTree/BTT_Biped_UseInventoryItem.BTT_Biped_UseInventoryItem_C.InpActEvt_Move_K2Node_CustomStickInputActionEvent_1"));
    struct Params_InpActEvt_Move_K2Node_CustomStickInputActionEvent_1 {
        FVariantMapHandle VariantMapHandle; // 0x0
    }; // Size: 0x4
    Params_InpActEvt_Move_K2Node_CustomStickInputActionEvent_1 params{};
    params.VariantMapHandle = (FVariantMapHandle)VariantMapHandle;
    ProcessEvent(func, &params);
}
void UBTT_Biped_UseInventoryItem_C::EndUsage(bool CallFunc_Greater_IntInt_ReturnValue, AActor* CallFunc_GetActorOwner_ReturnValue) {
    static auto func = (UFunction*)(find_uobject("Function /Game/Pawn/Shared/StateTree/BTT_Biped_UseInventoryItem.BTT_Biped_UseInventoryItem_C.EndUsage"));
    struct Params_EndUsage {
        bool CallFunc_Greater_IntInt_ReturnValue; // 0x0
        char pad_1[0x7];
        AActor* CallFunc_GetActorOwner_ReturnValue; // 0x8
    }; // Size: 0x10
    Params_EndUsage params{};
    params.CallFunc_Greater_IntInt_ReturnValue = (bool)CallFunc_Greater_IntInt_ReturnValue;
    params.CallFunc_GetActorOwner_ReturnValue = (AActor*)CallFunc_GetActorOwner_ReturnValue;
    ProcessEvent(func, &params);
}
void UBTT_Biped_UseInventoryItem_C::SetContexts(bool Flag) {
    static auto func = (UFunction*)(find_uobject("Function /Game/Pawn/Shared/StateTree/BTT_Biped_UseInventoryItem.BTT_Biped_UseInventoryItem_C.SetContexts"));
    struct Params_SetContexts {
        bool Flag; // 0x0
    }; // Size: 0x1
    Params_SetContexts params{};
    params.Flag = (bool)Flag;
    ProcessEvent(func, &params);
}
void UBTT_Biped_UseInventoryItem_C::InpActEvt_Move_K2Node_CustomStickInputActionEvent_2(FVariantMapHandle VariantMapHandle) {
    static auto func = (UFunction*)(find_uobject("Function /Game/Pawn/Shared/StateTree/BTT_Biped_UseInventoryItem.BTT_Biped_UseInventoryItem_C.InpActEvt_Move_K2Node_CustomStickInputActionEvent_2"));
    struct Params_InpActEvt_Move_K2Node_CustomStickInputActionEvent_2 {
        FVariantMapHandle VariantMapHandle; // 0x0
    }; // Size: 0x4
    Params_InpActEvt_Move_K2Node_CustomStickInputActionEvent_2 params{};
    params.VariantMapHandle = (FVariantMapHandle)VariantMapHandle;
    ProcessEvent(func, &params);
}
void UBTT_Biped_UseInventoryItem_C::CustActionEvt_ConsumeInventoryItem_K2Node_BTCustomActionEvent_6(FVariantMapHandle VariantMapHandle) {
    static auto func = (UFunction*)(find_uobject("Function /Game/Pawn/Shared/StateTree/BTT_Biped_UseInventoryItem.BTT_Biped_UseInventoryItem_C.CustActionEvt_ConsumeInventoryItem_K2Node_BTCustomActionEvent_6"));
    struct Params_CustActionEvt_ConsumeInventoryItem_K2Node_BTCustomActionEvent_6 {
        FVariantMapHandle VariantMapHandle; // 0x0
    }; // Size: 0x4
    Params_CustActionEvt_ConsumeInventoryItem_K2Node_BTCustomActionEvent_6 params{};
    params.VariantMapHandle = (FVariantMapHandle)VariantMapHandle;
    ProcessEvent(func, &params);
}
void UBTT_Biped_UseInventoryItem_C::MinTimerExpired() {
    static auto func = (UFunction*)(find_uobject("Function /Game/Pawn/Shared/StateTree/BTT_Biped_UseInventoryItem.BTT_Biped_UseInventoryItem_C.MinTimerExpired"));
    struct Params_MinTimerExpired {
    }; // Size: 0x0
    Params_MinTimerExpired params{};
    ProcessEvent(func, &params);
}
void UBTT_Biped_UseInventoryItem_C::CustActionEvt_AnimComplete_K2Node_BTCustomActionEvent_5(FVariantMapHandle VariantMapHandle) {
    static auto func = (UFunction*)(find_uobject("Function /Game/Pawn/Shared/StateTree/BTT_Biped_UseInventoryItem.BTT_Biped_UseInventoryItem_C.CustActionEvt_AnimComplete_K2Node_BTCustomActionEvent_5"));
    struct Params_CustActionEvt_AnimComplete_K2Node_BTCustomActionEvent_5 {
        FVariantMapHandle VariantMapHandle; // 0x0
    }; // Size: 0x4
    Params_CustActionEvt_AnimComplete_K2Node_BTCustomActionEvent_5 params{};
    params.VariantMapHandle = (FVariantMapHandle)VariantMapHandle;
    ProcessEvent(func, &params);
}
void UBTT_Biped_UseInventoryItem_C::CustActionEvt_UseInventoryItem_K2Node_BTCustomActionEvent_4(FVariantMapHandle VariantMapHandle) {
    static auto func = (UFunction*)(find_uobject("Function /Game/Pawn/Shared/StateTree/BTT_Biped_UseInventoryItem.BTT_Biped_UseInventoryItem_C.CustActionEvt_UseInventoryItem_K2Node_BTCustomActionEvent_4"));
    struct Params_CustActionEvt_UseInventoryItem_K2Node_BTCustomActionEvent_4 {
        FVariantMapHandle VariantMapHandle; // 0x0
    }; // Size: 0x4
    Params_CustActionEvt_UseInventoryItem_K2Node_BTCustomActionEvent_4 params{};
    params.VariantMapHandle = (FVariantMapHandle)VariantMapHandle;
    ProcessEvent(func, &params);
}
void UBTT_Biped_UseInventoryItem_C::CustActionEvt_UseInventoryItem_K2Node_BTCustomActionEvent_3(FVariantMapHandle VariantMapHandle) {
    static auto func = (UFunction*)(find_uobject("Function /Game/Pawn/Shared/StateTree/BTT_Biped_UseInventoryItem.BTT_Biped_UseInventoryItem_C.CustActionEvt_UseInventoryItem_K2Node_BTCustomActionEvent_3"));
    struct Params_CustActionEvt_UseInventoryItem_K2Node_BTCustomActionEvent_3 {
        FVariantMapHandle VariantMapHandle; // 0x0
    }; // Size: 0x4
    Params_CustActionEvt_UseInventoryItem_K2Node_BTCustomActionEvent_3 params{};
    params.VariantMapHandle = (FVariantMapHandle)VariantMapHandle;
    ProcessEvent(func, &params);
}
void UBTT_Biped_UseInventoryItem_C::InpActEvt_Move_K2Node_CustomStickInputActionEvent_0(FVariantMapHandle VariantMapHandle) {
    static auto func = (UFunction*)(find_uobject("Function /Game/Pawn/Shared/StateTree/BTT_Biped_UseInventoryItem.BTT_Biped_UseInventoryItem_C.InpActEvt_Move_K2Node_CustomStickInputActionEvent_0"));
    struct Params_InpActEvt_Move_K2Node_CustomStickInputActionEvent_0 {
        FVariantMapHandle VariantMapHandle; // 0x0
    }; // Size: 0x4
    Params_InpActEvt_Move_K2Node_CustomStickInputActionEvent_0 params{};
    params.VariantMapHandle = (FVariantMapHandle)VariantMapHandle;
    ProcessEvent(func, &params);
}
void UBTT_Biped_UseInventoryItem_C::CustActionEvt_InventoryItemEvent_K2Node_BTCustomActionEvent_2(FVariantMapHandle VariantMapHandle) {
    static auto func = (UFunction*)(find_uobject("Function /Game/Pawn/Shared/StateTree/BTT_Biped_UseInventoryItem.BTT_Biped_UseInventoryItem_C.CustActionEvt_InventoryItemEvent_K2Node_BTCustomActionEvent_2"));
    struct Params_CustActionEvt_InventoryItemEvent_K2Node_BTCustomActionEvent_2 {
        FVariantMapHandle VariantMapHandle; // 0x0
    }; // Size: 0x4
    Params_CustActionEvt_InventoryItemEvent_K2Node_BTCustomActionEvent_2 params{};
    params.VariantMapHandle = (FVariantMapHandle)VariantMapHandle;
    ProcessEvent(func, &params);
}
void UBTT_Biped_UseInventoryItem_C::CustActionEvt_DeathlyHallowsAction_K2Node_BTCustomActionEvent_1(FVariantMapHandle VariantMapHandle) {
    static auto func = (UFunction*)(find_uobject("Function /Game/Pawn/Shared/StateTree/BTT_Biped_UseInventoryItem.BTT_Biped_UseInventoryItem_C.CustActionEvt_DeathlyHallowsAction_K2Node_BTCustomActionEvent_1"));
    struct Params_CustActionEvt_DeathlyHallowsAction_K2Node_BTCustomActionEvent_1 {
        FVariantMapHandle VariantMapHandle; // 0x0
    }; // Size: 0x4
    Params_CustActionEvt_DeathlyHallowsAction_K2Node_BTCustomActionEvent_1 params{};
    params.VariantMapHandle = (FVariantMapHandle)VariantMapHandle;
    ProcessEvent(func, &params);
}
void UBTT_Biped_UseInventoryItem_C::CustActionEvt_InventoryItemCharged_K2Node_BTCustomActionEvent_0(FVariantMapHandle VariantMapHandle) {
    static auto func = (UFunction*)(find_uobject("Function /Game/Pawn/Shared/StateTree/BTT_Biped_UseInventoryItem.BTT_Biped_UseInventoryItem_C.CustActionEvt_InventoryItemCharged_K2Node_BTCustomActionEvent_0"));
    struct Params_CustActionEvt_InventoryItemCharged_K2Node_BTCustomActionEvent_0 {
        FVariantMapHandle VariantMapHandle; // 0x0
    }; // Size: 0x4
    Params_CustActionEvt_InventoryItemCharged_K2Node_BTCustomActionEvent_0 params{};
    params.VariantMapHandle = (FVariantMapHandle)VariantMapHandle;
    ProcessEvent(func, &params);
}
void UBTT_Biped_UseInventoryItem_C::ExitTask(AActor* OwnerActor) {
    static auto func = (UFunction*)(find_uobject("Function /Game/Pawn/Shared/StateTree/BTT_Biped_UseInventoryItem.BTT_Biped_UseInventoryItem_C.ExitTask"));
    struct Params_ExitTask {
        AActor* OwnerActor; // 0x0
    }; // Size: 0x8
    Params_ExitTask params{};
    params.OwnerActor = (AActor*)OwnerActor;
    ProcessEvent(func, &params);
}
void UBTT_Biped_UseInventoryItem_C::ReceiveTick(AActor* OwnerActor, float DeltaSeconds) {
    static auto func = (UFunction*)(find_uobject("Function /Game/Pawn/Shared/StateTree/BTT_Biped_UseInventoryItem.BTT_Biped_UseInventoryItem_C.ReceiveTick"));
    struct Params_ReceiveTick {
        AActor* OwnerActor; // 0x0
        float DeltaSeconds; // 0x8
    }; // Size: 0xc
    Params_ReceiveTick params{};
    params.OwnerActor = (AActor*)OwnerActor;
    params.DeltaSeconds = (float)DeltaSeconds;
    ProcessEvent(func, &params);
}
void UBTT_Biped_UseInventoryItem_C::ReceiveExecute(AActor* OwnerActor) {
    static auto func = (UFunction*)(find_uobject("Function /Game/Pawn/Shared/StateTree/BTT_Biped_UseInventoryItem.BTT_Biped_UseInventoryItem_C.ReceiveExecute"));
    struct Params_ReceiveExecute {
        AActor* OwnerActor; // 0x0
    }; // Size: 0x8
    Params_ReceiveExecute params{};
    params.OwnerActor = (AActor*)OwnerActor;
    ProcessEvent(func, &params);
}
void UBTT_Biped_UseInventoryItem_C::MaxTimerExpired() {
    static auto func = (UFunction*)(find_uobject("Function /Game/Pawn/Shared/StateTree/BTT_Biped_UseInventoryItem.BTT_Biped_UseInventoryItem_C.MaxTimerExpired"));
    struct Params_MaxTimerExpired {
    }; // Size: 0x0
    Params_MaxTimerExpired params{};
    ProcessEvent(func, &params);
}
void UBTT_Biped_UseInventoryItem_C::ExecuteUbergraph_BTT_Biped_UseInventoryItem(int32_t EntryPoint, FVariantMapHandle Temp_struct_Variable, AActor* CallFunc_GetActorOwner_ReturnValue, FVariantMapHandle K2Node_BTCustomActionEvent_VariantMapHandle_3, AActor* K2Node_Event_OwnerActor_2, ABiped_Player* K2Node_DynamicCast_AsBiped_Player, bool K2Node_DynamicCast_bSuccess) {}
