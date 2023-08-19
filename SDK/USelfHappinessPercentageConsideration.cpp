#include "UQualifierConsideration.hpp"
#include "USelfHappinessPercentageConsideration.hpp"
USelfHappinessPercentageConsideration* USelfHappinessPercentageConsideration::StaticClass() {
    static auto res = find_uobject("Class /Script/CreatureBehavior.SelfHappinessPercentageConsideration");
    return (USelfHappinessPercentageConsideration*)res;
}
