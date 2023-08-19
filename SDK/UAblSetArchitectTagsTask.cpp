#include "ArchitectType.hpp"
#include "FGameplayTagContainer.hpp"
#include "UAblAbilityTask.hpp"
#include "UAblSetArchitectTagsTask.hpp"
UAblSetArchitectTagsTask* UAblSetArchitectTagsTask::StaticClass() {
    static auto res = find_uobject("Class /Script/AbleCore.AblSetArchitectTagsTask");
    return (UAblSetArchitectTagsTask*)res;
}
