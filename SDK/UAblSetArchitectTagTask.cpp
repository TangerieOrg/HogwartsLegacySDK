#include "ArchitectType.hpp"
#include "FGameplayTag.hpp"
#include "UAblAbilityTask.hpp"
#include "UAblSetArchitectTagTask.hpp"
UAblSetArchitectTagTask* UAblSetArchitectTagTask::StaticClass() {
    static auto res = find_uobject("Class /Script/AbleCore.AblSetArchitectTagTask");
    return (UAblSetArchitectTagTask*)res;
}
