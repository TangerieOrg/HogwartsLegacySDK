#include "UAblAbilityTask.hpp"
#include "UAblNPC_PhysicalReactionBlendBackTask.hpp"
UAblNPC_PhysicalReactionBlendBackTask* UAblNPC_PhysicalReactionBlendBackTask::StaticClass() {
    static auto res = find_uobject("Class /Script/Phoenix.AblNPC_PhysicalReactionBlendBackTask");
    return (UAblNPC_PhysicalReactionBlendBackTask*)res;
}
