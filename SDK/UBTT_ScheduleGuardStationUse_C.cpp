#include "AActor.hpp"
#include "ASocialReasoning.hpp"
#include "FPointerToUberGraphFrame.hpp"
#include "UBTT_ScheduleGuardStationUse_C.hpp"
#include "UBTTask_AvaAITree.hpp"
#include "UFunction.hpp"
#include "UScheduler.hpp"
UBTT_ScheduleGuardStationUse_C* UBTT_ScheduleGuardStationUse_C::StaticClass() {
    static auto res = find_uobject("BlueprintGeneratedClass /Game/Pawn/Student/Ideas/BTT_ScheduleGuardStationUse.BTT_ScheduleGuardStationUse_C");
    return (UBTT_ScheduleGuardStationUse_C*)res;
}
void UBTT_ScheduleGuardStationUse_C::ReceiveExecute(AActor* OwnerActor) {
    static auto func = (UFunction*)(find_uobject("Function /Game/Pawn/Student/Ideas/BTT_ScheduleGuardStationUse.BTT_ScheduleGuardStationUse_C.ReceiveExecute"));
    struct Params_ReceiveExecute {
        AActor* OwnerActor; // 0x0
    }; // Size: 0x8
    Params_ReceiveExecute params{};
    params.OwnerActor = (AActor*)OwnerActor;
    ProcessEvent(func, &params);
}
void UBTT_ScheduleGuardStationUse_C::ExitTask(AActor* OwnerActor) {
    static auto func = (UFunction*)(find_uobject("Function /Game/Pawn/Student/Ideas/BTT_ScheduleGuardStationUse.BTT_ScheduleGuardStationUse_C.ExitTask"));
    struct Params_ExitTask {
        AActor* OwnerActor; // 0x0
    }; // Size: 0x8
    Params_ExitTask params{};
    params.OwnerActor = (AActor*)OwnerActor;
    ProcessEvent(func, &params);
}
void UBTT_ScheduleGuardStationUse_C::ExecuteUbergraph_BTT_ScheduleGuardStationUse(int32_t EntryPoint, AActor* K2Node_Event_OwnerActor_1, float CallFunc_Multiply_FloatFloat_ReturnValue, ASocialReasoning* K2Node_DynamicCast_AsSocial_Reasoning, bool K2Node_DynamicCast_bSuccess, AActor* K2Node_Event_OwnerActor, UScheduler* CallFunc_Get_ReturnValue, float CallFunc_GetSimulatedSecondMultiplier_ReturnValue, float CallFunc_Multiply_FloatFloat_ReturnValue_1) {
    static auto func = (UFunction*)(find_uobject("Function /Game/Pawn/Student/Ideas/BTT_ScheduleGuardStationUse.BTT_ScheduleGuardStationUse_C.ExecuteUbergraph_BTT_ScheduleGuardStationUse"));
    struct Params_ExecuteUbergraph_BTT_ScheduleGuardStationUse {
        int32_t EntryPoint; // 0x0
        char pad_4[0x4];
        AActor* K2Node_Event_OwnerActor_1; // 0x8
        float CallFunc_Multiply_FloatFloat_ReturnValue; // 0x10
        char pad_14[0x4];
        ASocialReasoning* K2Node_DynamicCast_AsSocial_Reasoning; // 0x18
        bool K2Node_DynamicCast_bSuccess; // 0x20
        char pad_21[0x7];
        AActor* K2Node_Event_OwnerActor; // 0x28
        UScheduler* CallFunc_Get_ReturnValue; // 0x30
        float CallFunc_GetSimulatedSecondMultiplier_ReturnValue; // 0x38
        float CallFunc_Multiply_FloatFloat_ReturnValue_1; // 0x3c
    }; // Size: 0x40
    Params_ExecuteUbergraph_BTT_ScheduleGuardStationUse params{};
    params.EntryPoint = (int32_t)EntryPoint;
    params.K2Node_Event_OwnerActor_1 = (AActor*)K2Node_Event_OwnerActor_1;
    params.CallFunc_Multiply_FloatFloat_ReturnValue = (float)CallFunc_Multiply_FloatFloat_ReturnValue;
    params.K2Node_DynamicCast_AsSocial_Reasoning = (ASocialReasoning*)K2Node_DynamicCast_AsSocial_Reasoning;
    params.K2Node_DynamicCast_bSuccess = (bool)K2Node_DynamicCast_bSuccess;
    params.K2Node_Event_OwnerActor = (AActor*)K2Node_Event_OwnerActor;
    params.CallFunc_Get_ReturnValue = (UScheduler*)CallFunc_Get_ReturnValue;
    params.CallFunc_GetSimulatedSecondMultiplier_ReturnValue = (float)CallFunc_GetSimulatedSecondMultiplier_ReturnValue;
    params.CallFunc_Multiply_FloatFloat_ReturnValue_1 = (float)CallFunc_Multiply_FloatFloat_ReturnValue_1;
    ProcessEvent(func, &params);
}
