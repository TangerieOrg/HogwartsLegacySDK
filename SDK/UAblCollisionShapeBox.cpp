#include "FVector.hpp"
#include "UAblCollisionShape.hpp"
#include "UAblCollisionShapeBox.hpp"
UAblCollisionShapeBox* UAblCollisionShapeBox::StaticClass() {
    static auto res = find_uobject("Class /Script/AbleCore.AblCollisionShapeBox");
    return (UAblCollisionShapeBox*)res;
}
