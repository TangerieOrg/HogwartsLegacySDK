#include "AActor.hpp"
#include "ASocialReasoning.hpp"
#include "FPointerToUberGraphFrame.hpp"
#include "UBTT_ScheduleOccupationStationUse_C.hpp"
#include "UBTTask_AvaAITree.hpp"
#include "UFunction.hpp"
#include "UObject.hpp"
#include "UScheduledEntity.hpp"
#include "UScheduler.hpp"
UBTT_ScheduleOccupationStationUse_C* UBTT_ScheduleOccupationStationUse_C::StaticClass() {
    static auto res = find_uobject("BlueprintGeneratedClass /Game/Pawn/Student/Ideas/BTT_ScheduleOccupationStationUse.BTT_ScheduleOccupationStationUse_C");
    return (UBTT_ScheduleOccupationStationUse_C*)res;
}
void UBTT_ScheduleOccupationStationUse_C::ReceiveExecute(AActor* OwnerActor) {
    static auto func = (UFunction*)(find_uobject("Function /Game/Pawn/Student/Ideas/BTT_ScheduleOccupationStationUse.BTT_ScheduleOccupationStationUse_C.ReceiveExecute"));
    struct Params_ReceiveExecute {
        AActor* OwnerActor; // 0x0
    }; // Size: 0x8
    Params_ReceiveExecute params{};
    params.OwnerActor = (AActor*)OwnerActor;
    ProcessEvent(func, &params);
}
void UBTT_ScheduleOccupationStationUse_C::ExitTask(AActor* OwnerActor) {
    static auto func = (UFunction*)(find_uobject("Function /Game/Pawn/Student/Ideas/BTT_ScheduleOccupationStationUse.BTT_ScheduleOccupationStationUse_C.ExitTask"));
    struct Params_ExitTask {
        AActor* OwnerActor; // 0x0
    }; // Size: 0x8
    Params_ExitTask params{};
    params.OwnerActor = (AActor*)OwnerActor;
    ProcessEvent(func, &params);
}
void UBTT_ScheduleOccupationStationUse_C::ExecuteUbergraph_BTT_ScheduleOccupationStationUse(int32_t EntryPoint, AActor* K2Node_Event_OwnerActor_1, AActor* K2Node_Event_OwnerActor, ASocialReasoning* K2Node_DynamicCast_AsSocial_Reasoning, bool K2Node_DynamicCast_bSuccess, UObject* CallFunc_GetReasoner_ReturnValue, UScheduledEntity* K2Node_DynamicCast_AsScheduled_Entity, bool K2Node_DynamicCast_bSuccess_1, bool CallFunc_GetMinutesToUpcomingActivity_ActivityIsValid, int32_t CallFunc_GetMinutesToUpcomingActivity_MinutesToUpcomingActivity, float CallFunc_Conv_IntToFloat_ReturnValue, float CallFunc_RandomFloatInRange_ReturnValue, float CallFunc_FMin_ReturnValue, UScheduler* CallFunc_Get_ReturnValue, float CallFunc_GetSimulatedSecondMultiplier_ReturnValue, float CallFunc_Multiply_FloatFloat_ReturnValue, float CallFunc_Multiply_FloatFloat_ReturnValue_1) {
    static auto func = (UFunction*)(find_uobject("Function /Game/Pawn/Student/Ideas/BTT_ScheduleOccupationStationUse.BTT_ScheduleOccupationStationUse_C.ExecuteUbergraph_BTT_ScheduleOccupationStationUse"));
    struct Params_ExecuteUbergraph_BTT_ScheduleOccupationStationUse {
        int32_t EntryPoint; // 0x0
        char pad_4[0x4];
        AActor* K2Node_Event_OwnerActor_1; // 0x8
        AActor* K2Node_Event_OwnerActor; // 0x10
        ASocialReasoning* K2Node_DynamicCast_AsSocial_Reasoning; // 0x18
        bool K2Node_DynamicCast_bSuccess; // 0x20
        char pad_21[0x7];
        UObject* CallFunc_GetReasoner_ReturnValue; // 0x28
        UScheduledEntity* K2Node_DynamicCast_AsScheduled_Entity; // 0x30
        bool K2Node_DynamicCast_bSuccess_1; // 0x38
        bool CallFunc_GetMinutesToUpcomingActivity_ActivityIsValid; // 0x39
        char pad_3a[0x2];
        int32_t CallFunc_GetMinutesToUpcomingActivity_MinutesToUpcomingActivity; // 0x3c
        float CallFunc_Conv_IntToFloat_ReturnValue; // 0x40
        float CallFunc_RandomFloatInRange_ReturnValue; // 0x44
        float CallFunc_FMin_ReturnValue; // 0x48
        char pad_4c[0x4];
        UScheduler* CallFunc_Get_ReturnValue; // 0x50
        float CallFunc_GetSimulatedSecondMultiplier_ReturnValue; // 0x58
        float CallFunc_Multiply_FloatFloat_ReturnValue; // 0x5c
        float CallFunc_Multiply_FloatFloat_ReturnValue_1; // 0x60
    }; // Size: 0x64
    Params_ExecuteUbergraph_BTT_ScheduleOccupationStationUse params{};
    params.EntryPoint = (int32_t)EntryPoint;
    params.K2Node_Event_OwnerActor_1 = (AActor*)K2Node_Event_OwnerActor_1;
    params.K2Node_Event_OwnerActor = (AActor*)K2Node_Event_OwnerActor;
    params.K2Node_DynamicCast_AsSocial_Reasoning = (ASocialReasoning*)K2Node_DynamicCast_AsSocial_Reasoning;
    params.K2Node_DynamicCast_bSuccess = (bool)K2Node_DynamicCast_bSuccess;
    params.CallFunc_GetReasoner_ReturnValue = (UObject*)CallFunc_GetReasoner_ReturnValue;
    params.K2Node_DynamicCast_AsScheduled_Entity = (UScheduledEntity*)K2Node_DynamicCast_AsScheduled_Entity;
    params.K2Node_DynamicCast_bSuccess_1 = (bool)K2Node_DynamicCast_bSuccess_1;
    params.CallFunc_GetMinutesToUpcomingActivity_ActivityIsValid = (bool)CallFunc_GetMinutesToUpcomingActivity_ActivityIsValid;
    params.CallFunc_GetMinutesToUpcomingActivity_MinutesToUpcomingActivity = (int32_t)CallFunc_GetMinutesToUpcomingActivity_MinutesToUpcomingActivity;
    params.CallFunc_Conv_IntToFloat_ReturnValue = (float)CallFunc_Conv_IntToFloat_ReturnValue;
    params.CallFunc_RandomFloatInRange_ReturnValue = (float)CallFunc_RandomFloatInRange_ReturnValue;
    params.CallFunc_FMin_ReturnValue = (float)CallFunc_FMin_ReturnValue;
    params.CallFunc_Get_ReturnValue = (UScheduler*)CallFunc_Get_ReturnValue;
    params.CallFunc_GetSimulatedSecondMultiplier_ReturnValue = (float)CallFunc_GetSimulatedSecondMultiplier_ReturnValue;
    params.CallFunc_Multiply_FloatFloat_ReturnValue = (float)CallFunc_Multiply_FloatFloat_ReturnValue;
    params.CallFunc_Multiply_FloatFloat_ReturnValue_1 = (float)CallFunc_Multiply_FloatFloat_ReturnValue_1;
    ProcessEvent(func, &params);
}
