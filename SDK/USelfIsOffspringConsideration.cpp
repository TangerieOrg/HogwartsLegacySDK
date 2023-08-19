#include "UQualifierConsideration.hpp"
#include "USelfIsOffspringConsideration.hpp"
USelfIsOffspringConsideration* USelfIsOffspringConsideration::StaticClass() {
    static auto res = find_uobject("Class /Script/CreatureBehavior.SelfIsOffspringConsideration");
    return (USelfIsOffspringConsideration*)res;
}
