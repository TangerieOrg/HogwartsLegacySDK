#include "UAblCollisionSweepShape.hpp"
#include "UAblCollisionSweepSphere.hpp"
UAblCollisionSweepSphere* UAblCollisionSweepSphere::StaticClass() {
    static auto res = find_uobject("Class /Script/AbleCore.AblCollisionSweepSphere");
    return (UAblCollisionSweepSphere*)res;
}
