#include "UQualifierConsideration.hpp"
#include "USelfCentaurShouldRepositionConsideration.hpp"
USelfCentaurShouldRepositionConsideration* USelfCentaurShouldRepositionConsideration::StaticClass() {
    static auto res = find_uobject("Class /Script/CreatureBehavior.SelfCentaurShouldRepositionConsideration");
    return (USelfCentaurShouldRepositionConsideration*)res;
}
