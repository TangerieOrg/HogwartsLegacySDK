#pragma once
#include <cstdint>
#include "FPointerToUberGraphFrame.hpp"
#include "FRotator.hpp"
#include "FStationQueryData.hpp"
#include "FTransform.hpp"
#include "FVariantMapHandle.hpp"
#include "FVector.hpp"
#include "UBTTask_AvaAITree_Input.hpp"
class UUI_BP_Station_Social_Interaction_C;
class UStationComponent;
class UUIManager;
class AActor;
class ABiped_Player;
class UBlackboardComponent;
class UObject;
class APawn;
class AStation;
#pragma pack(push, 1)
class UBTT_InteractWithStation_C : public UBTTask_AvaAITree_Input {
public:
    FPointerToUberGraphFrame UberGraphFrame; // 0x150
    UStationComponent* StationComponent; // 0x158
    UUIManager* UIManager; // 0x160
    UUI_BP_Station_Social_Interaction_C* Station_UI; // 0x168
    FStationQueryData StationData; // 0x170
    static UBTT_InteractWithStation_C* StaticClass();
    void InpActEvt_InteractButton_K2Node_CustomInputActionEvent_0(FVariantMapHandle VariantMapHandle);
    void ExitTask(AActor* OwnerActor);
    void StationInteractionExit(UObject* Caller);
    void StationInteractionComplete(UObject* Caller);
    void ReceiveExecute(AActor* OwnerActor);
    void ExecuteUbergraph_BTT_InteractWithStation(int32_t EntryPoint, AActor* K2Node_Event_OwnerActor, APawn* K2Node_DynamicCast_AsPawn, bool K2Node_DynamicCast_bSuccess, UObject* K2Node_CustomEvent_Caller, UObject* K2Node_CustomEvent_Caller_1, int32_t CallFunc_GetClosestConnection_ReturnValue, AActor* K2Node_Event_OwnerActor_1, UBlackboardComponent* CallFunc_GetBlackboardComponent_ReturnValue, ABiped_Player* K2Node_DynamicCast_AsBiped_Player, bool K2Node_DynamicCast_bSuccess_1, APawn* CallFunc_GetPlayerPawn_ReturnValue, TArray<FStationQueryData>& CallFunc_GetSocialActionChoicesBP_StationQueryData, bool CallFunc_GetSocialActionChoicesBP_ReturnValue, int32_t CallFunc_Array_Length_ReturnValue, FName CallFunc_MakeLiteralName_ReturnValue, bool CallFunc_Greater_IntInt_ReturnValue, FName CallFunc_MakeLiteralName_ReturnValue_1, UBlackboardComponent* CallFunc_GetBlackboardComponent_ReturnValue_1, AActor* CallFunc_GetOwner_ReturnValue, FName CallFunc_MakeLiteralName_ReturnValue_2, FTransform CallFunc_GetTransform_ReturnValue, FVector CallFunc_BreakTransform_Location, FRotator CallFunc_BreakTransform_Rotation, FVector CallFunc_BreakTransform_Scale, UBlackboardComponent* CallFunc_GetBlackboardComponent_ReturnValue_2, FVector CallFunc_Conv_RotatorToVector_ReturnValue, AActor* CallFunc_GetActorOwner_ReturnValue, FName CallFunc_MakeLiteralName_ReturnValue_3, UBlackboardComponent* CallFunc_GetBlackboard_ReturnValue, FName CallFunc_MakeLiteralName_ReturnValue_4, int32_t CallFunc_GetValueAsInt_ReturnValue, UObject* CallFunc_GetValueAsObject_ReturnValue, FStationQueryData K2Node_MakeStruct_StationQueryData, UStationComponent* K2Node_DynamicCast_AsStation_Component, bool K2Node_DynamicCast_bSuccess_2, FVariantMapHandle K2Node_CustomInputActionEvent_VariantMapHandle, int32_t CallFunc_InitializeStationInteraction_ReturnValue, FStationQueryData K2Node_MakeStruct_StationQueryData_1, FName CallFunc_MakeLiteralName_ReturnValue_5, UObject* CallFunc_GetValueAsObject_ReturnValue_1, FStationQueryData K2Node_MakeStruct_StationQueryData_2, AStation* K2Node_DynamicCast_AsStation, bool K2Node_DynamicCast_bSuccess_3, UStationComponent* CallFunc_GetComponentByClass_ReturnValue, bool CallFunc_StationKnownByMailManagerBP_ReturnValue, int32_t CallFunc_InitializeStationInteraction_ReturnValue_1, bool CallFunc_StationKnownByMissionManagerBP_ReturnValue, AActor* CallFunc_GetActorOwner_ReturnValue_1, APawn* K2Node_DynamicCast_AsPawn_1, bool K2Node_DynamicCast_bSuccess_4, int32_t CallFunc_InitializeStationInteraction_ReturnValue_2);
}; // Size: 0x190
#pragma pack(pop)
