#include "UQualifierConsideration.hpp"
#include "USelfIsFlyingConsideration.hpp"
USelfIsFlyingConsideration* USelfIsFlyingConsideration::StaticClass() {
    static auto res = find_uobject("Class /Script/CreatureBehavior.SelfIsFlyingConsideration");
    return (USelfIsFlyingConsideration*)res;
}
