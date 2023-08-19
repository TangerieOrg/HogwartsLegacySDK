#include "AAIController.hpp"
#include "UActorComponent.hpp"
#include "UBlackboardComponent.hpp"
#include "UBrainComponent.hpp"
#include "UFunction.hpp"
UBrainComponent* UBrainComponent::StaticClass() {
    static auto res = find_uobject("Class /Script/AIModule.BrainComponent");
    return (UBrainComponent*)res;
}
void UBrainComponent::RestartLogic() {
    static auto func = (UFunction*)(find_uobject("Function /Script/AIModule.BrainComponent.RestartLogic"));
    struct Params_RestartLogic {
    }; // Size: 0x0
    Params_RestartLogic params{};
    ProcessEvent(func, &params);
}
void UBrainComponent::StopLogic(FString Reason) {
    static auto func = (UFunction*)(find_uobject("Function /Script/AIModule.BrainComponent.StopLogic"));
    struct Params_StopLogic {
        FString Reason; // 0x0
    }; // Size: 0x10
    Params_StopLogic params{};
    params.Reason = (FString)Reason;
    ProcessEvent(func, &params);
}
void UBrainComponent::StartLogic() {
    static auto func = (UFunction*)(find_uobject("Function /Script/AIModule.BrainComponent.StartLogic"));
    struct Params_StartLogic {
    }; // Size: 0x0
    Params_StartLogic params{};
    ProcessEvent(func, &params);
}
bool UBrainComponent::IsRunning() {
    static auto func = (UFunction*)(find_uobject("Function /Script/AIModule.BrainComponent.IsRunning"));
    struct Params_IsRunning {
        bool ReturnValue; // 0x0
    }; // Size: 0x1
    Params_IsRunning params{};
    ProcessEvent(func, &params);
    return (bool)params.ReturnValue;
}
bool UBrainComponent::IsPaused() {
    static auto func = (UFunction*)(find_uobject("Function /Script/AIModule.BrainComponent.IsPaused"));
    struct Params_IsPaused {
        bool ReturnValue; // 0x0
    }; // Size: 0x1
    Params_IsPaused params{};
    ProcessEvent(func, &params);
    return (bool)params.ReturnValue;
}
