#include "UQualifierConsideration.hpp"
#include "USelfStationaryForNurtureInteractConsideration.hpp"
USelfStationaryForNurtureInteractConsideration* USelfStationaryForNurtureInteractConsideration::StaticClass() {
    static auto res = find_uobject("Class /Script/CreatureBehavior.SelfStationaryForNurtureInteractConsideration");
    return (USelfStationaryForNurtureInteractConsideration*)res;
}
