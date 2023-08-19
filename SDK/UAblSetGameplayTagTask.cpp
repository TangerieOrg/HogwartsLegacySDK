#include "FGameplayTag.hpp"
#include "UAblAbilityTask.hpp"
#include "UAblSetGameplayTagTask.hpp"
UAblSetGameplayTagTask* UAblSetGameplayTagTask::StaticClass() {
    static auto res = find_uobject("Class /Script/AbleCore.AblSetGameplayTagTask");
    return (UAblSetGameplayTagTask*)res;
}
