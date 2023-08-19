#include "AActor.hpp"
#include "FPointerToUberGraphFrame.hpp"
#include "UBTT_ScheduleWait_C.hpp"
#include "UBTTask_AvaAITree.hpp"
#include "UFunction.hpp"
UBTT_ScheduleWait_C* UBTT_ScheduleWait_C::StaticClass() {
    static auto res = find_uobject("BlueprintGeneratedClass /Game/Pawn/Student/Ideas/BTT_ScheduleWait.BTT_ScheduleWait_C");
    return (UBTT_ScheduleWait_C*)res;
}
void UBTT_ScheduleWait_C::ExecuteUbergraph_BTT_ScheduleWait(int32_t EntryPoint, AActor* K2Node_Event_OwnerActor_1, AActor* K2Node_Event_OwnerActor) {
    static auto func = (UFunction*)(find_uobject("Function /Game/Pawn/Student/Ideas/BTT_ScheduleWait.BTT_ScheduleWait_C.ExecuteUbergraph_BTT_ScheduleWait"));
    struct Params_ExecuteUbergraph_BTT_ScheduleWait {
        int32_t EntryPoint; // 0x0
        char pad_4[0x4];
        AActor* K2Node_Event_OwnerActor_1; // 0x8
        AActor* K2Node_Event_OwnerActor; // 0x10
    }; // Size: 0x18
    Params_ExecuteUbergraph_BTT_ScheduleWait params{};
    params.EntryPoint = (int32_t)EntryPoint;
    params.K2Node_Event_OwnerActor_1 = (AActor*)K2Node_Event_OwnerActor_1;
    params.K2Node_Event_OwnerActor = (AActor*)K2Node_Event_OwnerActor;
    ProcessEvent(func, &params);
}
void UBTT_ScheduleWait_C::ReceiveExecute(AActor* OwnerActor) {
    static auto func = (UFunction*)(find_uobject("Function /Game/Pawn/Student/Ideas/BTT_ScheduleWait.BTT_ScheduleWait_C.ReceiveExecute"));
    struct Params_ReceiveExecute {
        AActor* OwnerActor; // 0x0
    }; // Size: 0x8
    Params_ReceiveExecute params{};
    params.OwnerActor = (AActor*)OwnerActor;
    ProcessEvent(func, &params);
}
void UBTT_ScheduleWait_C::ExitTask(AActor* OwnerActor) {
    static auto func = (UFunction*)(find_uobject("Function /Game/Pawn/Student/Ideas/BTT_ScheduleWait.BTT_ScheduleWait_C.ExitTask"));
    struct Params_ExitTask {
        AActor* OwnerActor; // 0x0
    }; // Size: 0x8
    Params_ExitTask params{};
    params.OwnerActor = (AActor*)OwnerActor;
    ProcessEvent(func, &params);
}
