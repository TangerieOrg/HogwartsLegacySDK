#include "UAblAbilityTask.hpp"
#include "UAblAddPassiveReactionTask.hpp"
#include "UAblTaskCondition.hpp"
#include "UClass.hpp"
UAblAddPassiveReactionTask* UAblAddPassiveReactionTask::StaticClass() {
    static auto res = find_uobject("Class /Script/Phoenix.AblAddPassiveReactionTask");
    return (UAblAddPassiveReactionTask*)res;
}
