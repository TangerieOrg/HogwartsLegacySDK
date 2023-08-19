#include "UQualifierConsideration.hpp"
#include "USelfCanHerdFleeConsideration.hpp"
USelfCanHerdFleeConsideration* USelfCanHerdFleeConsideration::StaticClass() {
    static auto res = find_uobject("Class /Script/CreatureBehavior.SelfCanHerdFleeConsideration");
    return (USelfCanHerdFleeConsideration*)res;
}
