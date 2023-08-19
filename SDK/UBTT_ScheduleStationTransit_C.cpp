#include "AActor.hpp"
#include "ASocialReasoning.hpp"
#include "EEnvQueryStatus\Type.hpp"
#include "FGreetingQueryData.hpp"
#include "FPointerToUberGraphFrame.hpp"
#include "UBTT_ScheduleStationTransit_C.hpp"
#include "UBTTask_AvaAITree.hpp"
#include "UEnvQueryInstanceBlueprintWrapper.hpp"
#include "UFunction.hpp"
#include "UObject.hpp"
#include "UScheduledEntity.hpp"
UBTT_ScheduleStationTransit_C* UBTT_ScheduleStationTransit_C::StaticClass() {
    static auto res = find_uobject("BlueprintGeneratedClass /Game/Pawn/Student/Ideas/BTT_ScheduleStationTransit.BTT_ScheduleStationTransit_C");
    return (UBTT_ScheduleStationTransit_C*)res;
}
void UBTT_ScheduleStationTransit_C::ExitTask(AActor* OwnerActor) {
    static auto func = (UFunction*)(find_uobject("Function /Game/Pawn/Student/Ideas/BTT_ScheduleStationTransit.BTT_ScheduleStationTransit_C.ExitTask"));
    struct Params_ExitTask {
        AActor* OwnerActor; // 0x0
    }; // Size: 0x8
    Params_ExitTask params{};
    params.OwnerActor = (AActor*)OwnerActor;
    ProcessEvent(func, &params);
}
void UBTT_ScheduleStationTransit_C::StationTransit_AcknowledgeFriends_OnQueryFinished(UEnvQueryInstanceBlueprintWrapper* QueryInstance, EEnvQueryStatus::Type QueryStatus) {
    static auto func = (UFunction*)(find_uobject("Function /Game/Pawn/Student/Ideas/BTT_ScheduleStationTransit.BTT_ScheduleStationTransit_C.StationTransit_AcknowledgeFriends_OnQueryFinished"));
    struct Params_StationTransit_AcknowledgeFriends_OnQueryFinished {
        UEnvQueryInstanceBlueprintWrapper* QueryInstance; // 0x0
        EEnvQueryStatus::Type QueryStatus; // 0x8
    }; // Size: 0x9
    Params_StationTransit_AcknowledgeFriends_OnQueryFinished params{};
    params.QueryInstance = (UEnvQueryInstanceBlueprintWrapper*)QueryInstance;
    params.QueryStatus = (EEnvQueryStatus::Type)QueryStatus;
    ProcessEvent(func, &params);
}
void UBTT_ScheduleStationTransit_C::ReceiveExecute(AActor* OwnerActor) {
    static auto func = (UFunction*)(find_uobject("Function /Game/Pawn/Student/Ideas/BTT_ScheduleStationTransit.BTT_ScheduleStationTransit_C.ReceiveExecute"));
    struct Params_ReceiveExecute {
        AActor* OwnerActor; // 0x0
    }; // Size: 0x8
    Params_ReceiveExecute params{};
    params.OwnerActor = (AActor*)OwnerActor;
    ProcessEvent(func, &params);
}
void UBTT_ScheduleStationTransit_C::ExecuteUbergraph_BTT_ScheduleStationTransit(int32_t EntryPoint, UObject* CallFunc_GetReasoner_ReturnValue, UScheduledEntity* K2Node_DynamicCast_AsScheduled_Entity, bool K2Node_DynamicCast_bSuccess, UEnvQueryInstanceBlueprintWrapper* CallFunc_RunEQSQuery_ReturnValue, bool CallFunc_CurrentlyInFlesh_ReturnValue, UEnvQueryInstanceBlueprintWrapper* K2Node_CustomEvent_QueryInstance, EEnvQueryStatus::Type K2Node_CustomEvent_QueryStatus, bool CallFunc_EqualEqual_ByteByte_ReturnValue, TArray<AActor*>& CallFunc_GetQueryResultsAsActors_ResultActors, bool CallFunc_GetQueryResultsAsActors_ReturnValue, AActor* K2Node_Event_OwnerActor, TArray<AActor*>& CallFunc_SelectGhostStoryPartners_AvailablePartners, bool CallFunc_SelectGhostStoryPartners_ReturnValue, bool CallFunc_IsValid_ReturnValue, float CallFunc_WhomShallIGreet_Score, FGreetingQueryData CallFunc_WhomShallIGreet_ReturnValue, AActor* K2Node_Event_OwnerActor_1, float CallFunc_RandomFloatInRange_ReturnValue, float CallFunc_Multiply_FloatFloat_ReturnValue) {}
