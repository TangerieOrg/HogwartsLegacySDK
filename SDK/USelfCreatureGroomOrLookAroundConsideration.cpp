#include "UQualifierConsideration.hpp"
#include "USelfCreatureGroomOrLookAroundConsideration.hpp"
USelfCreatureGroomOrLookAroundConsideration* USelfCreatureGroomOrLookAroundConsideration::StaticClass() {
    static auto res = find_uobject("Class /Script/CreatureBehavior.SelfCreatureGroomOrLookAroundConsideration");
    return (USelfCreatureGroomOrLookAroundConsideration*)res;
}
