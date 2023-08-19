#include "UAblAbilityTargetingFilter.hpp"
#include "UAblAbilityTargetingFilterSelf.hpp"
UAblAbilityTargetingFilterSelf* UAblAbilityTargetingFilterSelf::StaticClass() {
    static auto res = find_uobject("Class /Script/AbleCore.AblAbilityTargetingFilterSelf");
    return (UAblAbilityTargetingFilterSelf*)res;
}
