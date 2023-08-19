#include "UAblAbilityTargetingFilter.hpp"
#include "UAblAbilityTargetingFilterMaxTargets.hpp"
UAblAbilityTargetingFilterMaxTargets* UAblAbilityTargetingFilterMaxTargets::StaticClass() {
    static auto res = find_uobject("Class /Script/AbleCore.AblAbilityTargetingFilterMaxTargets");
    return (UAblAbilityTargetingFilterMaxTargets*)res;
}
