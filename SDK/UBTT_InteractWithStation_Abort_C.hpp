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
class UUIManager;
class AActor;
#pragma pack(push, 1)
class UBTT_InteractWithStation_Abort_C : public UBTTask_AvaAITree_Input {
public:
    FPointerToUberGraphFrame UberGraphFrame; // 0x150
    EMobilityActionState::Type StartingMobilityActionState; // 0x158
    char pad_159[0x7];
    UObject* StationActor; // 0x160
    UStationComponent* StationComponent; // 0x168
    UUIManager* UIManager; // 0x170
    UUI_BP_Station_Social_Interaction_C* Station_UI; // 0x178
    static UBTT_InteractWithStation_Abort_C* StaticClass();
    void InpActEvt_InteractButton_K2Node_CustomInputActionEvent_0(FVariantMapHandle VariantMapHandle);
    void ExitTask(AActor* OwnerActor);
    void ReceiveExecute(AActor* OwnerActor);
    void ExecuteUbergraph_BTT_InteractWithStation_Abort(int32_t EntryPoint, FVariantMapHandle K2Node_CustomInputActionEvent_VariantMapHandle, AActor* CallFunc_GetActorOwner_ReturnValue, AActor* K2Node_Event_OwnerActor, UBlackboardComponent* CallFunc_GetBlackboard_ReturnValue, UBlackboardComponent* CallFunc_GetBlackboard_ReturnValue_1, FName CallFunc_MakeLiteralName_ReturnValue, FName CallFunc_MakeLiteralName_ReturnValue_1, int32_t CallFunc_GetValueAsInt_ReturnValue, UObject* CallFunc_GetValueAsObject_ReturnValue, FStationQueryData K2Node_MakeStruct_StationQueryData, UStationComponent* K2Node_DynamicCast_AsStation_Component, bool K2Node_DynamicCast_bSuccess, FName CallFunc_MakeLiteralName_ReturnValue_2, int32_t CallFunc_InitializeStationInteraction_ReturnValue, int32_t CallFunc_GetValueAsInt_ReturnValue_1, FName CallFunc_MakeLiteralName_ReturnValue_3, FStationQueryData K2Node_MakeStruct_StationQueryData_1, FName CallFunc_MakeLiteralName_ReturnValue_4, FName CallFunc_MakeLiteralName_ReturnValue_5, FName CallFunc_MakeLiteralName_ReturnValue_6, FName CallFunc_MakeLiteralName_ReturnValue_7, UObject* CallFunc_GetValueAsObject_ReturnValue_1, AActor* K2Node_Event_OwnerActor_1, UStationComponent* K2Node_DynamicCast_AsStation_Component_1, bool K2Node_DynamicCast_bSuccess_1, UBlackboardComponent* CallFunc_GetBlackboard_ReturnValue_2, bool CallFunc_UnlockStationBP_ReturnValue, int32_t CallFunc_InitializeStationInteraction_ReturnValue_1);
}; // Size: 0x180
#pragma pack(pop)
