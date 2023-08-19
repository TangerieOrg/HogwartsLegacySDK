#include "UQualifierConsideration.hpp"
#include "USelfHerdingConsideration.hpp"
USelfHerdingConsideration* USelfHerdingConsideration::StaticClass() {
    static auto res = find_uobject("Class /Script/CreatureBehavior.SelfHerdingConsideration");
    return (USelfHerdingConsideration*)res;
}
