#pragma once
#include <cstdint>
#include "FPointerToUberGraphFrame.hpp"
#include "FStationQueryData.hpp"
#include "UBTTask_AvaAITree.hpp"
class AActor;
class UBlackboardComponent;
class UObject;
class UStationComponent;
class ASocialReasoning;
#pragma pack(push, 1)
class UBTT_EventOccupation_StationNeedsService_C : public UBTTask_AvaAITree {
public:
    FPointerToUberGraphFrame UberGraphFrame; // 0xd0
    FName StationNeedingServiceKey; // 0xd8
    static UBTT_EventOccupation_StationNeedsService_C* StaticClass();
    void ReceiveExecute(AActor* OwnerActor);
    void ExitTask(AActor* OwnerActor);
    void ExecuteUbergraph_BTT_EventOccupation_StationNeedsService(int32_t EntryPoint, UBlackboardComponent* CallFunc_GetBlackboardComponent_ReturnValue, UObject* CallFunc_GetValueAsObject_ReturnValue, AActor* K2Node_Event_OwnerActor_1, UStationComponent* K2Node_DynamicCast_AsStation_Component, bool K2Node_DynamicCast_bSuccess, ASocialReasoning* K2Node_DynamicCast_AsSocial_Reasoning, bool K2Node_DynamicCast_bSuccess_1, AActor* K2Node_Event_OwnerActor, UObject* CallFunc_GetReasoner_ReturnValue, TArray<FStationQueryData>& CallFunc_GetSocialActionChoicesBP_StationQueryData, bool CallFunc_GetSocialActionChoicesBP_ReturnValue, int32_t CallFunc_Array_Length_ReturnValue, bool CallFunc_Greater_IntInt_ReturnValue, bool CallFunc_JoinStation_ReturnValue);
}; // Size: 0xe0
#pragma pack(pop)
