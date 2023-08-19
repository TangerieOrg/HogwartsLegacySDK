#include "EAlphaBlendOption.hpp"
#include "FPhysicalBodyNameWeightPair.hpp"
#include "UAblAbilityTask.hpp"
#include "UablPhysicalBodyBlendTask.hpp"
UablPhysicalBodyBlendTask* UablPhysicalBodyBlendTask::StaticClass() {
    static auto res = find_uobject("Class /Script/Phoenix.ablPhysicalBodyBlendTask");
    return (UablPhysicalBodyBlendTask*)res;
}
