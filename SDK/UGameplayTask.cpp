#include "ETaskResourceOverlapPolicy.hpp"
#include "UFunction.hpp"
#include "UGameplayTask.hpp"
#include "UObject.hpp"
UGameplayTask* UGameplayTask::StaticClass() {
    static auto res = find_uobject("Class /Script/GameplayTasks.GameplayTask");
    return (UGameplayTask*)res;
}
void UGameplayTask::ReadyForActivation() {
    static auto func = (UFunction*)(find_uobject("Function /Script/GameplayTasks.GameplayTask.ReadyForActivation"));
    struct Params_ReadyForActivation {
    }; // Size: 0x0
    Params_ReadyForActivation params{};
    ProcessEvent(func, &params);
}
void UGameplayTask::GenericGameplayTaskDelegate__DelegateSignature() {
    static auto func = (UFunction*)(find_uobject("DelegateFunction /Script/GameplayTasks.GameplayTask.GenericGameplayTaskDelegate__DelegateSignature"));
    struct Params_GenericGameplayTaskDelegate__DelegateSignature {
    }; // Size: 0x0
    Params_GenericGameplayTaskDelegate__DelegateSignature params{};
    ProcessEvent(func, &params);
}
void UGameplayTask::EndTask() {
    static auto func = (UFunction*)(find_uobject("Function /Script/GameplayTasks.GameplayTask.EndTask"));
    struct Params_EndTask {
    }; // Size: 0x0
    Params_EndTask params{};
    ProcessEvent(func, &params);
}
