#include "AAIController.hpp"
#include "AActor.hpp"
#include "APawn.hpp"
#include "FBlackboardKeySelector.hpp"
#include "FVector.hpp"
#include "UBTD_DistanceBetweenLocationsIsUnderThreshold_C.hpp"
#include "UBTDecorator_BlueprintBase.hpp"
#include "UFunction.hpp"
UBTD_DistanceBetweenLocationsIsUnderThreshold_C* UBTD_DistanceBetweenLocationsIsUnderThreshold_C::StaticClass() {
    static auto res = find_uobject("BlueprintGeneratedClass /Game/Pawn/NPC/Creature/BehaviorTree/Decorators/BTD_DistanceBetweenLocationsIsUnderThreshold.BTD_DistanceBetweenLocationsIsUnderThreshold_C");
    return (UBTD_DistanceBetweenLocationsIsUnderThreshold_C*)res;
}
bool UBTD_DistanceBetweenLocationsIsUnderThreshold_C::PerformConditionCheckAI0(AAIController* OwnerController, APawn* ControlledPawn, FVector CallFunc_GetBlackboardValueAsVector_ReturnValue, FVector CallFunc_GetBlackboardValueAsVector_ReturnValue_1, float CallFunc_Vector_Distance2DSquared_ReturnValue, bool CallFunc_LessEqual_FloatFloat_ReturnValue) {
    static auto func = (UFunction*)(find_uobject("Function /Game/Pawn/NPC/Creature/BehaviorTree/Decorators/BTD_DistanceBetweenLocationsIsUnderThreshold.BTD_DistanceBetweenLocationsIsUnderThreshold_C.PerformConditionCheckAI"));
    struct Params_PerformConditionCheckAI {
        AAIController* OwnerController; // 0x0
        APawn* ControlledPawn; // 0x8
        bool ReturnValue; // 0x10
        char pad_11[0x3];
        FVector CallFunc_GetBlackboardValueAsVector_ReturnValue; // 0x14
        FVector CallFunc_GetBlackboardValueAsVector_ReturnValue_1; // 0x20
        float CallFunc_Vector_Distance2DSquared_ReturnValue; // 0x2c
        bool CallFunc_LessEqual_FloatFloat_ReturnValue; // 0x30
    }; // Size: 0x31
    Params_PerformConditionCheckAI params{};
    params.OwnerController = (AAIController*)OwnerController;
    params.ControlledPawn = (APawn*)ControlledPawn;
    params.CallFunc_GetBlackboardValueAsVector_ReturnValue = (FVector)CallFunc_GetBlackboardValueAsVector_ReturnValue;
    params.CallFunc_GetBlackboardValueAsVector_ReturnValue_1 = (FVector)CallFunc_GetBlackboardValueAsVector_ReturnValue_1;
    params.CallFunc_Vector_Distance2DSquared_ReturnValue = (float)CallFunc_Vector_Distance2DSquared_ReturnValue;
    params.CallFunc_LessEqual_FloatFloat_ReturnValue = (bool)CallFunc_LessEqual_FloatFloat_ReturnValue;
    ProcessEvent(func, &params);
    return (bool)params.ReturnValue;
}
bool UBTD_DistanceBetweenLocationsIsUnderThreshold_C::PerformConditionCheck0(AActor* OwnerActor, FVector CallFunc_GetBlackboardValueAsVector_ReturnValue, FVector CallFunc_GetBlackboardValueAsVector_ReturnValue_1, float CallFunc_Vector_Distance2DSquared_ReturnValue, bool CallFunc_LessEqual_FloatFloat_ReturnValue) {
    static auto func = (UFunction*)(find_uobject("Function /Game/Pawn/NPC/Creature/BehaviorTree/Decorators/BTD_DistanceBetweenLocationsIsUnderThreshold.BTD_DistanceBetweenLocationsIsUnderThreshold_C.PerformConditionCheck"));
    struct Params_PerformConditionCheck {
        AActor* OwnerActor; // 0x0
        bool ReturnValue; // 0x8
        char pad_9[0x3];
        FVector CallFunc_GetBlackboardValueAsVector_ReturnValue; // 0xc
        FVector CallFunc_GetBlackboardValueAsVector_ReturnValue_1; // 0x18
        float CallFunc_Vector_Distance2DSquared_ReturnValue; // 0x24
        bool CallFunc_LessEqual_FloatFloat_ReturnValue; // 0x28
    }; // Size: 0x29
    Params_PerformConditionCheck params{};
    params.OwnerActor = (AActor*)OwnerActor;
    params.CallFunc_GetBlackboardValueAsVector_ReturnValue = (FVector)CallFunc_GetBlackboardValueAsVector_ReturnValue;
    params.CallFunc_GetBlackboardValueAsVector_ReturnValue_1 = (FVector)CallFunc_GetBlackboardValueAsVector_ReturnValue_1;
    params.CallFunc_Vector_Distance2DSquared_ReturnValue = (float)CallFunc_Vector_Distance2DSquared_ReturnValue;
    params.CallFunc_LessEqual_FloatFloat_ReturnValue = (bool)CallFunc_LessEqual_FloatFloat_ReturnValue;
    ProcessEvent(func, &params);
    return (bool)params.ReturnValue;
}
