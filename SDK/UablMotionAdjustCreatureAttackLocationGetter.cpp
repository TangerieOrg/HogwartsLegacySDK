#include "UablMotionAdjustCreatureAttackLocationGetter.hpp"
#include "UablMotionAdjustTargetLocationGetter.hpp"
UablMotionAdjustCreatureAttackLocationGetter* UablMotionAdjustCreatureAttackLocationGetter::StaticClass() {
    static auto res = find_uobject("Class /Script/Phoenix.ablMotionAdjustCreatureAttackLocationGetter");
    return (UablMotionAdjustCreatureAttackLocationGetter*)res;
}
