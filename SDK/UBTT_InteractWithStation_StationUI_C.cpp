#include "AActor.hpp"
#include "APlayerController.hpp"
#include "AStation.hpp"
#include "EMobilityActionState\Type.hpp"
#include "FPointerToUberGraphFrame.hpp"
#include "FStationQueryData.hpp"
#include "FVariantMapHandle.hpp"
#include "UBTT_InteractWithStation_StationUI_C.hpp"
#include "UBTTask_AvaAITree_Input.hpp"
#include "UBlackboardComponent.hpp"
#include "UFunction.hpp"
#include "UObject.hpp"
#include "UStationComponent.hpp"
#include "UUIManager.hpp"
#include "UUI_BP_Station_Social_Interaction_C.hpp"
UBTT_InteractWithStation_StationUI_C* UBTT_InteractWithStation_StationUI_C::StaticClass() {
    static auto res = find_uobject("BlueprintGeneratedClass /Game/Pawn/Shared/StateTree/BTT_InteractWithStation_StationUI.BTT_InteractWithStation_StationUI_C");
    return (UBTT_InteractWithStation_StationUI_C*)res;
}
void UBTT_InteractWithStation_StationUI_C::InpActEvt_InteractButton_K2Node_CustomInputActionEvent_0(FVariantMapHandle VariantMapHandle) {
    static auto func = (UFunction*)(find_uobject("Function /Game/Pawn/Shared/StateTree/BTT_InteractWithStation_StationUI.BTT_InteractWithStation_StationUI_C.InpActEvt_InteractButton_K2Node_CustomInputActionEvent_0"));
    struct Params_InpActEvt_InteractButton_K2Node_CustomInputActionEvent_0 {
        FVariantMapHandle VariantMapHandle; // 0x0
    }; // Size: 0x4
    Params_InpActEvt_InteractButton_K2Node_CustomInputActionEvent_0 params{};
    params.VariantMapHandle = (FVariantMapHandle)VariantMapHandle;
    ProcessEvent(func, &params);
}
void UBTT_InteractWithStation_StationUI_C::ExitTask(AActor* OwnerActor) {
    static auto func = (UFunction*)(find_uobject("Function /Game/Pawn/Shared/StateTree/BTT_InteractWithStation_StationUI.BTT_InteractWithStation_StationUI_C.ExitTask"));
    struct Params_ExitTask {
        AActor* OwnerActor; // 0x0
    }; // Size: 0x8
    Params_ExitTask params{};
    params.OwnerActor = (AActor*)OwnerActor;
    ProcessEvent(func, &params);
}
void UBTT_InteractWithStation_StationUI_C::ReceiveExecute(AActor* OwnerActor) {
    static auto func = (UFunction*)(find_uobject("Function /Game/Pawn/Shared/StateTree/BTT_InteractWithStation_StationUI.BTT_InteractWithStation_StationUI_C.ReceiveExecute"));
    struct Params_ReceiveExecute {
        AActor* OwnerActor; // 0x0
    }; // Size: 0x8
    Params_ReceiveExecute params{};
    params.OwnerActor = (AActor*)OwnerActor;
    ProcessEvent(func, &params);
}
void UBTT_InteractWithStation_StationUI_C::ExecuteUbergraph_BTT_InteractWithStation_StationUI(int32_t EntryPoint, FVariantMapHandle K2Node_CustomInputActionEvent_VariantMapHandle, FName CallFunc_MakeLiteralName_ReturnValue, UBlackboardComponent* CallFunc_GetBlackboardComponent_ReturnValue, APlayerController* CallFunc_GetPlayerController_ReturnValue, UObject* CallFunc_GetValueAsObject_ReturnValue, UUI_BP_Station_Social_Interaction_C* CallFunc_Create_ReturnValue, AStation* K2Node_DynamicCast_AsStation, bool K2Node_DynamicCast_bSuccess, UStationComponent* CallFunc_GetComponentByClass_ReturnValue, AActor* CallFunc_GetActorOwner_ReturnValue, UBlackboardComponent* CallFunc_GetBlackboard_ReturnValue, FName CallFunc_MakeLiteralName_ReturnValue_1, FName CallFunc_MakeLiteralName_ReturnValue_2, int32_t CallFunc_GetValueAsInt_ReturnValue, UObject* CallFunc_GetValueAsObject_ReturnValue_1, FStationQueryData K2Node_MakeStruct_StationQueryData, UStationComponent* K2Node_DynamicCast_AsStation_Component, bool K2Node_DynamicCast_bSuccess_1, int32_t CallFunc_InitializeStationInteraction_ReturnValue, AActor* K2Node_Event_OwnerActor, AActor* K2Node_Event_OwnerActor_1, bool CallFunc_LockStation_ReturnValue, TArray<FStationQueryData>& CallFunc_GetSocialActionChoicesBP_StationQueryData, bool CallFunc_GetSocialActionChoicesBP_ReturnValue) {
    static auto func = (UFunction*)(find_uobject("Function /Game/Pawn/Shared/StateTree/BTT_InteractWithStation_StationUI.BTT_InteractWithStation_StationUI_C.ExecuteUbergraph_BTT_InteractWithStation_StationUI"));
    struct Params_ExecuteUbergraph_BTT_InteractWithStation_StationUI {
        int32_t EntryPoint; // 0x0
        FVariantMapHandle K2Node_CustomInputActionEvent_VariantMapHandle; // 0x4
        FName CallFunc_MakeLiteralName_ReturnValue; // 0x8
        UBlackboardComponent* CallFunc_GetBlackboardComponent_ReturnValue; // 0x10
        APlayerController* CallFunc_GetPlayerController_ReturnValue; // 0x18
        UObject* CallFunc_GetValueAsObject_ReturnValue; // 0x20
        UUI_BP_Station_Social_Interaction_C* CallFunc_Create_ReturnValue; // 0x28
        AStation* K2Node_DynamicCast_AsStation; // 0x30
        bool K2Node_DynamicCast_bSuccess; // 0x38
        char pad_39[0x7];
        UStationComponent* CallFunc_GetComponentByClass_ReturnValue; // 0x40
        AActor* CallFunc_GetActorOwner_ReturnValue; // 0x48
        UBlackboardComponent* CallFunc_GetBlackboard_ReturnValue; // 0x50
        FName CallFunc_MakeLiteralName_ReturnValue_1; // 0x58
        FName CallFunc_MakeLiteralName_ReturnValue_2; // 0x60
        int32_t CallFunc_GetValueAsInt_ReturnValue; // 0x68
        char pad_6c[0x4];
        UObject* CallFunc_GetValueAsObject_ReturnValue_1; // 0x70
        FStationQueryData K2Node_MakeStruct_StationQueryData; // 0x78
        UStationComponent* K2Node_DynamicCast_AsStation_Component; // 0x98
        bool K2Node_DynamicCast_bSuccess_1; // 0xa0
        char pad_a1[0x3];
        int32_t CallFunc_InitializeStationInteraction_ReturnValue; // 0xa4
        AActor* K2Node_Event_OwnerActor; // 0xa8
        AActor* K2Node_Event_OwnerActor_1; // 0xb0
        bool CallFunc_LockStation_ReturnValue; // 0xb8
        char pad_b9[0x7];
        TArray<FStationQueryData> CallFunc_GetSocialActionChoicesBP_StationQueryData; // 0xc0
        bool CallFunc_GetSocialActionChoicesBP_ReturnValue; // 0xd0
    }; // Size: 0xd1
    Params_ExecuteUbergraph_BTT_InteractWithStation_StationUI params{};
    params.EntryPoint = (int32_t)EntryPoint;
    params.K2Node_CustomInputActionEvent_VariantMapHandle = (FVariantMapHandle)K2Node_CustomInputActionEvent_VariantMapHandle;
    params.CallFunc_MakeLiteralName_ReturnValue = (FName)CallFunc_MakeLiteralName_ReturnValue;
    params.CallFunc_GetBlackboardComponent_ReturnValue = (UBlackboardComponent*)CallFunc_GetBlackboardComponent_ReturnValue;
    params.CallFunc_GetPlayerController_ReturnValue = (APlayerController*)CallFunc_GetPlayerController_ReturnValue;
    params.CallFunc_GetValueAsObject_ReturnValue = (UObject*)CallFunc_GetValueAsObject_ReturnValue;
    params.CallFunc_Create_ReturnValue = (UUI_BP_Station_Social_Interaction_C*)CallFunc_Create_ReturnValue;
    params.K2Node_DynamicCast_AsStation = (AStation*)K2Node_DynamicCast_AsStation;
    params.K2Node_DynamicCast_bSuccess = (bool)K2Node_DynamicCast_bSuccess;
    params.CallFunc_GetComponentByClass_ReturnValue = (UStationComponent*)CallFunc_GetComponentByClass_ReturnValue;
    params.CallFunc_GetActorOwner_ReturnValue = (AActor*)CallFunc_GetActorOwner_ReturnValue;
    params.CallFunc_GetBlackboard_ReturnValue = (UBlackboardComponent*)CallFunc_GetBlackboard_ReturnValue;
    params.CallFunc_MakeLiteralName_ReturnValue_1 = (FName)CallFunc_MakeLiteralName_ReturnValue_1;
    params.CallFunc_MakeLiteralName_ReturnValue_2 = (FName)CallFunc_MakeLiteralName_ReturnValue_2;
    params.CallFunc_GetValueAsInt_ReturnValue = (int32_t)CallFunc_GetValueAsInt_ReturnValue;
    params.CallFunc_GetValueAsObject_ReturnValue_1 = (UObject*)CallFunc_GetValueAsObject_ReturnValue_1;
    params.K2Node_MakeStruct_StationQueryData = (FStationQueryData)K2Node_MakeStruct_StationQueryData;
    params.K2Node_DynamicCast_AsStation_Component = (UStationComponent*)K2Node_DynamicCast_AsStation_Component;
    params.K2Node_DynamicCast_bSuccess_1 = (bool)K2Node_DynamicCast_bSuccess_1;
    params.CallFunc_InitializeStationInteraction_ReturnValue = (int32_t)CallFunc_InitializeStationInteraction_ReturnValue;
    params.K2Node_Event_OwnerActor = (AActor*)K2Node_Event_OwnerActor;
    params.K2Node_Event_OwnerActor_1 = (AActor*)K2Node_Event_OwnerActor_1;
    params.CallFunc_LockStation_ReturnValue = (bool)CallFunc_LockStation_ReturnValue;
    params.CallFunc_GetSocialActionChoicesBP_StationQueryData = (TArray<FStationQueryData>)CallFunc_GetSocialActionChoicesBP_StationQueryData;
    params.CallFunc_GetSocialActionChoicesBP_ReturnValue = (bool)CallFunc_GetSocialActionChoicesBP_ReturnValue;
    ProcessEvent(func, &params);
    CallFunc_GetSocialActionChoicesBP_StationQueryData = params.CallFunc_GetSocialActionChoicesBP_StationQueryData;
}
