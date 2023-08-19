#include "FGameplayTagContainer.hpp"
#include "UAblAbilityTask.hpp"
#include "UAblReactionsDamageTask.hpp"
UAblReactionsDamageTask* UAblReactionsDamageTask::StaticClass() {
    static auto res = find_uobject("Class /Script/Phoenix.AblReactionsDamageTask");
    return (UAblReactionsDamageTask*)res;
}
