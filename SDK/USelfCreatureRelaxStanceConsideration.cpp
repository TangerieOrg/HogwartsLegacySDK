#include "ECreatureStance.hpp"
#include "UQualifierConsideration.hpp"
#include "USelfCreatureRelaxStanceConsideration.hpp"
USelfCreatureRelaxStanceConsideration* USelfCreatureRelaxStanceConsideration::StaticClass() {
    static auto res = find_uobject("Class /Script/CreatureBehavior.SelfCreatureRelaxStanceConsideration");
    return (USelfCreatureRelaxStanceConsideration*)res;
}
