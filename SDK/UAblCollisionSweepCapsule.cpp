#include "UAblCollisionSweepCapsule.hpp"
#include "UAblCollisionSweepShape.hpp"
UAblCollisionSweepCapsule* UAblCollisionSweepCapsule::StaticClass() {
    static auto res = find_uobject("Class /Script/AbleCore.AblCollisionSweepCapsule");
    return (UAblCollisionSweepCapsule*)res;
}
