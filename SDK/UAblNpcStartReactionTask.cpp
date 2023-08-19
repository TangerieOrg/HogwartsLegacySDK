#include "FQueueReactionParams.hpp"
#include "UAblAbilityTask.hpp"
#include "UAblNpcStartReactionTask.hpp"
#include "UAblTaskCondition.hpp"
#include "UClass.hpp"
UAblNpcStartReactionTask* UAblNpcStartReactionTask::StaticClass() {
    static auto res = find_uobject("Class /Script/Phoenix.AblNpcStartReactionTask");
    return (UAblNpcStartReactionTask*)res;
}
