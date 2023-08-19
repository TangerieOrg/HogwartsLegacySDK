#include "EReactionPlayMultiFxTaskType.hpp"
#include "UAblPlayMultiFxTask.hpp"
#include "UAblReactionPlayMultiFxTask.hpp"
UAblReactionPlayMultiFxTask* UAblReactionPlayMultiFxTask::StaticClass() {
    static auto res = find_uobject("Class /Script/Phoenix.AblReactionPlayMultiFxTask");
    return (UAblReactionPlayMultiFxTask*)res;
}
