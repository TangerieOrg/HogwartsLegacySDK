#include "UAblRagdollBehaviorChangedConditionScratchpad.hpp"
#include "UAblTaskConditionScratchpad.hpp"
UAblRagdollBehaviorChangedConditionScratchpad* UAblRagdollBehaviorChangedConditionScratchpad::StaticClass() {
    static auto res = find_uobject("Class /Script/Phoenix.AblRagdollBehaviorChangedConditionScratchpad");
    return (UAblRagdollBehaviorChangedConditionScratchpad*)res;
}
