#include "AActor.hpp"
#include "ASocialReasoning.hpp"
#include "FPointerToUberGraphFrame.hpp"
#include "UBTT_SchedulePerformTaskStationUse_C.hpp"
#include "UBTTask_AvaAITree.hpp"
#include "UFunction.hpp"
#include "UObject.hpp"
#include "UScheduledEntity.hpp"
void UBTT_SchedulePerformTaskStationUse_C::ReceiveExecute(AActor* OwnerActor) {
    static auto func = (UFunction*)(find_uobject("Function /Game/Pawn/Student/Ideas/BTT_SchedulePerformTaskStationUse.BTT_SchedulePerformTaskStationUse_C.ReceiveExecute"));
    struct Params_ReceiveExecute {
        AActor* OwnerActor; // 0x0
    }; // Size: 0x8
    Params_ReceiveExecute params{};
    params.OwnerActor = (AActor*)OwnerActor;
    ProcessEvent(func, &params);
}
UBTT_SchedulePerformTaskStationUse_C* UBTT_SchedulePerformTaskStationUse_C::StaticClass() {
    static auto res = find_uobject("BlueprintGeneratedClass /Game/Pawn/Student/Ideas/BTT_SchedulePerformTaskStationUse.BTT_SchedulePerformTaskStationUse_C");
    return (UBTT_SchedulePerformTaskStationUse_C*)res;
}
void UBTT_SchedulePerformTaskStationUse_C::ExitTask0(AActor* OwnerActor) {
    static auto func = (UFunction*)(find_uobject("Function /Game/Pawn/Student/Ideas/BTT_SchedulePerformTaskStationUse.BTT_SchedulePerformTaskStationUse_C.ExitTask"));
    struct Params_ExitTask {
        AActor* OwnerActor; // 0x0
    }; // Size: 0x8
    Params_ExitTask params{};
    params.OwnerActor = (AActor*)OwnerActor;
    ProcessEvent(func, &params);
}
void UBTT_SchedulePerformTaskStationUse_C::ExecuteUbergraph_BTT_SchedulePerformTaskStationUse(int32_t EntryPoint, AActor* K2Node_Event_OwnerActor_1, ASocialReasoning* K2Node_DynamicCast_AsSocial_Reasoning, bool K2Node_DynamicCast_bSuccess, UObject* CallFunc_GetReasoner_ReturnValue, UScheduledEntity* K2Node_DynamicCast_AsScheduled_Entity, bool K2Node_DynamicCast_bSuccess_1, AActor* K2Node_Event_OwnerActor, ASocialReasoning* K2Node_DynamicCast_AsSocial_Reasoning_1, bool K2Node_DynamicCast_bSuccess_2, UObject* CallFunc_GetReasoner_ReturnValue_1, UScheduledEntity* K2Node_DynamicCast_AsScheduled_Entity_1, bool K2Node_DynamicCast_bSuccess_3) {
    static auto func = (UFunction*)(find_uobject("Function /Game/Pawn/Student/Ideas/BTT_SchedulePerformTaskStationUse.BTT_SchedulePerformTaskStationUse_C.ExecuteUbergraph_BTT_SchedulePerformTaskStationUse"));
    struct Params_ExecuteUbergraph_BTT_SchedulePerformTaskStationUse {
        int32_t EntryPoint; // 0x0
        char pad_4[0x4];
        AActor* K2Node_Event_OwnerActor_1; // 0x8
        ASocialReasoning* K2Node_DynamicCast_AsSocial_Reasoning; // 0x10
        bool K2Node_DynamicCast_bSuccess; // 0x18
        char pad_19[0x7];
        UObject* CallFunc_GetReasoner_ReturnValue; // 0x20
        UScheduledEntity* K2Node_DynamicCast_AsScheduled_Entity; // 0x28
        bool K2Node_DynamicCast_bSuccess_1; // 0x30
        char pad_31[0x7];
        AActor* K2Node_Event_OwnerActor; // 0x38
        ASocialReasoning* K2Node_DynamicCast_AsSocial_Reasoning_1; // 0x40
        bool K2Node_DynamicCast_bSuccess_2; // 0x48
        char pad_49[0x7];
        UObject* CallFunc_GetReasoner_ReturnValue_1; // 0x50
        UScheduledEntity* K2Node_DynamicCast_AsScheduled_Entity_1; // 0x58
        bool K2Node_DynamicCast_bSuccess_3; // 0x60
    }; // Size: 0x61
    Params_ExecuteUbergraph_BTT_SchedulePerformTaskStationUse params{};
    params.EntryPoint = (int32_t)EntryPoint;
    params.K2Node_Event_OwnerActor_1 = (AActor*)K2Node_Event_OwnerActor_1;
    params.K2Node_DynamicCast_AsSocial_Reasoning = (ASocialReasoning*)K2Node_DynamicCast_AsSocial_Reasoning;
    params.K2Node_DynamicCast_bSuccess = (bool)K2Node_DynamicCast_bSuccess;
    params.CallFunc_GetReasoner_ReturnValue = (UObject*)CallFunc_GetReasoner_ReturnValue;
    params.K2Node_DynamicCast_AsScheduled_Entity = (UScheduledEntity*)K2Node_DynamicCast_AsScheduled_Entity;
    params.K2Node_DynamicCast_bSuccess_1 = (bool)K2Node_DynamicCast_bSuccess_1;
    params.K2Node_Event_OwnerActor = (AActor*)K2Node_Event_OwnerActor;
    params.K2Node_DynamicCast_AsSocial_Reasoning_1 = (ASocialReasoning*)K2Node_DynamicCast_AsSocial_Reasoning_1;
    params.K2Node_DynamicCast_bSuccess_2 = (bool)K2Node_DynamicCast_bSuccess_2;
    params.CallFunc_GetReasoner_ReturnValue_1 = (UObject*)CallFunc_GetReasoner_ReturnValue_1;
    params.K2Node_DynamicCast_AsScheduled_Entity_1 = (UScheduledEntity*)K2Node_DynamicCast_AsScheduled_Entity_1;
    params.K2Node_DynamicCast_bSuccess_3 = (bool)K2Node_DynamicCast_bSuccess_3;
    ProcessEvent(func, &params);
}
