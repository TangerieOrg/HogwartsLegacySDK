#include "ESchedulerMoonPhase.hpp"
#include "UQualifierConsideration.hpp"
#include "UWorldMoonPhaseConsideration.hpp"
UWorldMoonPhaseConsideration* UWorldMoonPhaseConsideration::StaticClass() {
    static auto res = find_uobject("Class /Script/CreatureBehavior.WorldMoonPhaseConsideration");
    return (UWorldMoonPhaseConsideration*)res;
}
