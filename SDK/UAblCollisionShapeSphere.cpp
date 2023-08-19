#include "UAblCollisionShape.hpp"
#include "UAblCollisionShapeSphere.hpp"
UAblCollisionShapeSphere* UAblCollisionShapeSphere::StaticClass() {
    static auto res = find_uobject("Class /Script/AbleCore.AblCollisionShapeSphere");
    return (UAblCollisionShapeSphere*)res;
}
