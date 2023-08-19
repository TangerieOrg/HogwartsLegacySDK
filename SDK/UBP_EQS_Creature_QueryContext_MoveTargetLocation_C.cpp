#include "AActor.hpp"
#include "FVector.hpp"
#include "UBP_EQS_Creature_QueryContext_MoveTargetLocation_C.hpp"
#include "UBlackboardComponent.hpp"
#include "UEnvQueryContext_BlueprintBase.hpp"
#include "UFunction.hpp"
#include "UObject.hpp"
UBP_EQS_Creature_QueryContext_MoveTargetLocation_C* UBP_EQS_Creature_QueryContext_MoveTargetLocation_C::StaticClass() {
    static auto res = find_uobject("BlueprintGeneratedClass /Game/Pawn/NPC/Creature/BehaviorTree/EQS/BP_EQS_Creature_QueryContext_MoveTargetLocation.BP_EQS_Creature_QueryContext_MoveTargetLocation_C");
    return (UBP_EQS_Creature_QueryContext_MoveTargetLocation_C*)res;
}
void UBP_EQS_Creature_QueryContext_MoveTargetLocation_C::ProvideSingleLocation0(UObject* QuerierObject, AActor* QuerierActor, FVector& ResultingLocation, FName CallFunc_MakeLiteralName_ReturnValue, UBlackboardComponent* CallFunc_GetBlackboard_ReturnValue, FVector CallFunc_GetValueAsVector_ReturnValue) {
    static auto func = (UFunction*)(find_uobject("Function /Game/Pawn/NPC/Creature/BehaviorTree/EQS/BP_EQS_Creature_QueryContext_MoveTargetLocation.BP_EQS_Creature_QueryContext_MoveTargetLocation_C.ProvideSingleLocation"));
    struct Params_ProvideSingleLocation {
        UObject* QuerierObject; // 0x0
        AActor* QuerierActor; // 0x8
        FVector ResultingLocation; // 0x10
        FName CallFunc_MakeLiteralName_ReturnValue; // 0x1c
        char pad_24[0x4];
        UBlackboardComponent* CallFunc_GetBlackboard_ReturnValue; // 0x28
        FVector CallFunc_GetValueAsVector_ReturnValue; // 0x30
    }; // Size: 0x3c
    Params_ProvideSingleLocation params{};
    params.QuerierObject = (UObject*)QuerierObject;
    params.QuerierActor = (AActor*)QuerierActor;
    params.ResultingLocation = (FVector)ResultingLocation;
    params.CallFunc_MakeLiteralName_ReturnValue = (FName)CallFunc_MakeLiteralName_ReturnValue;
    params.CallFunc_GetBlackboard_ReturnValue = (UBlackboardComponent*)CallFunc_GetBlackboard_ReturnValue;
    params.CallFunc_GetValueAsVector_ReturnValue = (FVector)CallFunc_GetValueAsVector_ReturnValue;
    ProcessEvent(func, &params);
    ResultingLocation = params.ResultingLocation;
}
