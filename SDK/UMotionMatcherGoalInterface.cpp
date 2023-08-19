#include "ACharacter.hpp"
#include "FFeatureVector.hpp"
#include "UFunction.hpp"
#include "UInterface.hpp"
#include "UMotionMatcherGoalInterface.hpp"
UMotionMatcherGoalInterface* UMotionMatcherGoalInterface::StaticClass() {
    static auto res = find_uobject("Class /Script/AvaAnimation.MotionMatcherGoalInterface");
    return (UMotionMatcherGoalInterface*)res;
}
bool UMotionMatcherGoalInterface::UpdateGoal(ACharacter* Character, FFeatureVector& Goal) {
    static auto func = (UFunction*)(find_uobject("Function /Script/AvaAnimation.MotionMatcherGoalInterface.UpdateGoal"));
    struct Params_UpdateGoal {
        ACharacter* Character; // 0x0
        FFeatureVector Goal; // 0x8
        bool ReturnValue; // 0x98
    }; // Size: 0x99
    Params_UpdateGoal params{};
    params.Character = (ACharacter*)Character;
    params.Goal = (FFeatureVector)Goal;
    ProcessEvent(func, &params);
    Goal = params.Goal;
    return (bool)params.ReturnValue;
}
bool UMotionMatcherGoalInterface::InitializeGoal(FFeatureVector& Goal) {
    static auto func = (UFunction*)(find_uobject("Function /Script/AvaAnimation.MotionMatcherGoalInterface.InitializeGoal"));
    struct Params_InitializeGoal {
        FFeatureVector Goal; // 0x0
        bool ReturnValue; // 0x90
    }; // Size: 0x91
    Params_InitializeGoal params{};
    params.Goal = (FFeatureVector)Goal;
    ProcessEvent(func, &params);
    Goal = params.Goal;
    return (bool)params.ReturnValue;
}
