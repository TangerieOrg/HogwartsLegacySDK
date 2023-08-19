#include "UCreatureCombatAttackData.hpp"
#include "UablCreatureAttackTurnAdjustTask.hpp"
#include "UablTurnAdjustTask.hpp"
UablCreatureAttackTurnAdjustTask* UablCreatureAttackTurnAdjustTask::StaticClass() {
    static auto res = find_uobject("Class /Script/Phoenix.ablCreatureAttackTurnAdjustTask");
    return (UablCreatureAttackTurnAdjustTask*)res;
}
