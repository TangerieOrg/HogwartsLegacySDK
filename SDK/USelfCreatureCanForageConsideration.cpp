#include "UQualifierConsideration.hpp"
#include "USelfCreatureCanForageConsideration.hpp"
USelfCreatureCanForageConsideration* USelfCreatureCanForageConsideration::StaticClass() {
    static auto res = find_uobject("Class /Script/CreatureBehavior.SelfCreatureCanForageConsideration");
    return (USelfCreatureCanForageConsideration*)res;
}
