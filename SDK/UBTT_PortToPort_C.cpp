#include "AActor.hpp"
#include "ABiped_Player.hpp"
#include "AFastTravelPort.hpp"
#include "FPointerToUberGraphFrame.hpp"
#include "FTimerHandle.hpp"
#include "FVariantMapHandle.hpp"
#include "UBTT_PortToPort_C.hpp"
#include "UBTTask_AvaAITree_Input.hpp"
#include "UFunction.hpp"
#include "UObject.hpp"
#include "USceneComponent.hpp"
void UBTT_PortToPort_C::CustActionEvt_FastTravelTeleport_K2Node_BTCustomActionEvent_2(FVariantMapHandle VariantMapHandle) {
    static auto func = (UFunction*)(find_uobject("Function /Game/Pawn/Shared/StateTree/BTT_PortToPort.BTT_PortToPort_C.CustActionEvt_FastTravelTeleport_K2Node_BTCustomActionEvent_2"));
    struct Params_CustActionEvt_FastTravelTeleport_K2Node_BTCustomActionEvent_2 {
        FVariantMapHandle VariantMapHandle; // 0x0
    }; // Size: 0x4
    Params_CustActionEvt_FastTravelTeleport_K2Node_BTCustomActionEvent_2 params{};
    params.VariantMapHandle = (FVariantMapHandle)VariantMapHandle;
    ProcessEvent(func, &params);
}
UBTT_PortToPort_C* UBTT_PortToPort_C::StaticClass() {
    static auto res = find_uobject("BlueprintGeneratedClass /Game/Pawn/Shared/StateTree/BTT_PortToPort.BTT_PortToPort_C");
    return (UBTT_PortToPort_C*)res;
}
void UBTT_PortToPort_C::ExitTask(AActor* OwnerActor) {
    static auto func = (UFunction*)(find_uobject("Function /Game/Pawn/Shared/StateTree/BTT_PortToPort.BTT_PortToPort_C.ExitTask"));
    struct Params_ExitTask {
        AActor* OwnerActor; // 0x0
    }; // Size: 0x8
    Params_ExitTask params{};
    params.OwnerActor = (AActor*)OwnerActor;
    ProcessEvent(func, &params);
}
void UBTT_PortToPort_C::SetContexts(bool Flag) {
    static auto func = (UFunction*)(find_uobject("Function /Game/Pawn/Shared/StateTree/BTT_PortToPort.BTT_PortToPort_C.SetContexts"));
    struct Params_SetContexts {
        bool Flag; // 0x0
    }; // Size: 0x1
    Params_SetContexts params{};
    params.Flag = (bool)Flag;
    ProcessEvent(func, &params);
}
void UBTT_PortToPort_C::CustActionEvt_AllowJumpLand_K2Node_BTCustomActionEvent_1(FVariantMapHandle VariantMapHandle) {
    static auto func = (UFunction*)(find_uobject("Function /Game/Pawn/Shared/StateTree/BTT_PortToPort.BTT_PortToPort_C.CustActionEvt_AllowJumpLand_K2Node_BTCustomActionEvent_1"));
    struct Params_CustActionEvt_AllowJumpLand_K2Node_BTCustomActionEvent_1 {
        FVariantMapHandle VariantMapHandle; // 0x0
    }; // Size: 0x4
    Params_CustActionEvt_AllowJumpLand_K2Node_BTCustomActionEvent_1 params{};
    params.VariantMapHandle = (FVariantMapHandle)VariantMapHandle;
    ProcessEvent(func, &params);
}
void UBTT_PortToPort_C::CustActionEvt_AnimComplete_K2Node_BTCustomActionEvent_3(FVariantMapHandle VariantMapHandle) {
    static auto func = (UFunction*)(find_uobject("Function /Game/Pawn/Shared/StateTree/BTT_PortToPort.BTT_PortToPort_C.CustActionEvt_AnimComplete_K2Node_BTCustomActionEvent_3"));
    struct Params_CustActionEvt_AnimComplete_K2Node_BTCustomActionEvent_3 {
        FVariantMapHandle VariantMapHandle; // 0x0
    }; // Size: 0x4
    Params_CustActionEvt_AnimComplete_K2Node_BTCustomActionEvent_3 params{};
    params.VariantMapHandle = (FVariantMapHandle)VariantMapHandle;
    ProcessEvent(func, &params);
}
void UBTT_PortToPort_C::InpActEvt_Move_K2Node_CustomStickInputActionEvent_0(FVariantMapHandle VariantMapHandle) {
    static auto func = (UFunction*)(find_uobject("Function /Game/Pawn/Shared/StateTree/BTT_PortToPort.BTT_PortToPort_C.InpActEvt_Move_K2Node_CustomStickInputActionEvent_0"));
    struct Params_InpActEvt_Move_K2Node_CustomStickInputActionEvent_0 {
        FVariantMapHandle VariantMapHandle; // 0x0
    }; // Size: 0x4
    Params_InpActEvt_Move_K2Node_CustomStickInputActionEvent_0 params{};
    params.VariantMapHandle = (FVariantMapHandle)VariantMapHandle;
    ProcessEvent(func, &params);
}
void UBTT_PortToPort_C::CustActionEvt_Landed_K2Node_BTCustomActionEvent_0(FVariantMapHandle VariantMapHandle) {
    static auto func = (UFunction*)(find_uobject("Function /Game/Pawn/Shared/StateTree/BTT_PortToPort.BTT_PortToPort_C.CustActionEvt_Landed_K2Node_BTCustomActionEvent_0"));
    struct Params_CustActionEvt_Landed_K2Node_BTCustomActionEvent_0 {
        FVariantMapHandle VariantMapHandle; // 0x0
    }; // Size: 0x4
    Params_CustActionEvt_Landed_K2Node_BTCustomActionEvent_0 params{};
    params.VariantMapHandle = (FVariantMapHandle)VariantMapHandle;
    ProcessEvent(func, &params);
}
void UBTT_PortToPort_C::DelayBeforeTeleportExpired() {
    static auto func = (UFunction*)(find_uobject("Function /Game/Pawn/Shared/StateTree/BTT_PortToPort.BTT_PortToPort_C.DelayBeforeTeleportExpired"));
    struct Params_DelayBeforeTeleportExpired {
    }; // Size: 0x0
    Params_DelayBeforeTeleportExpired params{};
    ProcessEvent(func, &params);
}
void UBTT_PortToPort_C::ReceiveExecute(AActor* OwnerActor) {
    static auto func = (UFunction*)(find_uobject("Function /Game/Pawn/Shared/StateTree/BTT_PortToPort.BTT_PortToPort_C.ReceiveExecute"));
    struct Params_ReceiveExecute {
        AActor* OwnerActor; // 0x0
    }; // Size: 0x8
    Params_ReceiveExecute params{};
    params.OwnerActor = (AActor*)OwnerActor;
    ProcessEvent(func, &params);
}
void UBTT_PortToPort_C::MovementModeChanged(UObject* Caller) {
    static auto func = (UFunction*)(find_uobject("Function /Game/Pawn/Shared/StateTree/BTT_PortToPort.BTT_PortToPort_C.MovementModeChanged"));
    struct Params_MovementModeChanged {
        UObject* Caller; // 0x0
    }; // Size: 0x8
    Params_MovementModeChanged params{};
    params.Caller = (UObject*)Caller;
    ProcessEvent(func, &params);
}
void UBTT_PortToPort_C::ExecuteUbergraph_BTT_PortToPort(int32_t EntryPoint, AActor* K2Node_Event_OwnerActor_1, ABiped_Player* K2Node_DynamicCast_AsBiped_Player, bool K2Node_DynamicCast_bSuccess) {}
