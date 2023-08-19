#include "FVector.hpp"
#include "UAblCollisionSweepBox.hpp"
#include "UAblCollisionSweepShape.hpp"
UAblCollisionSweepBox* UAblCollisionSweepBox::StaticClass() {
    static auto res = find_uobject("Class /Script/AbleCore.AblCollisionSweepBox");
    return (UAblCollisionSweepBox*)res;
}
