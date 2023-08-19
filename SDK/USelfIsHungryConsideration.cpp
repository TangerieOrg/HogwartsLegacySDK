#include "UQualifierConsideration.hpp"
#include "USelfIsHungryConsideration.hpp"
USelfIsHungryConsideration* USelfIsHungryConsideration::StaticClass() {
    static auto res = find_uobject("Class /Script/CreatureBehavior.SelfIsHungryConsideration");
    return (USelfIsHungryConsideration*)res;
}
