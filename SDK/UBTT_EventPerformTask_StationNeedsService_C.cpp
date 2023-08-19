#include "AActor.hpp"
#include "APawn.hpp"
#include "ASocialReasoning.hpp"
#include "FPointerToUberGraphFrame.hpp"
#include "FStationQueryData.hpp"
#include "UBTT_EventPerformTask_StationNeedsService_C.hpp"
#include "UBTTask_AvaAITree.hpp"
#include "UFunction.hpp"
#include "UObject.hpp"
#include "UScheduledEntity.hpp"
UBTT_EventPerformTask_StationNeedsService_C* UBTT_EventPerformTask_StationNeedsService_C::StaticClass() {
    static auto res = find_uobject("BlueprintGeneratedClass /Game/Pawn/Student/Ideas/BTT_EventPerformTask_StationNeedsService.BTT_EventPerformTask_StationNeedsService_C");
    return (UBTT_EventPerformTask_StationNeedsService_C*)res;
}
void UBTT_EventPerformTask_StationNeedsService_C::ReceiveExecute(AActor* OwnerActor) {
    static auto func = (UFunction*)(find_uobject("Function /Game/Pawn/Student/Ideas/BTT_EventPerformTask_StationNeedsService.BTT_EventPerformTask_StationNeedsService_C.ReceiveExecute"));
    struct Params_ReceiveExecute {
        AActor* OwnerActor; // 0x0
    }; // Size: 0x8
    Params_ReceiveExecute params{};
    params.OwnerActor = (AActor*)OwnerActor;
    ProcessEvent(func, &params);
}
void UBTT_EventPerformTask_StationNeedsService_C::ExitTask(AActor* OwnerActor) {
    static auto func = (UFunction*)(find_uobject("Function /Game/Pawn/Student/Ideas/BTT_EventPerformTask_StationNeedsService.BTT_EventPerformTask_StationNeedsService_C.ExitTask"));
    struct Params_ExitTask {
        AActor* OwnerActor; // 0x0
    }; // Size: 0x8
    Params_ExitTask params{};
    params.OwnerActor = (AActor*)OwnerActor;
    ProcessEvent(func, &params);
}
void UBTT_EventPerformTask_StationNeedsService_C::ExecuteUbergraph_BTT_EventPerformTask_StationNeedsService(int32_t EntryPoint, AActor* K2Node_Event_OwnerActor, AActor* K2Node_Event_OwnerActor_1, ASocialReasoning* K2Node_DynamicCast_AsSocial_Reasoning, bool K2Node_DynamicCast_bSuccess, ASocialReasoning* K2Node_DynamicCast_AsSocial_Reasoning_1, bool K2Node_DynamicCast_bSuccess_1, APawn* CallFunc_GetReasonerPawn_ReturnValue, UObject* CallFunc_GetReasoner_ReturnValue, bool CallFunc_IsValid_ReturnValue, UScheduledEntity* K2Node_DynamicCast_AsScheduled_Entity, bool K2Node_DynamicCast_bSuccess_2) {}
