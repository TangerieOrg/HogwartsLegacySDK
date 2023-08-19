#include "UFXAutoTriggerPrerequisiteBase.hpp"
#include "UFXAutoTriggerPrerequisiteDevelopmentOnly.hpp"
UFXAutoTriggerPrerequisiteDevelopmentOnly* UFXAutoTriggerPrerequisiteDevelopmentOnly::StaticClass() {
    static auto res = find_uobject("Class /Script/FXUtil.FXAutoTriggerPrerequisiteDevelopmentOnly");
    return (UFXAutoTriggerPrerequisiteDevelopmentOnly*)res;
}
