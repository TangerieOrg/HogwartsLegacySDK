#include "UAblCustomEventListenerStartEndTask.hpp"
#include "UAblRootMotionModifiersEventListenerTask.hpp"
#include "URootMotionModifierProperties.hpp"
UAblRootMotionModifiersEventListenerTask* UAblRootMotionModifiersEventListenerTask::StaticClass() {
    static auto res = find_uobject("Class /Script/Phoenix.AblRootMotionModifiersEventListenerTask");
    return (UAblRootMotionModifiersEventListenerTask*)res;
}
