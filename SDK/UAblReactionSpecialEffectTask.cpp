#include "FGameplayTag.hpp"
#include "UAblAbilityTask.hpp"
#include "UAblReactionSpecialEffectTask.hpp"
UAblReactionSpecialEffectTask* UAblReactionSpecialEffectTask::StaticClass() {
    static auto res = find_uobject("Class /Script/Phoenix.AblReactionSpecialEffectTask");
    return (UAblReactionSpecialEffectTask*)res;
}
