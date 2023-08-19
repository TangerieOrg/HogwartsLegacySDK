#include "AActor.hpp"
#include "ASocialReasoning.hpp"
#include "FPointerToUberGraphFrame.hpp"
#include "FStationQueryData.hpp"
#include "UBTT_EventOccupation_StationNeedsService_C.hpp"
#include "UBTTask_AvaAITree.hpp"
#include "UBlackboardComponent.hpp"
#include "UFunction.hpp"
#include "UObject.hpp"
#include "UStationComponent.hpp"
UBTT_EventOccupation_StationNeedsService_C* UBTT_EventOccupation_StationNeedsService_C::StaticClass() {
    static auto res = find_uobject("BlueprintGeneratedClass /Game/Pawn/Student/Ideas/BTT_EventOccupation_StationNeedsService.BTT_EventOccupation_StationNeedsService_C");
    return (UBTT_EventOccupation_StationNeedsService_C*)res;
}
void UBTT_EventOccupation_StationNeedsService_C::ExitTask(AActor* OwnerActor) {
    static auto func = (UFunction*)(find_uobject("Function /Game/Pawn/Student/Ideas/BTT_EventOccupation_StationNeedsService.BTT_EventOccupation_StationNeedsService_C.ExitTask"));
    struct Params_ExitTask {
        AActor* OwnerActor; // 0x0
    }; // Size: 0x8
    Params_ExitTask params{};
    params.OwnerActor = (AActor*)OwnerActor;
    ProcessEvent(func, &params);
}
void UBTT_EventOccupation_StationNeedsService_C::ReceiveExecute(AActor* OwnerActor) {
    static auto func = (UFunction*)(find_uobject("Function /Game/Pawn/Student/Ideas/BTT_EventOccupation_StationNeedsService.BTT_EventOccupation_StationNeedsService_C.ReceiveExecute"));
    struct Params_ReceiveExecute {
        AActor* OwnerActor; // 0x0
    }; // Size: 0x8
    Params_ReceiveExecute params{};
    params.OwnerActor = (AActor*)OwnerActor;
    ProcessEvent(func, &params);
}
void UBTT_EventOccupation_StationNeedsService_C::ExecuteUbergraph_BTT_EventOccupation_StationNeedsService(int32_t EntryPoint, UBlackboardComponent* CallFunc_GetBlackboardComponent_ReturnValue, UObject* CallFunc_GetValueAsObject_ReturnValue, AActor* K2Node_Event_OwnerActor_1, UStationComponent* K2Node_DynamicCast_AsStation_Component, bool K2Node_DynamicCast_bSuccess, ASocialReasoning* K2Node_DynamicCast_AsSocial_Reasoning, bool K2Node_DynamicCast_bSuccess_1, AActor* K2Node_Event_OwnerActor, UObject* CallFunc_GetReasoner_ReturnValue, TArray<FStationQueryData>& CallFunc_GetSocialActionChoicesBP_StationQueryData, bool CallFunc_GetSocialActionChoicesBP_ReturnValue, int32_t CallFunc_Array_Length_ReturnValue, bool CallFunc_Greater_IntInt_ReturnValue, bool CallFunc_JoinStation_ReturnValue) {
    static auto func = (UFunction*)(find_uobject("Function /Game/Pawn/Student/Ideas/BTT_EventOccupation_StationNeedsService.BTT_EventOccupation_StationNeedsService_C.ExecuteUbergraph_BTT_EventOccupation_StationNeedsService"));
    struct Params_ExecuteUbergraph_BTT_EventOccupation_StationNeedsService {
        int32_t EntryPoint; // 0x0
        char pad_4[0x4];
        UBlackboardComponent* CallFunc_GetBlackboardComponent_ReturnValue; // 0x8
        UObject* CallFunc_GetValueAsObject_ReturnValue; // 0x10
        AActor* K2Node_Event_OwnerActor_1; // 0x18
        UStationComponent* K2Node_DynamicCast_AsStation_Component; // 0x20
        bool K2Node_DynamicCast_bSuccess; // 0x28
        char pad_29[0x7];
        ASocialReasoning* K2Node_DynamicCast_AsSocial_Reasoning; // 0x30
        bool K2Node_DynamicCast_bSuccess_1; // 0x38
        char pad_39[0x7];
        AActor* K2Node_Event_OwnerActor; // 0x40
        UObject* CallFunc_GetReasoner_ReturnValue; // 0x48
        TArray<FStationQueryData> CallFunc_GetSocialActionChoicesBP_StationQueryData; // 0x50
        bool CallFunc_GetSocialActionChoicesBP_ReturnValue; // 0x60
        char pad_61[0x3];
        int32_t CallFunc_Array_Length_ReturnValue; // 0x64
        bool CallFunc_Greater_IntInt_ReturnValue; // 0x68
        bool CallFunc_JoinStation_ReturnValue; // 0x69
    }; // Size: 0x6a
    Params_ExecuteUbergraph_BTT_EventOccupation_StationNeedsService params{};
    params.EntryPoint = (int32_t)EntryPoint;
    params.CallFunc_GetBlackboardComponent_ReturnValue = (UBlackboardComponent*)CallFunc_GetBlackboardComponent_ReturnValue;
    params.CallFunc_GetValueAsObject_ReturnValue = (UObject*)CallFunc_GetValueAsObject_ReturnValue;
    params.K2Node_Event_OwnerActor_1 = (AActor*)K2Node_Event_OwnerActor_1;
    params.K2Node_DynamicCast_AsStation_Component = (UStationComponent*)K2Node_DynamicCast_AsStation_Component;
    params.K2Node_DynamicCast_bSuccess = (bool)K2Node_DynamicCast_bSuccess;
    params.K2Node_DynamicCast_AsSocial_Reasoning = (ASocialReasoning*)K2Node_DynamicCast_AsSocial_Reasoning;
    params.K2Node_DynamicCast_bSuccess_1 = (bool)K2Node_DynamicCast_bSuccess_1;
    params.K2Node_Event_OwnerActor = (AActor*)K2Node_Event_OwnerActor;
    params.CallFunc_GetReasoner_ReturnValue = (UObject*)CallFunc_GetReasoner_ReturnValue;
    params.CallFunc_GetSocialActionChoicesBP_StationQueryData = (TArray<FStationQueryData>)CallFunc_GetSocialActionChoicesBP_StationQueryData;
    params.CallFunc_GetSocialActionChoicesBP_ReturnValue = (bool)CallFunc_GetSocialActionChoicesBP_ReturnValue;
    params.CallFunc_Array_Length_ReturnValue = (int32_t)CallFunc_Array_Length_ReturnValue;
    params.CallFunc_Greater_IntInt_ReturnValue = (bool)CallFunc_Greater_IntInt_ReturnValue;
    params.CallFunc_JoinStation_ReturnValue = (bool)CallFunc_JoinStation_ReturnValue;
    ProcessEvent(func, &params);
    CallFunc_GetSocialActionChoicesBP_StationQueryData = params.CallFunc_GetSocialActionChoicesBP_StationQueryData;
}
