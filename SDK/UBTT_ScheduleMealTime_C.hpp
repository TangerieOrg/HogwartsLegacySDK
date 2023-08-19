#pragma once
#include <cstdint>
#include "EEnvQueryStatus\Type.hpp"
#include "FPointerToUberGraphFrame.hpp"
#include "FStationQueryData.hpp"
#include "UBTTask_AvaAITree.hpp"
class ASocialReasoning;
class AActor;
class UEnvQueryInstanceBlueprintWrapper;
class UEnvQueryInstance_Station;
#pragma pack(push, 1)
class UBTT_ScheduleMealTime_C : public UBTTask_AvaAITree {
public:
    FPointerToUberGraphFrame UberGraphFrame; // 0xd0
    ASocialReasoning* Social_Reasoning; // 0xd8
    static UBTT_ScheduleMealTime_C* StaticClass();
    void ReceiveExecute(AActor* OwnerActor);
    void ExitTask0(AActor* OwnerActor);
    void MealTime_OnQueryFinished(UEnvQueryInstanceBlueprintWrapper* QueryInstance, EEnvQueryStatus::Type QueryStatus);
    void ExecuteUbergraph_BTT_ScheduleMealTime(int32_t EntryPoint, AActor* K2Node_Event_OwnerActor_1, UEnvQueryInstanceBlueprintWrapper* CallFunc_RunEQSQuery_ReturnValue, ASocialReasoning* K2Node_DynamicCast_AsSocial_Reasoning, bool K2Node_DynamicCast_bSuccess, bool CallFunc_IsValid_ReturnValue, bool CallFunc_IsValid_ReturnValue_1, AActor* K2Node_Event_OwnerActor, int32_t Temp_int_Array_Index_Variable, UEnvQueryInstanceBlueprintWrapper* K2Node_CustomEvent_QueryInstance, EEnvQueryStatus::Type K2Node_CustomEvent_QueryStatus, int32_t Temp_int_Loop_Counter_Variable, bool CallFunc_EqualEqual_ByteByte_ReturnValue, int32_t CallFunc_Add_IntInt_ReturnValue, UEnvQueryInstance_Station* K2Node_DynamicCast_AsEQS_Query_Instance_Station, bool K2Node_DynamicCast_bSuccess_1, TArray<FStationQueryData>& CallFunc_GetResultsAsStationQueryData_ReturnValue);
}; // Size: 0xe0
#pragma pack(pop)
