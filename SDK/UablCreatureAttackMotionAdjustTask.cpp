#include "UCreatureCombatAttackData.hpp"
#include "UablCreatureAttackMotionAdjustTask.hpp"
#include "UablMotionAdjustTask.hpp"
UablCreatureAttackMotionAdjustTask* UablCreatureAttackMotionAdjustTask::StaticClass() {
    static auto res = find_uobject("Class /Script/Phoenix.ablCreatureAttackMotionAdjustTask");
    return (UablCreatureAttackMotionAdjustTask*)res;
}
