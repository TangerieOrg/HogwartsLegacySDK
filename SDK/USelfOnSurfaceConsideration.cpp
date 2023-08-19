#include "EPhysicalSurface.hpp"
#include "UQualifierConsideration.hpp"
#include "USelfOnSurfaceConsideration.hpp"
USelfOnSurfaceConsideration* USelfOnSurfaceConsideration::StaticClass() {
    static auto res = find_uobject("Class /Script/CreatureBehavior.SelfOnSurfaceConsideration");
    return (USelfOnSurfaceConsideration*)res;
}
