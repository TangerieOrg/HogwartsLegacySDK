#include "AActor.hpp"
#include "ASocialReasoning.hpp"
#include "EEnvQueryStatus\Type.hpp"
#include "FPointerToUberGraphFrame.hpp"
#include "FStationQueryData.hpp"
#include "UBTT_ScheduleMissionCriticalSearch_C.hpp"
#include "UBTTask_AvaAITree.hpp"
#include "UEnvQueryInstanceBlueprintWrapper.hpp"
#include "UEnvQueryInstance_Station.hpp"
#include "UFunction.hpp"
UBTT_ScheduleMissionCriticalSearch_C* UBTT_ScheduleMissionCriticalSearch_C::StaticClass() {
    static auto res = find_uobject("BlueprintGeneratedClass /Game/Pawn/Student/Ideas/BTT_ScheduleMissionCriticalSearch.BTT_ScheduleMissionCriticalSearch_C");
    return (UBTT_ScheduleMissionCriticalSearch_C*)res;
}
void UBTT_ScheduleMissionCriticalSearch_C::ReceiveExecute(AActor* OwnerActor) {
    static auto func = (UFunction*)(find_uobject("Function /Game/Pawn/Student/Ideas/BTT_ScheduleMissionCriticalSearch.BTT_ScheduleMissionCriticalSearch_C.ReceiveExecute"));
    struct Params_ReceiveExecute {
        AActor* OwnerActor; // 0x0
    }; // Size: 0x8
    Params_ReceiveExecute params{};
    params.OwnerActor = (AActor*)OwnerActor;
    ProcessEvent(func, &params);
}
void UBTT_ScheduleMissionCriticalSearch_C::ExecuteUbergraph_BTT_ScheduleMissionCriticalSearch(int32_t EntryPoint, UEnvQueryInstanceBlueprintWrapper* CallFunc_RunEQSQuery_ReturnValue, int32_t Temp_int_Array_Index_Variable, bool CallFunc_IsValid_ReturnValue, bool CallFunc_IsValid_ReturnValue_1, AActor* K2Node_Event_OwnerActor_1, ASocialReasoning* K2Node_DynamicCast_AsSocial_Reasoning, bool K2Node_DynamicCast_bSuccess, AActor* K2Node_Event_OwnerActor, UEnvQueryInstanceBlueprintWrapper* K2Node_CustomEvent_QueryInstance, EEnvQueryStatus::Type K2Node_CustomEvent_QueryStatus, bool CallFunc_EqualEqual_ByteByte_ReturnValue, UEnvQueryInstance_Station* K2Node_DynamicCast_AsEQS_Query_Instance_Station, bool K2Node_DynamicCast_bSuccess_1, TArray<FStationQueryData>& CallFunc_GetResultsAsStationQueryData_ReturnValue, int32_t Temp_int_Loop_Counter_Variable, FStationQueryData CallFunc_Array_Get_Item, bool CallFunc_JoinStation_ReturnValue, int32_t CallFunc_Add_IntInt_ReturnValue, int32_t CallFunc_Array_Length_ReturnValue, bool CallFunc_Less_IntInt_ReturnValue) {}
void UBTT_ScheduleMissionCriticalSearch_C::ExitTask0(AActor* OwnerActor) {
    static auto func = (UFunction*)(find_uobject("Function /Game/Pawn/Student/Ideas/BTT_ScheduleMissionCriticalSearch.BTT_ScheduleMissionCriticalSearch_C.ExitTask"));
    struct Params_ExitTask {
        AActor* OwnerActor; // 0x0
    }; // Size: 0x8
    Params_ExitTask params{};
    params.OwnerActor = (AActor*)OwnerActor;
    ProcessEvent(func, &params);
}
void UBTT_ScheduleMissionCriticalSearch_C::MissionCritical_OnQueryFinished(UEnvQueryInstanceBlueprintWrapper* QueryInstance, EEnvQueryStatus::Type QueryStatus) {
    static auto func = (UFunction*)(find_uobject("Function /Game/Pawn/Student/Ideas/BTT_ScheduleMissionCriticalSearch.BTT_ScheduleMissionCriticalSearch_C.MissionCritical_OnQueryFinished"));
    struct Params_MissionCritical_OnQueryFinished {
        UEnvQueryInstanceBlueprintWrapper* QueryInstance; // 0x0
        EEnvQueryStatus::Type QueryStatus; // 0x8
    }; // Size: 0x9
    Params_MissionCritical_OnQueryFinished params{};
    params.QueryInstance = (UEnvQueryInstanceBlueprintWrapper*)QueryInstance;
    params.QueryStatus = (EEnvQueryStatus::Type)QueryStatus;
    ProcessEvent(func, &params);
}
