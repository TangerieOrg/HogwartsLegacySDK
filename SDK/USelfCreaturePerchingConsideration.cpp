#include "UQualifierConsideration.hpp"
#include "USelfCreaturePerchingConsideration.hpp"
USelfCreaturePerchingConsideration* USelfCreaturePerchingConsideration::StaticClass() {
    static auto res = find_uobject("Class /Script/CreatureBehavior.SelfCreaturePerchingConsideration");
    return (USelfCreaturePerchingConsideration*)res;
}
