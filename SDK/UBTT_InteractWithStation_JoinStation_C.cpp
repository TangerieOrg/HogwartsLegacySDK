#include "AActor.hpp"
#include "ABiped_Player.hpp"
#include "APawn.hpp"
#include "EMobilityActionState\Type.hpp"
#include "FPointerToUberGraphFrame.hpp"
#include "FStationQueryData.hpp"
#include "FVariantMapHandle.hpp"
#include "FVector.hpp"
#include "SocialActionTypes.hpp"
#include "UAnimInstance.hpp"
#include "UBTT_InteractWithStation_JoinStation_C.hpp"
#include "UBTTask_AvaAITree_Input.hpp"
#include "UBlackboardComponent.hpp"
#include "UFunction.hpp"
#include "UObject.hpp"
#include "USocialReactor.hpp"
#include "UStationComponent.hpp"
#include "UUIManager.hpp"
#include "UUI_BP_Station_Social_Interaction_C.hpp"
UBTT_InteractWithStation_JoinStation_C* UBTT_InteractWithStation_JoinStation_C::StaticClass() {
    static auto res = find_uobject("BlueprintGeneratedClass /Game/Pawn/Shared/StateTree/BTT_InteractWithStation_JoinStation.BTT_InteractWithStation_JoinStation_C");
    return (UBTT_InteractWithStation_JoinStation_C*)res;
}
void UBTT_InteractWithStation_JoinStation_C::ExitTask(AActor* OwnerActor) {
    static auto func = (UFunction*)(find_uobject("Function /Game/Pawn/Shared/StateTree/BTT_InteractWithStation_JoinStation.BTT_InteractWithStation_JoinStation_C.ExitTask"));
    struct Params_ExitTask {
        AActor* OwnerActor; // 0x0
    }; // Size: 0x8
    Params_ExitTask params{};
    params.OwnerActor = (AActor*)OwnerActor;
    ProcessEvent(func, &params);
}
void UBTT_InteractWithStation_JoinStation_C::LeaveStation(FName CallFunc_MakeLiteralName_ReturnValue, FName CallFunc_MakeLiteralName_ReturnValue_1, AActor* CallFunc_GetActorOwner_ReturnValue, UBlackboardComponent* CallFunc_GetBlackboard_ReturnValue, UObject* CallFunc_GetValueAsObject_ReturnValue, int32_t CallFunc_GetValueAsInt_ReturnValue, UStationComponent* K2Node_DynamicCast_AsStation_Component, bool K2Node_DynamicCast_bSuccess, FStationQueryData K2Node_MakeStruct_StationQueryData, int32_t CallFunc_InitializeStationInteraction_ReturnValue) {
    static auto func = (UFunction*)(find_uobject("Function /Game/Pawn/Shared/StateTree/BTT_InteractWithStation_JoinStation.BTT_InteractWithStation_JoinStation_C.LeaveStation"));
    struct Params_LeaveStation {
        FName CallFunc_MakeLiteralName_ReturnValue; // 0x0
        FName CallFunc_MakeLiteralName_ReturnValue_1; // 0x8
        AActor* CallFunc_GetActorOwner_ReturnValue; // 0x10
        UBlackboardComponent* CallFunc_GetBlackboard_ReturnValue; // 0x18
        UObject* CallFunc_GetValueAsObject_ReturnValue; // 0x20
        int32_t CallFunc_GetValueAsInt_ReturnValue; // 0x28
        char pad_2c[0x4];
        UStationComponent* K2Node_DynamicCast_AsStation_Component; // 0x30
        bool K2Node_DynamicCast_bSuccess; // 0x38
        char pad_39[0x3];
        FStationQueryData K2Node_MakeStruct_StationQueryData; // 0x3c
        int32_t CallFunc_InitializeStationInteraction_ReturnValue; // 0x5c
    }; // Size: 0x60
    Params_LeaveStation params{};
    params.CallFunc_MakeLiteralName_ReturnValue = (FName)CallFunc_MakeLiteralName_ReturnValue;
    params.CallFunc_MakeLiteralName_ReturnValue_1 = (FName)CallFunc_MakeLiteralName_ReturnValue_1;
    params.CallFunc_GetActorOwner_ReturnValue = (AActor*)CallFunc_GetActorOwner_ReturnValue;
    params.CallFunc_GetBlackboard_ReturnValue = (UBlackboardComponent*)CallFunc_GetBlackboard_ReturnValue;
    params.CallFunc_GetValueAsObject_ReturnValue = (UObject*)CallFunc_GetValueAsObject_ReturnValue;
    params.CallFunc_GetValueAsInt_ReturnValue = (int32_t)CallFunc_GetValueAsInt_ReturnValue;
    params.K2Node_DynamicCast_AsStation_Component = (UStationComponent*)K2Node_DynamicCast_AsStation_Component;
    params.K2Node_DynamicCast_bSuccess = (bool)K2Node_DynamicCast_bSuccess;
    params.K2Node_MakeStruct_StationQueryData = (FStationQueryData)K2Node_MakeStruct_StationQueryData;
    params.CallFunc_InitializeStationInteraction_ReturnValue = (int32_t)CallFunc_InitializeStationInteraction_ReturnValue;
    ProcessEvent(func, &params);
}
void UBTT_InteractWithStation_JoinStation_C::ReceiveTick(AActor* OwnerActor, float DeltaSeconds) {
    static auto func = (UFunction*)(find_uobject("Function /Game/Pawn/Shared/StateTree/BTT_InteractWithStation_JoinStation.BTT_InteractWithStation_JoinStation_C.ReceiveTick"));
    struct Params_ReceiveTick {
        AActor* OwnerActor; // 0x0
        float DeltaSeconds; // 0x8
    }; // Size: 0xc
    Params_ReceiveTick params{};
    params.OwnerActor = (AActor*)OwnerActor;
    params.DeltaSeconds = (float)DeltaSeconds;
    ProcessEvent(func, &params);
}
void UBTT_InteractWithStation_JoinStation_C::InpActEvt_InteractButton_K2Node_CustomInputActionEvent_0(FVariantMapHandle VariantMapHandle) {
    static auto func = (UFunction*)(find_uobject("Function /Game/Pawn/Shared/StateTree/BTT_InteractWithStation_JoinStation.BTT_InteractWithStation_JoinStation_C.InpActEvt_InteractButton_K2Node_CustomInputActionEvent_0"));
    struct Params_InpActEvt_InteractButton_K2Node_CustomInputActionEvent_0 {
        FVariantMapHandle VariantMapHandle; // 0x0
    }; // Size: 0x4
    Params_InpActEvt_InteractButton_K2Node_CustomInputActionEvent_0 params{};
    params.VariantMapHandle = (FVariantMapHandle)VariantMapHandle;
    ProcessEvent(func, &params);
}
void UBTT_InteractWithStation_JoinStation_C::ReceiveExecute(AActor* OwnerActor) {
    static auto func = (UFunction*)(find_uobject("Function /Game/Pawn/Shared/StateTree/BTT_InteractWithStation_JoinStation.BTT_InteractWithStation_JoinStation_C.ReceiveExecute"));
    struct Params_ReceiveExecute {
        AActor* OwnerActor; // 0x0
    }; // Size: 0x8
    Params_ReceiveExecute params{};
    params.OwnerActor = (AActor*)OwnerActor;
    ProcessEvent(func, &params);
}
void UBTT_InteractWithStation_JoinStation_C::ExitComplete(UObject* Caller) {
    static auto func = (UFunction*)(find_uobject("Function /Game/Pawn/Shared/StateTree/BTT_InteractWithStation_JoinStation.BTT_InteractWithStation_JoinStation_C.ExitComplete"));
    struct Params_ExitComplete {
        UObject* Caller; // 0x0
    }; // Size: 0x8
    Params_ExitComplete params{};
    params.Caller = (UObject*)Caller;
    ProcessEvent(func, &params);
}
void UBTT_InteractWithStation_JoinStation_C::ResetGate() {
    static auto func = (UFunction*)(find_uobject("Function /Game/Pawn/Shared/StateTree/BTT_InteractWithStation_JoinStation.BTT_InteractWithStation_JoinStation_C.ResetGate"));
    struct Params_ResetGate {
    }; // Size: 0x0
    Params_ResetGate params{};
    ProcessEvent(func, &params);
}
void UBTT_InteractWithStation_JoinStation_C::ExecuteUbergraph_BTT_InteractWithStation_JoinStation(int32_t EntryPoint, UBlackboardComponent* CallFunc_GetBlackboardComponent_ReturnValue, AActor* K2Node_Event_OwnerActor_1, FName CallFunc_MakeLiteralName_ReturnValue, APawn* CallFunc_GetPlayerPawn_ReturnValue, UObject* CallFunc_GetValueAsObject_ReturnValue, FName CallFunc_MakeLiteralName_ReturnValue_1, UStationComponent* K2Node_DynamicCast_AsStation_Component, bool K2Node_DynamicCast_bSuccess, int32_t CallFunc_GetValueAsInt_ReturnValue, bool Temp_bool_Has_Been_Initd_Variable, USocialReactor* CallFunc_GetTheSocialReactor_ReturnValue, AActor* K2Node_Event_OwnerActor_2, FName CallFunc_MakeLiteralName_ReturnValue_2, ABiped_Player* K2Node_DynamicCast_AsBiped_Player, bool K2Node_DynamicCast_bSuccess_1, FName CallFunc_GetValueAsName_ReturnValue, SocialActionTypes CallFunc_GetSocialActionTypeFromName_ReturnValue, FVariantMapHandle K2Node_CustomInputActionEvent_VariantMapHandle, FName CallFunc_MakeLiteralName_ReturnValue_3, FName CallFunc_MakeLiteralName_ReturnValue_4, int32_t CallFunc_GetValueAsInt_ReturnValue_1, int32_t CallFunc_GetValueAsInt_ReturnValue_2, AActor* K2Node_Event_OwnerActor, float K2Node_Event_DeltaSeconds, FStationQueryData K2Node_MakeStruct_StationQueryData, ABiped_Player* K2Node_DynamicCast_AsBiped_Player_1, bool K2Node_DynamicCast_bSuccess_2, int32_t CallFunc_InitializeStationInteraction_ReturnValue, float CallFunc_GetMoveStickValues_X, float CallFunc_GetMoveStickValues_Y, bool Temp_bool_IsClosed_Variable, bool CallFunc_Less_FloatFloat_ReturnValue, bool CallFunc_Greater_FloatFloat_ReturnValue, bool CallFunc_Less_FloatFloat_ReturnValue_1, bool CallFunc_Greater_FloatFloat_ReturnValue_1, bool CallFunc_BooleanOR_ReturnValue, bool CallFunc_BooleanOR_ReturnValue_1, bool CallFunc_BooleanOR_ReturnValue_2, UObject* K2Node_CustomEvent_Caller, UBlackboardComponent* CallFunc_GetBlackboardComponent_ReturnValue_1, FName CallFunc_MakeLiteralName_ReturnValue_5, UAnimInstance* CallFunc_GetAnimInstance_ReturnValue) {}
