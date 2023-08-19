#include "AActor.hpp"
#include "ABiped_Player.hpp"
#include "FPointerToUberGraphFrame.hpp"
#include "FVariantMapHandle.hpp"
#include "UBTT_Biped_TeeterOnEdge_C.hpp"
#include "UBTTask_AvaAITree_Input.hpp"
#include "UFunction.hpp"
#include "UObject.hpp"
void UBTT_Biped_TeeterOnEdge_C::Teeter2FallStart(UObject* Caller) {
    static auto func = (UFunction*)(find_uobject("Function /Game/Pawn/Shared/StateTree/BTT_Biped_TeeterOnEdge.BTT_Biped_TeeterOnEdge_C.Teeter2FallStart"));
    struct Params_Teeter2FallStart {
        UObject* Caller; // 0x0
    }; // Size: 0x8
    Params_Teeter2FallStart params{};
    params.Caller = (UObject*)Caller;
    ProcessEvent(func, &params);
}
void UBTT_Biped_TeeterOnEdge_C::ExitTask(AActor* OwnerActor) {
    static auto func = (UFunction*)(find_uobject("Function /Game/Pawn/Shared/StateTree/BTT_Biped_TeeterOnEdge.BTT_Biped_TeeterOnEdge_C.ExitTask"));
    struct Params_ExitTask {
        AActor* OwnerActor; // 0x0
    }; // Size: 0x8
    Params_ExitTask params{};
    params.OwnerActor = (AActor*)OwnerActor;
    ProcessEvent(func, &params);
}
void UBTT_Biped_TeeterOnEdge_C::RevertMovementMode(AActor* CallFunc_GetActorOwner_ReturnValue, ABiped_Player* K2Node_DynamicCast_AsBiped_Player, bool K2Node_DynamicCast_bSuccess, bool CallFunc_EqualEqual_ByteByte_ReturnValue) {
    static auto func = (UFunction*)(find_uobject("Function /Game/Pawn/Shared/StateTree/BTT_Biped_TeeterOnEdge.BTT_Biped_TeeterOnEdge_C.RevertMovementMode"));
    struct Params_RevertMovementMode {
        AActor* CallFunc_GetActorOwner_ReturnValue; // 0x0
        ABiped_Player* K2Node_DynamicCast_AsBiped_Player; // 0x8
        bool K2Node_DynamicCast_bSuccess; // 0x10
        bool CallFunc_EqualEqual_ByteByte_ReturnValue; // 0x11
    }; // Size: 0x12
    Params_RevertMovementMode params{};
    params.CallFunc_GetActorOwner_ReturnValue = (AActor*)CallFunc_GetActorOwner_ReturnValue;
    params.K2Node_DynamicCast_AsBiped_Player = (ABiped_Player*)K2Node_DynamicCast_AsBiped_Player;
    params.K2Node_DynamicCast_bSuccess = (bool)K2Node_DynamicCast_bSuccess;
    params.CallFunc_EqualEqual_ByteByte_ReturnValue = (bool)CallFunc_EqualEqual_ByteByte_ReturnValue;
    ProcessEvent(func, &params);
}
UBTT_Biped_TeeterOnEdge_C* UBTT_Biped_TeeterOnEdge_C::StaticClass() {
    static auto res = find_uobject("BlueprintGeneratedClass /Game/Pawn/Shared/StateTree/BTT_Biped_TeeterOnEdge.BTT_Biped_TeeterOnEdge_C");
    return (UBTT_Biped_TeeterOnEdge_C*)res;
}
void UBTT_Biped_TeeterOnEdge_C::Teeter2Fall(UObject* Caller) {
    static auto func = (UFunction*)(find_uobject("Function /Game/Pawn/Shared/StateTree/BTT_Biped_TeeterOnEdge.BTT_Biped_TeeterOnEdge_C.Teeter2Fall"));
    struct Params_Teeter2Fall {
        UObject* Caller; // 0x0
    }; // Size: 0x8
    Params_Teeter2Fall params{};
    params.Caller = (UObject*)Caller;
    ProcessEvent(func, &params);
}
void UBTT_Biped_TeeterOnEdge_C::CustActionEvt_AnimComplete_K2Node_BTCustomActionEvent_0(FVariantMapHandle VariantMapHandle) {
    static auto func = (UFunction*)(find_uobject("Function /Game/Pawn/Shared/StateTree/BTT_Biped_TeeterOnEdge.BTT_Biped_TeeterOnEdge_C.CustActionEvt_AnimComplete_K2Node_BTCustomActionEvent_0"));
    struct Params_CustActionEvt_AnimComplete_K2Node_BTCustomActionEvent_0 {
        FVariantMapHandle VariantMapHandle; // 0x0
    }; // Size: 0x4
    Params_CustActionEvt_AnimComplete_K2Node_BTCustomActionEvent_0 params{};
    params.VariantMapHandle = (FVariantMapHandle)VariantMapHandle;
    ProcessEvent(func, &params);
}
void UBTT_Biped_TeeterOnEdge_C::ReceiveExecute(AActor* OwnerActor) {
    static auto func = (UFunction*)(find_uobject("Function /Game/Pawn/Shared/StateTree/BTT_Biped_TeeterOnEdge.BTT_Biped_TeeterOnEdge_C.ReceiveExecute"));
    struct Params_ReceiveExecute {
        AActor* OwnerActor; // 0x0
    }; // Size: 0x8
    Params_ReceiveExecute params{};
    params.OwnerActor = (AActor*)OwnerActor;
    ProcessEvent(func, &params);
}
void UBTT_Biped_TeeterOnEdge_C::ReceiveTick(AActor* OwnerActor, float DeltaSeconds) {
    static auto func = (UFunction*)(find_uobject("Function /Game/Pawn/Shared/StateTree/BTT_Biped_TeeterOnEdge.BTT_Biped_TeeterOnEdge_C.ReceiveTick"));
    struct Params_ReceiveTick {
        AActor* OwnerActor; // 0x0
        float DeltaSeconds; // 0x8
    }; // Size: 0xc
    Params_ReceiveTick params{};
    params.OwnerActor = (AActor*)OwnerActor;
    params.DeltaSeconds = (float)DeltaSeconds;
    ProcessEvent(func, &params);
}
void UBTT_Biped_TeeterOnEdge_C::ExecuteUbergraph_BTT_Biped_TeeterOnEdge(int32_t EntryPoint, uint8_t CallFunc_MakeLiteralByte_ReturnValue) {}
