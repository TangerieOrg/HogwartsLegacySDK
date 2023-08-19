#include "UFXAutoTriggerPrerequisiteBase.hpp"
#include "UObject.hpp"
UFXAutoTriggerPrerequisiteBase* UFXAutoTriggerPrerequisiteBase::StaticClass() {
    static auto res = find_uobject("Class /Script/FXUtil.FXAutoTriggerPrerequisiteBase");
    return (UFXAutoTriggerPrerequisiteBase*)res;
}
