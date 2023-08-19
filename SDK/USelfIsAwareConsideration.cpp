#include "UQualifierConsideration.hpp"
#include "USelfIsAwareConsideration.hpp"
USelfIsAwareConsideration* USelfIsAwareConsideration::StaticClass() {
    static auto res = find_uobject("Class /Script/CreatureBehavior.SelfIsAwareConsideration");
    return (USelfIsAwareConsideration*)res;
}
