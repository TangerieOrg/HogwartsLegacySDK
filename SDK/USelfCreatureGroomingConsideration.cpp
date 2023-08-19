#include "UQualifierConsideration.hpp"
#include "USelfCreatureGroomingConsideration.hpp"
USelfCreatureGroomingConsideration* USelfCreatureGroomingConsideration::StaticClass() {
    static auto res = find_uobject("Class /Script/CreatureBehavior.SelfCreatureGroomingConsideration");
    return (USelfCreatureGroomingConsideration*)res;
}
