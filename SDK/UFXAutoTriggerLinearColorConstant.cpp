#include "FLinearColor.hpp"
#include "UFXAutoTriggerLinearColor.hpp"
#include "UFXAutoTriggerLinearColorConstant.hpp"
UFXAutoTriggerLinearColorConstant* UFXAutoTriggerLinearColorConstant::StaticClass() {
    static auto res = find_uobject("Class /Script/FXUtil.FXAutoTriggerLinearColorConstant");
    return (UFXAutoTriggerLinearColorConstant*)res;
}
