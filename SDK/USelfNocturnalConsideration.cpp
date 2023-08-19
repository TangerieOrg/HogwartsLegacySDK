#include "UQualifierConsideration.hpp"
#include "USelfNocturnalConsideration.hpp"
USelfNocturnalConsideration* USelfNocturnalConsideration::StaticClass() {
    static auto res = find_uobject("Class /Script/CreatureBehavior.SelfNocturnalConsideration");
    return (USelfNocturnalConsideration*)res;
}
