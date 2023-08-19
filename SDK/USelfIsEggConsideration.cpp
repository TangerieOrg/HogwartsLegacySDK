#include "UQualifierConsideration.hpp"
#include "USelfIsEggConsideration.hpp"
USelfIsEggConsideration* USelfIsEggConsideration::StaticClass() {
    static auto res = find_uobject("Class /Script/CreatureBehavior.SelfIsEggConsideration");
    return (USelfIsEggConsideration*)res;
}
