#include "UQualifierConsideration.hpp"
#include "USelfIsTaggedByGroupCoordinationConsideration.hpp"
USelfIsTaggedByGroupCoordinationConsideration* USelfIsTaggedByGroupCoordinationConsideration::StaticClass() {
    static auto res = find_uobject("Class /Script/CreatureBehavior.SelfIsTaggedByGroupCoordinationConsideration");
    return (USelfIsTaggedByGroupCoordinationConsideration*)res;
}
