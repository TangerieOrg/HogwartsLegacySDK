#include "UAblAbilityTask.hpp"
#include "UAblTaskCondition.hpp"
#include "URootMotionModifierProperties.hpp"
#include "UablRootMotionModifiersTask.hpp"
UablRootMotionModifiersTask* UablRootMotionModifiersTask::StaticClass() {
    static auto res = find_uobject("Class /Script/Phoenix.ablRootMotionModifiersTask");
    return (UablRootMotionModifiersTask*)res;
}
