#include "UFXAutoTriggerPrerequisiteBase.hpp"
#include "UFXAutoTriggerPrerequisiteDisabled.hpp"
UFXAutoTriggerPrerequisiteDisabled* UFXAutoTriggerPrerequisiteDisabled::StaticClass() {
    static auto res = find_uobject("Class /Script/FXUtil.FXAutoTriggerPrerequisiteDisabled");
    return (UFXAutoTriggerPrerequisiteDisabled*)res;
}
