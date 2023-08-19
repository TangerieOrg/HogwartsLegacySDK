#include "AActor.hpp"
#include "EMobilityActionState\Type.hpp"
#include "FPointerToUberGraphFrame.hpp"
#include "FStationQueryData.hpp"
#include "FVariantMapHandle.hpp"
#include "UBTT_InteractWithStation_Abort_C.hpp"
#include "UBTTask_AvaAITree_Input.hpp"
#include "UBlackboardComponent.hpp"
#include "UFunction.hpp"
#include "UObject.hpp"
#include "UStationComponent.hpp"
#include "UUIManager.hpp"
#include "UUI_BP_Station_Social_Interaction_C.hpp"
void UBTT_InteractWithStation_Abort_C::ExecuteUbergraph_BTT_InteractWithStation_Abort(int32_t EntryPoint, FVariantMapHandle K2Node_CustomInputActionEvent_VariantMapHandle, AActor* CallFunc_GetActorOwner_ReturnValue, AActor* K2Node_Event_OwnerActor, UBlackboardComponent* CallFunc_GetBlackboard_ReturnValue, UBlackboardComponent* CallFunc_GetBlackboard_ReturnValue_1, FName CallFunc_MakeLiteralName_ReturnValue, FName CallFunc_MakeLiteralName_ReturnValue_1, int32_t CallFunc_GetValueAsInt_ReturnValue, UObject* CallFunc_GetValueAsObject_ReturnValue, FStationQueryData K2Node_MakeStruct_StationQueryData, UStationComponent* K2Node_DynamicCast_AsStation_Component, bool K2Node_DynamicCast_bSuccess, FName CallFunc_MakeLiteralName_ReturnValue_2, int32_t CallFunc_InitializeStationInteraction_ReturnValue, int32_t CallFunc_GetValueAsInt_ReturnValue_1, FName CallFunc_MakeLiteralName_ReturnValue_3, FStationQueryData K2Node_MakeStruct_StationQueryData_1, FName CallFunc_MakeLiteralName_ReturnValue_4, FName CallFunc_MakeLiteralName_ReturnValue_5, FName CallFunc_MakeLiteralName_ReturnValue_6, FName CallFunc_MakeLiteralName_ReturnValue_7, UObject* CallFunc_GetValueAsObject_ReturnValue_1, AActor* K2Node_Event_OwnerActor_1, UStationComponent* K2Node_DynamicCast_AsStation_Component_1, bool K2Node_DynamicCast_bSuccess_1, UBlackboardComponent* CallFunc_GetBlackboard_ReturnValue_2, bool CallFunc_UnlockStationBP_ReturnValue, int32_t CallFunc_InitializeStationInteraction_ReturnValue_1) {
    static auto func = (UFunction*)(find_uobject("Function /Game/Pawn/Shared/StateTree/BTT_InteractWithStation_Abort.BTT_InteractWithStation_Abort_C.ExecuteUbergraph_BTT_InteractWithStation_Abort"));
    struct Params_ExecuteUbergraph_BTT_InteractWithStation_Abort {
        int32_t EntryPoint; // 0x0
        FVariantMapHandle K2Node_CustomInputActionEvent_VariantMapHandle; // 0x4
        AActor* CallFunc_GetActorOwner_ReturnValue; // 0x8
        AActor* K2Node_Event_OwnerActor; // 0x10
        UBlackboardComponent* CallFunc_GetBlackboard_ReturnValue; // 0x18
        UBlackboardComponent* CallFunc_GetBlackboard_ReturnValue_1; // 0x20
        FName CallFunc_MakeLiteralName_ReturnValue; // 0x28
        FName CallFunc_MakeLiteralName_ReturnValue_1; // 0x30
        int32_t CallFunc_GetValueAsInt_ReturnValue; // 0x38
        char pad_3c[0x4];
        UObject* CallFunc_GetValueAsObject_ReturnValue; // 0x40
        FStationQueryData K2Node_MakeStruct_StationQueryData; // 0x48
        UStationComponent* K2Node_DynamicCast_AsStation_Component; // 0x68
        bool K2Node_DynamicCast_bSuccess; // 0x70
        char pad_71[0x3];
        FName CallFunc_MakeLiteralName_ReturnValue_2; // 0x74
        int32_t CallFunc_InitializeStationInteraction_ReturnValue; // 0x7c
        int32_t CallFunc_GetValueAsInt_ReturnValue_1; // 0x80
        FName CallFunc_MakeLiteralName_ReturnValue_3; // 0x84
        FStationQueryData K2Node_MakeStruct_StationQueryData_1; // 0x8c
        FName CallFunc_MakeLiteralName_ReturnValue_4; // 0xac
        FName CallFunc_MakeLiteralName_ReturnValue_5; // 0xb4
        FName CallFunc_MakeLiteralName_ReturnValue_6; // 0xbc
        FName CallFunc_MakeLiteralName_ReturnValue_7; // 0xc4
        char pad_cc[0x4];
        UObject* CallFunc_GetValueAsObject_ReturnValue_1; // 0xd0
        AActor* K2Node_Event_OwnerActor_1; // 0xd8
        UStationComponent* K2Node_DynamicCast_AsStation_Component_1; // 0xe0
        bool K2Node_DynamicCast_bSuccess_1; // 0xe8
        char pad_e9[0x7];
        UBlackboardComponent* CallFunc_GetBlackboard_ReturnValue_2; // 0xf0
        bool CallFunc_UnlockStationBP_ReturnValue; // 0xf8
        char pad_f9[0x3];
        int32_t CallFunc_InitializeStationInteraction_ReturnValue_1; // 0xfc
    }; // Size: 0x100
    Params_ExecuteUbergraph_BTT_InteractWithStation_Abort params{};
    params.EntryPoint = (int32_t)EntryPoint;
    params.K2Node_CustomInputActionEvent_VariantMapHandle = (FVariantMapHandle)K2Node_CustomInputActionEvent_VariantMapHandle;
    params.CallFunc_GetActorOwner_ReturnValue = (AActor*)CallFunc_GetActorOwner_ReturnValue;
    params.K2Node_Event_OwnerActor = (AActor*)K2Node_Event_OwnerActor;
    params.CallFunc_GetBlackboard_ReturnValue = (UBlackboardComponent*)CallFunc_GetBlackboard_ReturnValue;
    params.CallFunc_GetBlackboard_ReturnValue_1 = (UBlackboardComponent*)CallFunc_GetBlackboard_ReturnValue_1;
    params.CallFunc_MakeLiteralName_ReturnValue = (FName)CallFunc_MakeLiteralName_ReturnValue;
    params.CallFunc_MakeLiteralName_ReturnValue_1 = (FName)CallFunc_MakeLiteralName_ReturnValue_1;
    params.CallFunc_GetValueAsInt_ReturnValue = (int32_t)CallFunc_GetValueAsInt_ReturnValue;
    params.CallFunc_GetValueAsObject_ReturnValue = (UObject*)CallFunc_GetValueAsObject_ReturnValue;
    params.K2Node_MakeStruct_StationQueryData = (FStationQueryData)K2Node_MakeStruct_StationQueryData;
    params.K2Node_DynamicCast_AsStation_Component = (UStationComponent*)K2Node_DynamicCast_AsStation_Component;
    params.K2Node_DynamicCast_bSuccess = (bool)K2Node_DynamicCast_bSuccess;
    params.CallFunc_MakeLiteralName_ReturnValue_2 = (FName)CallFunc_MakeLiteralName_ReturnValue_2;
    params.CallFunc_InitializeStationInteraction_ReturnValue = (int32_t)CallFunc_InitializeStationInteraction_ReturnValue;
    params.CallFunc_GetValueAsInt_ReturnValue_1 = (int32_t)CallFunc_GetValueAsInt_ReturnValue_1;
    params.CallFunc_MakeLiteralName_ReturnValue_3 = (FName)CallFunc_MakeLiteralName_ReturnValue_3;
    params.K2Node_MakeStruct_StationQueryData_1 = (FStationQueryData)K2Node_MakeStruct_StationQueryData_1;
    params.CallFunc_MakeLiteralName_ReturnValue_4 = (FName)CallFunc_MakeLiteralName_ReturnValue_4;
    params.CallFunc_MakeLiteralName_ReturnValue_5 = (FName)CallFunc_MakeLiteralName_ReturnValue_5;
    params.CallFunc_MakeLiteralName_ReturnValue_6 = (FName)CallFunc_MakeLiteralName_ReturnValue_6;
    params.CallFunc_MakeLiteralName_ReturnValue_7 = (FName)CallFunc_MakeLiteralName_ReturnValue_7;
    params.CallFunc_GetValueAsObject_ReturnValue_1 = (UObject*)CallFunc_GetValueAsObject_ReturnValue_1;
    params.K2Node_Event_OwnerActor_1 = (AActor*)K2Node_Event_OwnerActor_1;
    params.K2Node_DynamicCast_AsStation_Component_1 = (UStationComponent*)K2Node_DynamicCast_AsStation_Component_1;
    params.K2Node_DynamicCast_bSuccess_1 = (bool)K2Node_DynamicCast_bSuccess_1;
    params.CallFunc_GetBlackboard_ReturnValue_2 = (UBlackboardComponent*)CallFunc_GetBlackboard_ReturnValue_2;
    params.CallFunc_UnlockStationBP_ReturnValue = (bool)CallFunc_UnlockStationBP_ReturnValue;
    params.CallFunc_InitializeStationInteraction_ReturnValue_1 = (int32_t)CallFunc_InitializeStationInteraction_ReturnValue_1;
    ProcessEvent(func, &params);
}
UBTT_InteractWithStation_Abort_C* UBTT_InteractWithStation_Abort_C::StaticClass() {
    static auto res = find_uobject("BlueprintGeneratedClass /Game/Pawn/Shared/StateTree/BTT_InteractWithStation_Abort.BTT_InteractWithStation_Abort_C");
    return (UBTT_InteractWithStation_Abort_C*)res;
}
void UBTT_InteractWithStation_Abort_C::ExitTask(AActor* OwnerActor) {
    static auto func = (UFunction*)(find_uobject("Function /Game/Pawn/Shared/StateTree/BTT_InteractWithStation_Abort.BTT_InteractWithStation_Abort_C.ExitTask"));
    struct Params_ExitTask {
        AActor* OwnerActor; // 0x0
    }; // Size: 0x8
    Params_ExitTask params{};
    params.OwnerActor = (AActor*)OwnerActor;
    ProcessEvent(func, &params);
}
void UBTT_InteractWithStation_Abort_C::InpActEvt_InteractButton_K2Node_CustomInputActionEvent_0(FVariantMapHandle VariantMapHandle) {
    static auto func = (UFunction*)(find_uobject("Function /Game/Pawn/Shared/StateTree/BTT_InteractWithStation_Abort.BTT_InteractWithStation_Abort_C.InpActEvt_InteractButton_K2Node_CustomInputActionEvent_0"));
    struct Params_InpActEvt_InteractButton_K2Node_CustomInputActionEvent_0 {
        FVariantMapHandle VariantMapHandle; // 0x0
    }; // Size: 0x4
    Params_InpActEvt_InteractButton_K2Node_CustomInputActionEvent_0 params{};
    params.VariantMapHandle = (FVariantMapHandle)VariantMapHandle;
    ProcessEvent(func, &params);
}
void UBTT_InteractWithStation_Abort_C::ReceiveExecute(AActor* OwnerActor) {
    static auto func = (UFunction*)(find_uobject("Function /Game/Pawn/Shared/StateTree/BTT_InteractWithStation_Abort.BTT_InteractWithStation_Abort_C.ReceiveExecute"));
    struct Params_ReceiveExecute {
        AActor* OwnerActor; // 0x0
    }; // Size: 0x8
    Params_ReceiveExecute params{};
    params.OwnerActor = (AActor*)OwnerActor;
    ProcessEvent(func, &params);
}
