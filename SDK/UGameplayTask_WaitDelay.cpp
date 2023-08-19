#include "UFunction.hpp"
#include "UGameplayTask.hpp"
#include "UGameplayTask_WaitDelay.hpp"
UGameplayTask_WaitDelay* UGameplayTask_WaitDelay::StaticClass() {
    static auto res = find_uobject("Class /Script/GameplayTasks.GameplayTask_WaitDelay");
    return (UGameplayTask_WaitDelay*)res;
}
void UGameplayTask_WaitDelay::TaskWaitDelay() {}
void UGameplayTask_WaitDelay::TaskDelayDelegate__DelegateSignature() {
    static auto func = (UFunction*)(find_uobject("DelegateFunction /Script/GameplayTasks.GameplayTask_WaitDelay.TaskDelayDelegate__DelegateSignature"));
    struct Params_TaskDelayDelegate__DelegateSignature {
    }; // Size: 0x0
    Params_TaskDelayDelegate__DelegateSignature params{};
    ProcessEvent(func, &params);
}
