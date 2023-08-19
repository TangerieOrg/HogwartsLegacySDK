#include "ECollisionChannel.hpp"
#include "FAblAbilityTargetTypeLocation.hpp"
#include "UAblCollisionShape.hpp"
#include "UObject.hpp"
UAblCollisionShape* UAblCollisionShape::StaticClass() {
    static auto res = find_uobject("Class /Script/AbleCore.AblCollisionShape");
    return (UAblCollisionShape*)res;
}
