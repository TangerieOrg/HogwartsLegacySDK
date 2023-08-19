#include "AActor.hpp"
#include "ABiped_Player.hpp"
#include "ALumosSpellTool.hpp"
#include "AWandTool.hpp"
#include "FPointerToUberGraphFrame.hpp"
#include "FTimerHandle.hpp"
#include "FVariantMapHandle.hpp"
#include "UBTS_BipedUpper_TopLevel_C.hpp"
#include "UBTService_AvaAITree_Input.hpp"
#include "UFunction.hpp"
#include "UObject.hpp"
UBTS_BipedUpper_TopLevel_C* UBTS_BipedUpper_TopLevel_C::StaticClass() {
    static auto res = find_uobject("BlueprintGeneratedClass /Game/Pawn/Shared/StateTree/BTS_BipedUpper_TopLevel.BTS_BipedUpper_TopLevel_C");
    return (UBTS_BipedUpper_TopLevel_C*)res;
}
void UBTS_BipedUpper_TopLevel_C::CustActionEvt_UseInventoryItemUpper_K2Node_BTCustomActionEvent_7(FVariantMapHandle VariantMapHandle) {
    static auto func = (UFunction*)(find_uobject("Function /Game/Pawn/Shared/StateTree/BTS_BipedUpper_TopLevel.BTS_BipedUpper_TopLevel_C.CustActionEvt_UseInventoryItemUpper_K2Node_BTCustomActionEvent_7"));
    struct Params_CustActionEvt_UseInventoryItemUpper_K2Node_BTCustomActionEvent_7 {
        FVariantMapHandle VariantMapHandle; // 0x0
    }; // Size: 0x4
    Params_CustActionEvt_UseInventoryItemUpper_K2Node_BTCustomActionEvent_7 params{};
    params.VariantMapHandle = (FVariantMapHandle)VariantMapHandle;
    ProcessEvent(func, &params);
}
void UBTS_BipedUpper_TopLevel_C::Flush_Queued_Actions(ABiped_Player* CallFunc_GetTheBipedPlayer_ReturnValue) {
    static auto func = (UFunction*)(find_uobject("Function /Game/Pawn/Shared/StateTree/BTS_BipedUpper_TopLevel.BTS_BipedUpper_TopLevel_C.Flush Queued Actions"));
    struct Params_Flush_Queued_Actions {
        ABiped_Player* CallFunc_GetTheBipedPlayer_ReturnValue; // 0x0
    }; // Size: 0x8
    Params_Flush_Queued_Actions params{};
    params.CallFunc_GetTheBipedPlayer_ReturnValue = (ABiped_Player*)CallFunc_GetTheBipedPlayer_ReturnValue;
    ProcessEvent(func, &params);
}
void UBTS_BipedUpper_TopLevel_C::CustActionEvt_EquipBucket_K2Node_BTCustomActionEvent_12(FVariantMapHandle VariantMapHandle) {
    static auto func = (UFunction*)(find_uobject("Function /Game/Pawn/Shared/StateTree/BTS_BipedUpper_TopLevel.BTS_BipedUpper_TopLevel_C.CustActionEvt_EquipBucket_K2Node_BTCustomActionEvent_12"));
    struct Params_CustActionEvt_EquipBucket_K2Node_BTCustomActionEvent_12 {
        FVariantMapHandle VariantMapHandle; // 0x0
    }; // Size: 0x4
    Params_CustActionEvt_EquipBucket_K2Node_BTCustomActionEvent_12 params{};
    params.VariantMapHandle = (FVariantMapHandle)VariantMapHandle;
    ProcessEvent(func, &params);
}
void UBTS_BipedUpper_TopLevel_C::CustActionEvt_TriggerWaving_K2Node_BTCustomActionEvent_8(FVariantMapHandle VariantMapHandle) {
    static auto func = (UFunction*)(find_uobject("Function /Game/Pawn/Shared/StateTree/BTS_BipedUpper_TopLevel.BTS_BipedUpper_TopLevel_C.CustActionEvt_TriggerWaving_K2Node_BTCustomActionEvent_8"));
    struct Params_CustActionEvt_TriggerWaving_K2Node_BTCustomActionEvent_8 {
        FVariantMapHandle VariantMapHandle; // 0x0
    }; // Size: 0x4
    Params_CustActionEvt_TriggerWaving_K2Node_BTCustomActionEvent_8 params{};
    params.VariantMapHandle = (FVariantMapHandle)VariantMapHandle;
    ProcessEvent(func, &params);
}
void UBTS_BipedUpper_TopLevel_C::CustActionEvt_SpellButtonPartial_K2Node_BTCustomActionEvent_11(FVariantMapHandle VariantMapHandle) {
    static auto func = (UFunction*)(find_uobject("Function /Game/Pawn/Shared/StateTree/BTS_BipedUpper_TopLevel.BTS_BipedUpper_TopLevel_C.CustActionEvt_SpellButtonPartial_K2Node_BTCustomActionEvent_11"));
    struct Params_CustActionEvt_SpellButtonPartial_K2Node_BTCustomActionEvent_11 {
        FVariantMapHandle VariantMapHandle; // 0x0
    }; // Size: 0x4
    Params_CustActionEvt_SpellButtonPartial_K2Node_BTCustomActionEvent_11 params{};
    params.VariantMapHandle = (FVariantMapHandle)VariantMapHandle;
    ProcessEvent(func, &params);
}
void UBTS_BipedUpper_TopLevel_C::CustActionEvt_SpellButtonPartial_K2Node_BTCustomActionEvent_10(FVariantMapHandle VariantMapHandle) {
    static auto func = (UFunction*)(find_uobject("Function /Game/Pawn/Shared/StateTree/BTS_BipedUpper_TopLevel.BTS_BipedUpper_TopLevel_C.CustActionEvt_SpellButtonPartial_K2Node_BTCustomActionEvent_10"));
    struct Params_CustActionEvt_SpellButtonPartial_K2Node_BTCustomActionEvent_10 {
        FVariantMapHandle VariantMapHandle; // 0x0
    }; // Size: 0x4
    Params_CustActionEvt_SpellButtonPartial_K2Node_BTCustomActionEvent_10 params{};
    params.VariantMapHandle = (FVariantMapHandle)VariantMapHandle;
    ProcessEvent(func, &params);
}
void UBTS_BipedUpper_TopLevel_C::CustActionEvt_SpellButtonPartial_K2Node_BTCustomActionEvent_9(FVariantMapHandle VariantMapHandle) {
    static auto func = (UFunction*)(find_uobject("Function /Game/Pawn/Shared/StateTree/BTS_BipedUpper_TopLevel.BTS_BipedUpper_TopLevel_C.CustActionEvt_SpellButtonPartial_K2Node_BTCustomActionEvent_9"));
    struct Params_CustActionEvt_SpellButtonPartial_K2Node_BTCustomActionEvent_9 {
        FVariantMapHandle VariantMapHandle; // 0x0
    }; // Size: 0x4
    Params_CustActionEvt_SpellButtonPartial_K2Node_BTCustomActionEvent_9 params{};
    params.VariantMapHandle = (FVariantMapHandle)VariantMapHandle;
    ProcessEvent(func, &params);
}
void UBTS_BipedUpper_TopLevel_C::CustActionEvt_PerformCallOut_K2Node_BTCustomActionEvent_6(FVariantMapHandle VariantMapHandle) {
    static auto func = (UFunction*)(find_uobject("Function /Game/Pawn/Shared/StateTree/BTS_BipedUpper_TopLevel.BTS_BipedUpper_TopLevel_C.CustActionEvt_PerformCallOut_K2Node_BTCustomActionEvent_6"));
    struct Params_CustActionEvt_PerformCallOut_K2Node_BTCustomActionEvent_6 {
        FVariantMapHandle VariantMapHandle; // 0x0
    }; // Size: 0x4
    Params_CustActionEvt_PerformCallOut_K2Node_BTCustomActionEvent_6 params{};
    params.VariantMapHandle = (FVariantMapHandle)VariantMapHandle;
    ProcessEvent(func, &params);
}
void UBTS_BipedUpper_TopLevel_C::CustActionEvt_Lumos_K2Node_BTCustomActionEvent_5(FVariantMapHandle VariantMapHandle) {
    static auto func = (UFunction*)(find_uobject("Function /Game/Pawn/Shared/StateTree/BTS_BipedUpper_TopLevel.BTS_BipedUpper_TopLevel_C.CustActionEvt_Lumos_K2Node_BTCustomActionEvent_5"));
    struct Params_CustActionEvt_Lumos_K2Node_BTCustomActionEvent_5 {
        FVariantMapHandle VariantMapHandle; // 0x0
    }; // Size: 0x4
    Params_CustActionEvt_Lumos_K2Node_BTCustomActionEvent_5 params{};
    params.VariantMapHandle = (FVariantMapHandle)VariantMapHandle;
    ProcessEvent(func, &params);
}
void UBTS_BipedUpper_TopLevel_C::CustActionEvt_Lumos_K2Node_BTCustomActionEvent_4(FVariantMapHandle VariantMapHandle) {
    static auto func = (UFunction*)(find_uobject("Function /Game/Pawn/Shared/StateTree/BTS_BipedUpper_TopLevel.BTS_BipedUpper_TopLevel_C.CustActionEvt_Lumos_K2Node_BTCustomActionEvent_4"));
    struct Params_CustActionEvt_Lumos_K2Node_BTCustomActionEvent_4 {
        FVariantMapHandle VariantMapHandle; // 0x0
    }; // Size: 0x4
    Params_CustActionEvt_Lumos_K2Node_BTCustomActionEvent_4 params{};
    params.VariantMapHandle = (FVariantMapHandle)VariantMapHandle;
    ProcessEvent(func, &params);
}
void UBTS_BipedUpper_TopLevel_C::CustActionEvt_Lumos_K2Node_BTCustomActionEvent_3(FVariantMapHandle VariantMapHandle) {
    static auto func = (UFunction*)(find_uobject("Function /Game/Pawn/Shared/StateTree/BTS_BipedUpper_TopLevel.BTS_BipedUpper_TopLevel_C.CustActionEvt_Lumos_K2Node_BTCustomActionEvent_3"));
    struct Params_CustActionEvt_Lumos_K2Node_BTCustomActionEvent_3 {
        FVariantMapHandle VariantMapHandle; // 0x0
    }; // Size: 0x4
    Params_CustActionEvt_Lumos_K2Node_BTCustomActionEvent_3 params{};
    params.VariantMapHandle = (FVariantMapHandle)VariantMapHandle;
    ProcessEvent(func, &params);
}
void UBTS_BipedUpper_TopLevel_C::CustActionEvt_OpenDoorLeftUpper_K2Node_BTCustomActionEvent_2(FVariantMapHandle VariantMapHandle) {
    static auto func = (UFunction*)(find_uobject("Function /Game/Pawn/Shared/StateTree/BTS_BipedUpper_TopLevel.BTS_BipedUpper_TopLevel_C.CustActionEvt_OpenDoorLeftUpper_K2Node_BTCustomActionEvent_2"));
    struct Params_CustActionEvt_OpenDoorLeftUpper_K2Node_BTCustomActionEvent_2 {
        FVariantMapHandle VariantMapHandle; // 0x0
    }; // Size: 0x4
    Params_CustActionEvt_OpenDoorLeftUpper_K2Node_BTCustomActionEvent_2 params{};
    params.VariantMapHandle = (FVariantMapHandle)VariantMapHandle;
    ProcessEvent(func, &params);
}
void UBTS_BipedUpper_TopLevel_C::CustActionEvt_OpenDoorRightUpper_K2Node_BTCustomActionEvent_1(FVariantMapHandle VariantMapHandle) {
    static auto func = (UFunction*)(find_uobject("Function /Game/Pawn/Shared/StateTree/BTS_BipedUpper_TopLevel.BTS_BipedUpper_TopLevel_C.CustActionEvt_OpenDoorRightUpper_K2Node_BTCustomActionEvent_1"));
    struct Params_CustActionEvt_OpenDoorRightUpper_K2Node_BTCustomActionEvent_1 {
        FVariantMapHandle VariantMapHandle; // 0x0
    }; // Size: 0x4
    Params_CustActionEvt_OpenDoorRightUpper_K2Node_BTCustomActionEvent_1 params{};
    params.VariantMapHandle = (FVariantMapHandle)VariantMapHandle;
    ProcessEvent(func, &params);
}
void UBTS_BipedUpper_TopLevel_C::CustActionEvt_Looting_K2Node_BTCustomActionEvent_0(FVariantMapHandle VariantMapHandle) {
    static auto func = (UFunction*)(find_uobject("Function /Game/Pawn/Shared/StateTree/BTS_BipedUpper_TopLevel.BTS_BipedUpper_TopLevel_C.CustActionEvt_Looting_K2Node_BTCustomActionEvent_0"));
    struct Params_CustActionEvt_Looting_K2Node_BTCustomActionEvent_0 {
        FVariantMapHandle VariantMapHandle; // 0x0
    }; // Size: 0x4
    Params_CustActionEvt_Looting_K2Node_BTCustomActionEvent_0 params{};
    params.VariantMapHandle = (FVariantMapHandle)VariantMapHandle;
    ProcessEvent(func, &params);
}
void UBTS_BipedUpper_TopLevel_C::ServiceBegin(AActor* OwnerActor) {
    static auto func = (UFunction*)(find_uobject("Function /Game/Pawn/Shared/StateTree/BTS_BipedUpper_TopLevel.BTS_BipedUpper_TopLevel_C.ServiceBegin"));
    struct Params_ServiceBegin {
        AActor* OwnerActor; // 0x0
    }; // Size: 0x8
    Params_ServiceBegin params{};
    params.OwnerActor = (AActor*)OwnerActor;
    ProcessEvent(func, &params);
}
void UBTS_BipedUpper_TopLevel_C::ServiceEnd(AActor* OwnerActor) {
    static auto func = (UFunction*)(find_uobject("Function /Game/Pawn/Shared/StateTree/BTS_BipedUpper_TopLevel.BTS_BipedUpper_TopLevel_C.ServiceEnd"));
    struct Params_ServiceEnd {
        AActor* OwnerActor; // 0x0
    }; // Size: 0x8
    Params_ServiceEnd params{};
    params.OwnerActor = (AActor*)OwnerActor;
    ProcessEvent(func, &params);
}
void UBTS_BipedUpper_TopLevel_C::InTwoHandCarry(UObject* Caller) {
    static auto func = (UFunction*)(find_uobject("Function /Game/Pawn/Shared/StateTree/BTS_BipedUpper_TopLevel.BTS_BipedUpper_TopLevel_C.InTwoHandCarry"));
    struct Params_InTwoHandCarry {
        UObject* Caller; // 0x0
    }; // Size: 0x8
    Params_InTwoHandCarry params{};
    params.Caller = (UObject*)Caller;
    ProcessEvent(func, &params);
}
void UBTS_BipedUpper_TopLevel_C::DoneWaving(UObject* Caller) {
    static auto func = (UFunction*)(find_uobject("Function /Game/Pawn/Shared/StateTree/BTS_BipedUpper_TopLevel.BTS_BipedUpper_TopLevel_C.DoneWaving"));
    struct Params_DoneWaving {
        UObject* Caller; // 0x0
    }; // Size: 0x8
    Params_DoneWaving params{};
    params.Caller = (UObject*)Caller;
    ProcessEvent(func, &params);
}
void UBTS_BipedUpper_TopLevel_C::FireLumos() {
    static auto func = (UFunction*)(find_uobject("Function /Game/Pawn/Shared/StateTree/BTS_BipedUpper_TopLevel.BTS_BipedUpper_TopLevel_C.FireLumos"));
    struct Params_FireLumos {
    }; // Size: 0x0
    Params_FireLumos params{};
    ProcessEvent(func, &params);
}
void UBTS_BipedUpper_TopLevel_C::ExecuteUbergraph_BTS_BipedUpper_TopLevel(int32_t EntryPoint, FVariantMapHandle K2Node_BTCustomActionEvent_VariantMapHandle_4, FVariantMapHandle K2Node_BTCustomActionEvent_VariantMapHandle_3, FVariantMapHandle Temp_struct_Variable, FVariantMapHandle K2Node_BTCustomActionEvent_VariantMapHandle_2, FVariantMapHandle K2Node_BTCustomActionEvent_VariantMapHandle_1, FVariantMapHandle K2Node_BTCustomActionEvent_VariantMapHandle, AWandTool* Temp_object_Variable) {}
