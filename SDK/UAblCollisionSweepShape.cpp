#include "ECollisionChannel.hpp"
#include "FAblAbilityTargetTypeLocation.hpp"
#include "UAblCollisionSweepShape.hpp"
#include "UObject.hpp"
UAblCollisionSweepShape* UAblCollisionSweepShape::StaticClass() {
    static auto res = find_uobject("Class /Script/AbleCore.AblCollisionSweepShape");
    return (UAblCollisionSweepShape*)res;
}
