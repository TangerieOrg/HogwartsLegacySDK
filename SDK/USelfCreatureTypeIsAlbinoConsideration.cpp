#include "UQualifierConsideration.hpp"
#include "USelfCreatureTypeIsAlbinoConsideration.hpp"
USelfCreatureTypeIsAlbinoConsideration* USelfCreatureTypeIsAlbinoConsideration::StaticClass() {
    static auto res = find_uobject("Class /Script/CreatureBehavior.SelfCreatureTypeIsAlbinoConsideration");
    return (USelfCreatureTypeIsAlbinoConsideration*)res;
}
