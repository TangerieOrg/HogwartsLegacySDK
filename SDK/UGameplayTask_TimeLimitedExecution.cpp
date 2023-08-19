#include "UGameplayTask.hpp"
#include "UGameplayTask_TimeLimitedExecution.hpp"
UGameplayTask_TimeLimitedExecution* UGameplayTask_TimeLimitedExecution::StaticClass() {
    static auto res = find_uobject("Class /Script/GameplayTasks.GameplayTask_TimeLimitedExecution");
    return (UGameplayTask_TimeLimitedExecution*)res;
}
