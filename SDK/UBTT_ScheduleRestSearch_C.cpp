#include "AActor.hpp"
#include "ASocialReasoning.hpp"
#include "EEnvQueryStatus\Type.hpp"
#include "FPointerToUberGraphFrame.hpp"
#include "FStationQueryData.hpp"
#include "UBTT_ScheduleRestSearch_C.hpp"
#include "UBTTask_AvaAITree.hpp"
#include "UBlackboardComponent.hpp"
#include "UEnvQueryInstanceBlueprintWrapper.hpp"
#include "UEnvQueryInstance_Station.hpp"
#include "UFunction.hpp"
void UBTT_ScheduleRestSearch_C::ExitTask0(AActor* OwnerActor) {
    static auto func = (UFunction*)(find_uobject("Function /Game/Pawn/Student/Ideas/BTT_ScheduleRestSearch.BTT_ScheduleRestSearch_C.ExitTask"));
    struct Params_ExitTask {
        AActor* OwnerActor; // 0x0
    }; // Size: 0x8
    Params_ExitTask params{};
    params.OwnerActor = (AActor*)OwnerActor;
    ProcessEvent(func, &params);
}
UBTT_ScheduleRestSearch_C* UBTT_ScheduleRestSearch_C::StaticClass() {
    static auto res = find_uobject("BlueprintGeneratedClass /Game/Pawn/Student/Ideas/BTT_ScheduleRestSearch.BTT_ScheduleRestSearch_C");
    return (UBTT_ScheduleRestSearch_C*)res;
}
void UBTT_ScheduleRestSearch_C::ReceiveExecute(AActor* OwnerActor) {
    static auto func = (UFunction*)(find_uobject("Function /Game/Pawn/Student/Ideas/BTT_ScheduleRestSearch.BTT_ScheduleRestSearch_C.ReceiveExecute"));
    struct Params_ReceiveExecute {
        AActor* OwnerActor; // 0x0
    }; // Size: 0x8
    Params_ReceiveExecute params{};
    params.OwnerActor = (AActor*)OwnerActor;
    ProcessEvent(func, &params);
}
void UBTT_ScheduleRestSearch_C::ExecuteUbergraph_BTT_ScheduleRestSearch(int32_t EntryPoint, AActor* K2Node_Event_OwnerActor_1, AActor* K2Node_Event_OwnerActor, ASocialReasoning* K2Node_DynamicCast_AsSocial_Reasoning, bool K2Node_DynamicCast_bSuccess, UEnvQueryInstanceBlueprintWrapper* K2Node_CustomEvent_QueryInstance, EEnvQueryStatus::Type K2Node_CustomEvent_QueryStatus, bool CallFunc_EqualEqual_ByteByte_ReturnValue, UEnvQueryInstance_Station* K2Node_DynamicCast_AsEQS_Query_Instance_Station, bool K2Node_DynamicCast_bSuccess_1, TArray<FStationQueryData>& CallFunc_GetResultsAsStationQueryData_ReturnValue, bool CallFunc_JoinStation_ReturnValue) {}
void UBTT_ScheduleRestSearch_C::Patrol_Job_OnQueryFinished(UEnvQueryInstanceBlueprintWrapper* QueryInstance, EEnvQueryStatus::Type QueryStatus) {
    static auto func = (UFunction*)(find_uobject("Function /Game/Pawn/Student/Ideas/BTT_ScheduleRestSearch.BTT_ScheduleRestSearch_C.Patrol_Job_OnQueryFinished"));
    struct Params_Patrol_Job_OnQueryFinished {
        UEnvQueryInstanceBlueprintWrapper* QueryInstance; // 0x0
        EEnvQueryStatus::Type QueryStatus; // 0x8
    }; // Size: 0x9
    Params_Patrol_Job_OnQueryFinished params{};
    params.QueryInstance = (UEnvQueryInstanceBlueprintWrapper*)QueryInstance;
    params.QueryStatus = (EEnvQueryStatus::Type)QueryStatus;
    ProcessEvent(func, &params);
}
