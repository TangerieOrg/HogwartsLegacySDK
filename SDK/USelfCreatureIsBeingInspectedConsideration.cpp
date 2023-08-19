#include "UQualifierConsideration.hpp"
#include "USelfCreatureIsBeingInspectedConsideration.hpp"
USelfCreatureIsBeingInspectedConsideration* USelfCreatureIsBeingInspectedConsideration::StaticClass() {
    static auto res = find_uobject("Class /Script/CreatureBehavior.SelfCreatureIsBeingInspectedConsideration");
    return (USelfCreatureIsBeingInspectedConsideration*)res;
}
