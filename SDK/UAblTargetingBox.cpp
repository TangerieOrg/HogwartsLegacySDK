#include "FVector.hpp"
#include "UAblTargetingBase.hpp"
#include "UAblTargetingBox.hpp"
UAblTargetingBox* UAblTargetingBox::StaticClass() {
    static auto res = find_uobject("Class /Script/AbleCore.AblTargetingBox");
    return (UAblTargetingBox*)res;
}
