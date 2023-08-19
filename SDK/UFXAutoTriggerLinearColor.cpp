#include "UFXAutoTriggerLinearColor.hpp"
#include "UFXAutoTriggerValue.hpp"
UFXAutoTriggerLinearColor* UFXAutoTriggerLinearColor::StaticClass() {
    static auto res = find_uobject("Class /Script/FXUtil.FXAutoTriggerLinearColor");
    return (UFXAutoTriggerLinearColor*)res;
}
