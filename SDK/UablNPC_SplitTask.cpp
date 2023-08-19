#include "ENPC_Split.hpp"
#include "FGameplayTagContainer.hpp"
#include "UAblAbilityTask.hpp"
#include "UEnemyAIAttackData.hpp"
#include "UablNPC_SplitTask.hpp"
UablNPC_SplitTask* UablNPC_SplitTask::StaticClass() {
    static auto res = find_uobject("Class /Script/Phoenix.ablNPC_SplitTask");
    return (UablNPC_SplitTask*)res;
}
