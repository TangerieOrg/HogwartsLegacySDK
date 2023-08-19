#include "UQualifierConsideration.hpp"
#include "USelfActorCloseToOffspring.hpp"
USelfActorCloseToOffspring* USelfActorCloseToOffspring::StaticClass() {
    static auto res = find_uobject("Class /Script/CreatureBehavior.SelfActorCloseToOffspring");
    return (USelfActorCloseToOffspring*)res;
}
