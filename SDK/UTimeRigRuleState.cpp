#include "UTimeRig.hpp"
#include "UTimeRigInstanceContext.hpp"
#include "UTimeRigIntervalState.hpp"
#include "UTimeRigRuleState.hpp"
UTimeRigRuleState* UTimeRigRuleState::StaticClass() {
    static auto res = find_uobject("Class /Script/TimeRig.TimeRigRuleState");
    return (UTimeRigRuleState*)res;
}
