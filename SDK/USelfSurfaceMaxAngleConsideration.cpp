#include "UQualifierConsideration.hpp"
#include "USelfSurfaceMaxAngleConsideration.hpp"
USelfSurfaceMaxAngleConsideration* USelfSurfaceMaxAngleConsideration::StaticClass() {
    static auto res = find_uobject("Class /Script/CreatureBehavior.SelfSurfaceMaxAngleConsideration");
    return (USelfSurfaceMaxAngleConsideration*)res;
}
