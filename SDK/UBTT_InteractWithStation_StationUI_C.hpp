#pragma once
#include <cstdint>
#include "EMobilityActionState\Type.hpp"
#include "FPointerToUberGraphFrame.hpp"
#include "FStationQueryData.hpp"
#include "FVariantMapHandle.hpp"
#include "UBTTask_AvaAITree_Input.hpp"
class UObject;
class UBlackboardComponent;
class UStationComponent;
class UUI_BP_Station_Social_Interaction_C;
class APlayerController;
class UUIManager;
class AActor;
class AStation;
#pragma pack(push, 1)
class UBTT_InteractWithStation_StationUI_C : public UBTTask_AvaAITree_Input {
public:
    FPointerToUberGraphFrame UberGraphFrame; // 0x150
    EMobilityActionState::Type StartingMobilityActionState; // 0x158
    char pad_159[0x7];
    UObject* StationActor; // 0x160
    UStationComponent* StationComponent; // 0x168
    UUIManager* UIManager; // 0x170
    UUI_BP_Station_Social_Interaction_C* Station_UI; // 0x178
    static UBTT_InteractWithStation_StationUI_C* StaticClass();
    void InpActEvt_InteractButton_K2Node_CustomInputActionEvent_0(FVariantMapHandle VariantMapHandle);
    void ExitTask(AActor* OwnerActor);
    void ReceiveExecute(AActor* OwnerActor);
    void ExecuteUbergraph_BTT_InteractWithStation_StationUI(int32_t EntryPoint, FVariantMapHandle K2Node_CustomInputActionEvent_VariantMapHandle, FName CallFunc_MakeLiteralName_ReturnValue, UBlackboardComponent* CallFunc_GetBlackboardComponent_ReturnValue, APlayerController* CallFunc_GetPlayerController_ReturnValue, UObject* CallFunc_GetValueAsObject_ReturnValue, UUI_BP_Station_Social_Interaction_C* CallFunc_Create_ReturnValue, AStation* K2Node_DynamicCast_AsStation, bool K2Node_DynamicCast_bSuccess, UStationComponent* CallFunc_GetComponentByClass_ReturnValue, AActor* CallFunc_GetActorOwner_ReturnValue, UBlackboardComponent* CallFunc_GetBlackboard_ReturnValue, FName CallFunc_MakeLiteralName_ReturnValue_1, FName CallFunc_MakeLiteralName_ReturnValue_2, int32_t CallFunc_GetValueAsInt_ReturnValue, UObject* CallFunc_GetValueAsObject_ReturnValue_1, FStationQueryData K2Node_MakeStruct_StationQueryData, UStationComponent* K2Node_DynamicCast_AsStation_Component, bool K2Node_DynamicCast_bSuccess_1, int32_t CallFunc_InitializeStationInteraction_ReturnValue, AActor* K2Node_Event_OwnerActor, AActor* K2Node_Event_OwnerActor_1, bool CallFunc_LockStation_ReturnValue, TArray<FStationQueryData>& CallFunc_GetSocialActionChoicesBP_StationQueryData, bool CallFunc_GetSocialActionChoicesBP_ReturnValue);
}; // Size: 0x180
#pragma pack(pop)
