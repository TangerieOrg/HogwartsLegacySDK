#include "UAblCollisionShape.hpp"
#include "UAblCollisionShapeCone.hpp"
UAblCollisionShapeCone* UAblCollisionShapeCone::StaticClass() {
    static auto res = find_uobject("Class /Script/AbleCore.AblCollisionShapeCone");
    return (UAblCollisionShapeCone*)res;
}
