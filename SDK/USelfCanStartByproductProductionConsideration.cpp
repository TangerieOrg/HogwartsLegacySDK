#include "UQualifierConsideration.hpp"
#include "USelfCanStartByproductProductionConsideration.hpp"
USelfCanStartByproductProductionConsideration* USelfCanStartByproductProductionConsideration::StaticClass() {
    static auto res = find_uobject("Class /Script/CreatureBehavior.SelfCanStartByproductProductionConsideration");
    return (USelfCanStartByproductProductionConsideration*)res;
}
