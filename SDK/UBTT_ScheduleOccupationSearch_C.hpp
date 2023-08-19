#pragma once
#include <cstdint>
#include "EEnvQueryStatus\Type.hpp"
#include "FPointerToUberGraphFrame.hpp"
#include "FStationQueryData.hpp"
#include "UBTTask_AvaAITree.hpp"
class ASocialReasoning;
class UBlackboardComponent;
class UEnvQueryInstance_Station;
class AActor;
class UEnvQueryInstanceBlueprintWrapper;
#pragma pack(push, 1)
class UBTT_ScheduleOccupationSearch_C : public UBTTask_AvaAITree {
public:
    FPointerToUberGraphFrame UberGraphFrame; // 0xd0
    ASocialReasoning* Social_Reasoning; // 0xd8
    UBlackboardComponent* BB; // 0xe0
    bool SideWork; // 0xe8
    char pad_e9[0x7];
    static UBTT_ScheduleOccupationSearch_C* StaticClass();
    void ReceiveExecute(AActor* OwnerActor);
    void ExitTask0(AActor* OwnerActor);
    void Occupation_Job_OnQueryFinished(UEnvQueryInstanceBlueprintWrapper* QueryInstance, EEnvQueryStatus::Type QueryStatus);
    void ExecuteUbergraph_BTT_ScheduleOccupationSearch(int32_t EntryPoint, AActor* K2Node_Event_OwnerActor_1, AActor* K2Node_Event_OwnerActor, ASocialReasoning* K2Node_DynamicCast_AsSocial_Reasoning, bool K2Node_DynamicCast_bSuccess, UEnvQueryInstanceBlueprintWrapper* K2Node_CustomEvent_QueryInstance, EEnvQueryStatus::Type K2Node_CustomEvent_QueryStatus, bool CallFunc_EqualEqual_ByteByte_ReturnValue, UEnvQueryInstance_Station* K2Node_DynamicCast_AsEQS_Query_Instance_Station, bool K2Node_DynamicCast_bSuccess_1, TArray<FStationQueryData>& CallFunc_GetResultsAsStationQueryData_ReturnValue, bool CallFunc_JoinStation_ReturnValue);
}; // Size: 0xf0
#pragma pack(pop)
