#include "ECreatureHappinessLevel.hpp"
#include "UQualifierConsideration.hpp"
#include "USelfHappinessLevel.hpp"
USelfHappinessLevel* USelfHappinessLevel::StaticClass() {
    static auto res = find_uobject("Class /Script/CreatureBehavior.SelfHappinessLevel");
    return (USelfHappinessLevel*)res;
}
