#include "UAblAbilityTask.hpp"
#include "UAblPhysicalReactionBlendBackTask.hpp"
UAblPhysicalReactionBlendBackTask* UAblPhysicalReactionBlendBackTask::StaticClass() {
    static auto res = find_uobject("Class /Script/Phoenix.AblPhysicalReactionBlendBackTask");
    return (UAblPhysicalReactionBlendBackTask*)res;
}
