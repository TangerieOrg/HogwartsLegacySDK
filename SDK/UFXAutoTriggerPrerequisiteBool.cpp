#include "UFXAutoTriggerBool.hpp"
#include "UFXAutoTriggerPrerequisiteBase.hpp"
#include "UFXAutoTriggerPrerequisiteBool.hpp"
UFXAutoTriggerPrerequisiteBool* UFXAutoTriggerPrerequisiteBool::StaticClass() {
    static auto res = find_uobject("Class /Script/FXUtil.FXAutoTriggerPrerequisiteBool");
    return (UFXAutoTriggerPrerequisiteBool*)res;
}
