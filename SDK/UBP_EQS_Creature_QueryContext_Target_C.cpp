#include "AActor.hpp"
#include "UBP_EQS_Creature_QueryContext_Target_C.hpp"
#include "UBlackboardComponent.hpp"
#include "UEnvQueryContext_BlueprintBase.hpp"
#include "UFunction.hpp"
#include "UObject.hpp"
UBP_EQS_Creature_QueryContext_Target_C* UBP_EQS_Creature_QueryContext_Target_C::StaticClass() {
    static auto res = find_uobject("BlueprintGeneratedClass /Game/Pawn/NPC/Creature/BehaviorTree/EQS/BP_EQS_Creature_QueryContext_Target.BP_EQS_Creature_QueryContext_Target_C");
    return (UBP_EQS_Creature_QueryContext_Target_C*)res;
}
void UBP_EQS_Creature_QueryContext_Target_C::ProvideSingleActor0(UObject* QuerierObject, AActor* QuerierActor, AActor*& ResultingActor, FName CallFunc_MakeLiteralName_ReturnValue, UBlackboardComponent* CallFunc_GetBlackboard_ReturnValue, UObject* CallFunc_GetValueAsObject_ReturnValue, AActor* K2Node_DynamicCast_AsActor, bool K2Node_DynamicCast_bSuccess, bool CallFunc_IsValid_ReturnValue) {
    static auto func = (UFunction*)(find_uobject("Function /Game/Pawn/NPC/Creature/BehaviorTree/EQS/BP_EQS_Creature_QueryContext_Target.BP_EQS_Creature_QueryContext_Target_C.ProvideSingleActor"));
    struct Params_ProvideSingleActor {
        UObject* QuerierObject; // 0x0
        AActor* QuerierActor; // 0x8
        AActor* ResultingActor; // 0x10
        FName CallFunc_MakeLiteralName_ReturnValue; // 0x18
        UBlackboardComponent* CallFunc_GetBlackboard_ReturnValue; // 0x20
        UObject* CallFunc_GetValueAsObject_ReturnValue; // 0x28
        AActor* K2Node_DynamicCast_AsActor; // 0x30
        bool K2Node_DynamicCast_bSuccess; // 0x38
        bool CallFunc_IsValid_ReturnValue; // 0x39
    }; // Size: 0x3a
    Params_ProvideSingleActor params{};
    params.QuerierObject = (UObject*)QuerierObject;
    params.QuerierActor = (AActor*)QuerierActor;
    params.ResultingActor = (AActor*)ResultingActor;
    params.CallFunc_MakeLiteralName_ReturnValue = (FName)CallFunc_MakeLiteralName_ReturnValue;
    params.CallFunc_GetBlackboard_ReturnValue = (UBlackboardComponent*)CallFunc_GetBlackboard_ReturnValue;
    params.CallFunc_GetValueAsObject_ReturnValue = (UObject*)CallFunc_GetValueAsObject_ReturnValue;
    params.K2Node_DynamicCast_AsActor = (AActor*)K2Node_DynamicCast_AsActor;
    params.K2Node_DynamicCast_bSuccess = (bool)K2Node_DynamicCast_bSuccess;
    params.CallFunc_IsValid_ReturnValue = (bool)CallFunc_IsValid_ReturnValue;
    ProcessEvent(func, &params);
    ResultingActor = params.ResultingActor;
}
