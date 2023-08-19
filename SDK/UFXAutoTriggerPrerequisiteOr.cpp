#include "UFXAutoTriggerPrerequisiteBase.hpp"
#include "UFXAutoTriggerPrerequisiteOr.hpp"
UFXAutoTriggerPrerequisiteOr* UFXAutoTriggerPrerequisiteOr::StaticClass() {
    static auto res = find_uobject("Class /Script/FXUtil.FXAutoTriggerPrerequisiteOr");
    return (UFXAutoTriggerPrerequisiteOr*)res;
}
