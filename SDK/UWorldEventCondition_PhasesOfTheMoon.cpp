#include "ESchedulerMoonPhase.hpp"
#include "UWorldEventCondition.hpp"
#include "UWorldEventCondition_PhasesOfTheMoon.hpp"
UWorldEventCondition_PhasesOfTheMoon* UWorldEventCondition_PhasesOfTheMoon::StaticClass() {
    static auto res = find_uobject("Class /Script/Phoenix.WorldEventCondition_PhasesOfTheMoon");
    return (UWorldEventCondition_PhasesOfTheMoon*)res;
}
