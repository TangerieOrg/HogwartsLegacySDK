#include "UFXAutoTriggerBool.hpp"
#include "UFXAutoTriggerLinearColor.hpp"
#include "UFXAutoTriggerLinearSelectColor.hpp"
UFXAutoTriggerLinearSelectColor* UFXAutoTriggerLinearSelectColor::StaticClass() {
    static auto res = find_uobject("Class /Script/FXUtil.FXAutoTriggerLinearSelectColor");
    return (UFXAutoTriggerLinearSelectColor*)res;
}
