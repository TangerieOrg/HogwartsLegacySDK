#include "UQualifierConsideration.hpp"
#include "USelfCreatureCirclingConsideration.hpp"
USelfCreatureCirclingConsideration* USelfCreatureCirclingConsideration::StaticClass() {
    static auto res = find_uobject("Class /Script/CreatureBehavior.SelfCreatureCirclingConsideration");
    return (USelfCreatureCirclingConsideration*)res;
}
