#include "AActor.hpp"
#include "ASocialReasoning.hpp"
#include "FPointerToUberGraphFrame.hpp"
#include "UBTT_ScheduleLoiter_C.hpp"
#include "UBTTask_AvaAITree.hpp"
#include "UFunction.hpp"
#include "UScheduler.hpp"
UBTT_ScheduleLoiter_C* UBTT_ScheduleLoiter_C::StaticClass() {
    static auto res = find_uobject("BlueprintGeneratedClass /Game/Pawn/Student/Ideas/BTT_ScheduleLoiter.BTT_ScheduleLoiter_C");
    return (UBTT_ScheduleLoiter_C*)res;
}
void UBTT_ScheduleLoiter_C::ReceiveExecute(AActor* OwnerActor) {
    static auto func = (UFunction*)(find_uobject("Function /Game/Pawn/Student/Ideas/BTT_ScheduleLoiter.BTT_ScheduleLoiter_C.ReceiveExecute"));
    struct Params_ReceiveExecute {
        AActor* OwnerActor; // 0x0
    }; // Size: 0x8
    Params_ReceiveExecute params{};
    params.OwnerActor = (AActor*)OwnerActor;
    ProcessEvent(func, &params);
}
void UBTT_ScheduleLoiter_C::ExitTask0(AActor* OwnerActor) {
    static auto func = (UFunction*)(find_uobject("Function /Game/Pawn/Student/Ideas/BTT_ScheduleLoiter.BTT_ScheduleLoiter_C.ExitTask"));
    struct Params_ExitTask {
        AActor* OwnerActor; // 0x0
    }; // Size: 0x8
    Params_ExitTask params{};
    params.OwnerActor = (AActor*)OwnerActor;
    ProcessEvent(func, &params);
}
void UBTT_ScheduleLoiter_C::ExecuteUbergraph_BTT_ScheduleLoiter(int32_t EntryPoint, float CallFunc_GetFreeTimeMinMaxStationChangeTime_outMinTime, float CallFunc_GetFreeTimeMinMaxStationChangeTime_outMaxTime, AActor* K2Node_Event_OwnerActor_1, float CallFunc_RandomFloatInRange_ReturnValue, ASocialReasoning* K2Node_DynamicCast_AsSocial_Reasoning, bool K2Node_DynamicCast_bSuccess, AActor* K2Node_Event_OwnerActor, UScheduler* CallFunc_Get_ReturnValue, float CallFunc_GetSimulatedSecondMultiplier_ReturnValue, float CallFunc_Multiply_FloatFloat_ReturnValue, float CallFunc_Multiply_FloatFloat_ReturnValue_1) {
    static auto func = (UFunction*)(find_uobject("Function /Game/Pawn/Student/Ideas/BTT_ScheduleLoiter.BTT_ScheduleLoiter_C.ExecuteUbergraph_BTT_ScheduleLoiter"));
    struct Params_ExecuteUbergraph_BTT_ScheduleLoiter {
        int32_t EntryPoint; // 0x0
        float CallFunc_GetFreeTimeMinMaxStationChangeTime_outMinTime; // 0x4
        float CallFunc_GetFreeTimeMinMaxStationChangeTime_outMaxTime; // 0x8
        char pad_c[0x4];
        AActor* K2Node_Event_OwnerActor_1; // 0x10
        float CallFunc_RandomFloatInRange_ReturnValue; // 0x18
        char pad_1c[0x4];
        ASocialReasoning* K2Node_DynamicCast_AsSocial_Reasoning; // 0x20
        bool K2Node_DynamicCast_bSuccess; // 0x28
        char pad_29[0x7];
        AActor* K2Node_Event_OwnerActor; // 0x30
        UScheduler* CallFunc_Get_ReturnValue; // 0x38
        float CallFunc_GetSimulatedSecondMultiplier_ReturnValue; // 0x40
        float CallFunc_Multiply_FloatFloat_ReturnValue; // 0x44
        float CallFunc_Multiply_FloatFloat_ReturnValue_1; // 0x48
    }; // Size: 0x4c
    Params_ExecuteUbergraph_BTT_ScheduleLoiter params{};
    params.EntryPoint = (int32_t)EntryPoint;
    params.CallFunc_GetFreeTimeMinMaxStationChangeTime_outMinTime = (float)CallFunc_GetFreeTimeMinMaxStationChangeTime_outMinTime;
    params.CallFunc_GetFreeTimeMinMaxStationChangeTime_outMaxTime = (float)CallFunc_GetFreeTimeMinMaxStationChangeTime_outMaxTime;
    params.K2Node_Event_OwnerActor_1 = (AActor*)K2Node_Event_OwnerActor_1;
    params.CallFunc_RandomFloatInRange_ReturnValue = (float)CallFunc_RandomFloatInRange_ReturnValue;
    params.K2Node_DynamicCast_AsSocial_Reasoning = (ASocialReasoning*)K2Node_DynamicCast_AsSocial_Reasoning;
    params.K2Node_DynamicCast_bSuccess = (bool)K2Node_DynamicCast_bSuccess;
    params.K2Node_Event_OwnerActor = (AActor*)K2Node_Event_OwnerActor;
    params.CallFunc_Get_ReturnValue = (UScheduler*)CallFunc_Get_ReturnValue;
    params.CallFunc_GetSimulatedSecondMultiplier_ReturnValue = (float)CallFunc_GetSimulatedSecondMultiplier_ReturnValue;
    params.CallFunc_Multiply_FloatFloat_ReturnValue = (float)CallFunc_Multiply_FloatFloat_ReturnValue;
    params.CallFunc_Multiply_FloatFloat_ReturnValue_1 = (float)CallFunc_Multiply_FloatFloat_ReturnValue_1;
    ProcessEvent(func, &params);
}
