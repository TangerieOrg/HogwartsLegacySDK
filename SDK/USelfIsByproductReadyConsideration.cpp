#include "UQualifierConsideration.hpp"
#include "USelfIsByproductReadyConsideration.hpp"
USelfIsByproductReadyConsideration* USelfIsByproductReadyConsideration::StaticClass() {
    static auto res = find_uobject("Class /Script/CreatureBehavior.SelfIsByproductReadyConsideration");
    return (USelfIsByproductReadyConsideration*)res;
}
