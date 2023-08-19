#include "UQualifierConsideration.hpp"
#include "USelfActionEnergyConsideration.hpp"
USelfActionEnergyConsideration* USelfActionEnergyConsideration::StaticClass() {
    static auto res = find_uobject("Class /Script/CreatureBehavior.SelfActionEnergyConsideration");
    return (USelfActionEnergyConsideration*)res;
}
