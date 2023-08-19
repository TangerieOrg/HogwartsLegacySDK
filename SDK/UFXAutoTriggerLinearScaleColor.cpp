#include "UFXAutoTriggerLinearColor.hpp"
#include "UFXAutoTriggerLinearScaleColor.hpp"
#include "UFXAutoTriggerScalar.hpp"
UFXAutoTriggerLinearScaleColor* UFXAutoTriggerLinearScaleColor::StaticClass() {
    static auto res = find_uobject("Class /Script/FXUtil.FXAutoTriggerLinearScaleColor");
    return (UFXAutoTriggerLinearScaleColor*)res;
}
