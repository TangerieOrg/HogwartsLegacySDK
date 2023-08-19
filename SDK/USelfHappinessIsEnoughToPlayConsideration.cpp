#include "UQualifierConsideration.hpp"
#include "USelfHappinessIsEnoughToPlayConsideration.hpp"
USelfHappinessIsEnoughToPlayConsideration* USelfHappinessIsEnoughToPlayConsideration::StaticClass() {
    static auto res = find_uobject("Class /Script/CreatureBehavior.SelfHappinessIsEnoughToPlayConsideration");
    return (USelfHappinessIsEnoughToPlayConsideration*)res;
}
