#include "UAblCollisionShape.hpp"
#include "UAblCollisionShapeCapsule.hpp"
UAblCollisionShapeCapsule* UAblCollisionShapeCapsule::StaticClass() {
    static auto res = find_uobject("Class /Script/AbleCore.AblCollisionShapeCapsule");
    return (UAblCollisionShapeCapsule*)res;
}
