#include "UQualifierConsideration.hpp"
#include "USelfLazinessConsideration.hpp"
USelfLazinessConsideration* USelfLazinessConsideration::StaticClass() {
    static auto res = find_uobject("Class /Script/CreatureBehavior.SelfLazinessConsideration");
    return (USelfLazinessConsideration*)res;
}
