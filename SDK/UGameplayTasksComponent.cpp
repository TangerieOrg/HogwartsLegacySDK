#include "UActorComponent.hpp"
#include "UFunction.hpp"
#include "UGameplayTask.hpp"
#include "UGameplayTasksComponent.hpp"
UGameplayTasksComponent* UGameplayTasksComponent::StaticClass() {
    static auto res = find_uobject("Class /Script/GameplayTasks.GameplayTasksComponent");
    return (UGameplayTasksComponent*)res;
}
void UGameplayTasksComponent::OnRep_SimulatedTasks() {
    static auto func = (UFunction*)(find_uobject("Function /Script/GameplayTasks.GameplayTasksComponent.OnRep_SimulatedTasks"));
    struct Params_OnRep_SimulatedTasks {
    }; // Size: 0x0
    Params_OnRep_SimulatedTasks params{};
    ProcessEvent(func, &params);
}
void UGameplayTasksComponent::K2_RunGameplayTask() {}
