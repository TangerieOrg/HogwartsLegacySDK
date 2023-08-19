#include "UFXAutoTriggerBool.hpp"
#include "UFXAutoTriggerValue.hpp"
UFXAutoTriggerBool* UFXAutoTriggerBool::StaticClass() {
    static auto res = find_uobject("Class /Script/FXUtil.FXAutoTriggerBool");
    return (UFXAutoTriggerBool*)res;
}
