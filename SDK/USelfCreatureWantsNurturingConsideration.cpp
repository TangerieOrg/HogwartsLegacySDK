#include "UQualifierConsideration.hpp"
#include "USelfCreatureWantsNurturingConsideration.hpp"
USelfCreatureWantsNurturingConsideration* USelfCreatureWantsNurturingConsideration::StaticClass() {
    static auto res = find_uobject("Class /Script/CreatureBehavior.SelfCreatureWantsNurturingConsideration");
    return (USelfCreatureWantsNurturingConsideration*)res;
}
