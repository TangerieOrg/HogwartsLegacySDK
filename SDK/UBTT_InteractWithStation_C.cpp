#include "AActor.hpp"
#include "ABiped_Player.hpp"
#include "APawn.hpp"
#include "AStation.hpp"
#include "FPointerToUberGraphFrame.hpp"
#include "FRotator.hpp"
#include "FStationQueryData.hpp"
#include "FTransform.hpp"
#include "FVariantMapHandle.hpp"
#include "FVector.hpp"
#include "UBTT_InteractWithStation_C.hpp"
#include "UBTTask_AvaAITree_Input.hpp"
#include "UBlackboardComponent.hpp"
#include "UFunction.hpp"
#include "UObject.hpp"
#include "UStationComponent.hpp"
#include "UUIManager.hpp"
#include "UUI_BP_Station_Social_Interaction_C.hpp"
UBTT_InteractWithStation_C* UBTT_InteractWithStation_C::StaticClass() {
    static auto res = find_uobject("BlueprintGeneratedClass /Game/Pawn/Shared/StateTree/BTT_InteractWithStation.BTT_InteractWithStation_C");
    return (UBTT_InteractWithStation_C*)res;
}
void UBTT_InteractWithStation_C::ExecuteUbergraph_BTT_InteractWithStation(int32_t EntryPoint, AActor* K2Node_Event_OwnerActor, APawn* K2Node_DynamicCast_AsPawn, bool K2Node_DynamicCast_bSuccess, UObject* K2Node_CustomEvent_Caller, UObject* K2Node_CustomEvent_Caller_1, int32_t CallFunc_GetClosestConnection_ReturnValue, AActor* K2Node_Event_OwnerActor_1, UBlackboardComponent* CallFunc_GetBlackboardComponent_ReturnValue, ABiped_Player* K2Node_DynamicCast_AsBiped_Player, bool K2Node_DynamicCast_bSuccess_1, APawn* CallFunc_GetPlayerPawn_ReturnValue, TArray<FStationQueryData>& CallFunc_GetSocialActionChoicesBP_StationQueryData, bool CallFunc_GetSocialActionChoicesBP_ReturnValue, int32_t CallFunc_Array_Length_ReturnValue, FName CallFunc_MakeLiteralName_ReturnValue, bool CallFunc_Greater_IntInt_ReturnValue, FName CallFunc_MakeLiteralName_ReturnValue_1, UBlackboardComponent* CallFunc_GetBlackboardComponent_ReturnValue_1, AActor* CallFunc_GetOwner_ReturnValue, FName CallFunc_MakeLiteralName_ReturnValue_2, FTransform CallFunc_GetTransform_ReturnValue, FVector CallFunc_BreakTransform_Location, FRotator CallFunc_BreakTransform_Rotation, FVector CallFunc_BreakTransform_Scale, UBlackboardComponent* CallFunc_GetBlackboardComponent_ReturnValue_2, FVector CallFunc_Conv_RotatorToVector_ReturnValue, AActor* CallFunc_GetActorOwner_ReturnValue, FName CallFunc_MakeLiteralName_ReturnValue_3, UBlackboardComponent* CallFunc_GetBlackboard_ReturnValue, FName CallFunc_MakeLiteralName_ReturnValue_4, int32_t CallFunc_GetValueAsInt_ReturnValue, UObject* CallFunc_GetValueAsObject_ReturnValue, FStationQueryData K2Node_MakeStruct_StationQueryData, UStationComponent* K2Node_DynamicCast_AsStation_Component, bool K2Node_DynamicCast_bSuccess_2, FVariantMapHandle K2Node_CustomInputActionEvent_VariantMapHandle, int32_t CallFunc_InitializeStationInteraction_ReturnValue, FStationQueryData K2Node_MakeStruct_StationQueryData_1, FName CallFunc_MakeLiteralName_ReturnValue_5, UObject* CallFunc_GetValueAsObject_ReturnValue_1, FStationQueryData K2Node_MakeStruct_StationQueryData_2, AStation* K2Node_DynamicCast_AsStation, bool K2Node_DynamicCast_bSuccess_3, UStationComponent* CallFunc_GetComponentByClass_ReturnValue, bool CallFunc_StationKnownByMailManagerBP_ReturnValue, int32_t CallFunc_InitializeStationInteraction_ReturnValue_1, bool CallFunc_StationKnownByMissionManagerBP_ReturnValue, AActor* CallFunc_GetActorOwner_ReturnValue_1, APawn* K2Node_DynamicCast_AsPawn_1, bool K2Node_DynamicCast_bSuccess_4, int32_t CallFunc_InitializeStationInteraction_ReturnValue_2) {}
void UBTT_InteractWithStation_C::InpActEvt_InteractButton_K2Node_CustomInputActionEvent_0(FVariantMapHandle VariantMapHandle) {
    static auto func = (UFunction*)(find_uobject("Function /Game/Pawn/Shared/StateTree/BTT_InteractWithStation.BTT_InteractWithStation_C.InpActEvt_InteractButton_K2Node_CustomInputActionEvent_0"));
    struct Params_InpActEvt_InteractButton_K2Node_CustomInputActionEvent_0 {
        FVariantMapHandle VariantMapHandle; // 0x0
    }; // Size: 0x4
    Params_InpActEvt_InteractButton_K2Node_CustomInputActionEvent_0 params{};
    params.VariantMapHandle = (FVariantMapHandle)VariantMapHandle;
    ProcessEvent(func, &params);
}
void UBTT_InteractWithStation_C::ExitTask(AActor* OwnerActor) {
    static auto func = (UFunction*)(find_uobject("Function /Game/Pawn/Shared/StateTree/BTT_InteractWithStation.BTT_InteractWithStation_C.ExitTask"));
    struct Params_ExitTask {
        AActor* OwnerActor; // 0x0
    }; // Size: 0x8
    Params_ExitTask params{};
    params.OwnerActor = (AActor*)OwnerActor;
    ProcessEvent(func, &params);
}
void UBTT_InteractWithStation_C::StationInteractionExit(UObject* Caller) {
    static auto func = (UFunction*)(find_uobject("Function /Game/Pawn/Shared/StateTree/BTT_InteractWithStation.BTT_InteractWithStation_C.StationInteractionExit"));
    struct Params_StationInteractionExit {
        UObject* Caller; // 0x0
    }; // Size: 0x8
    Params_StationInteractionExit params{};
    params.Caller = (UObject*)Caller;
    ProcessEvent(func, &params);
}
void UBTT_InteractWithStation_C::StationInteractionComplete(UObject* Caller) {
    static auto func = (UFunction*)(find_uobject("Function /Game/Pawn/Shared/StateTree/BTT_InteractWithStation.BTT_InteractWithStation_C.StationInteractionComplete"));
    struct Params_StationInteractionComplete {
        UObject* Caller; // 0x0
    }; // Size: 0x8
    Params_StationInteractionComplete params{};
    params.Caller = (UObject*)Caller;
    ProcessEvent(func, &params);
}
void UBTT_InteractWithStation_C::ReceiveExecute(AActor* OwnerActor) {
    static auto func = (UFunction*)(find_uobject("Function /Game/Pawn/Shared/StateTree/BTT_InteractWithStation.BTT_InteractWithStation_C.ReceiveExecute"));
    struct Params_ReceiveExecute {
        AActor* OwnerActor; // 0x0
    }; // Size: 0x8
    Params_ReceiveExecute params{};
    params.OwnerActor = (AActor*)OwnerActor;
    ProcessEvent(func, &params);
}
