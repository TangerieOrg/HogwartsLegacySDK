#include "EAblTargetingFilterSort.hpp"
#include "UAblAbilityTargetingFilter.hpp"
#include "UAblAbilityTargetingFilterSortByDistance.hpp"
UAblAbilityTargetingFilterSortByDistance* UAblAbilityTargetingFilterSortByDistance::StaticClass() {
    static auto res = find_uobject("Class /Script/AbleCore.AblAbilityTargetingFilterSortByDistance");
    return (UAblAbilityTargetingFilterSortByDistance*)res;
}
