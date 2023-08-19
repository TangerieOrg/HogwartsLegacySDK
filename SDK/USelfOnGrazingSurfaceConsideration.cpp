#include "UQualifierConsideration.hpp"
#include "USelfOnGrazingSurfaceConsideration.hpp"
USelfOnGrazingSurfaceConsideration* USelfOnGrazingSurfaceConsideration::StaticClass() {
    static auto res = find_uobject("Class /Script/CreatureBehavior.SelfOnGrazingSurfaceConsideration");
    return (USelfOnGrazingSurfaceConsideration*)res;
}
