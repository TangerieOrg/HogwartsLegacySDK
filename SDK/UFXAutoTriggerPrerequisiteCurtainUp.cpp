#include "UFXAutoTriggerPrerequisiteBase.hpp"
#include "UFXAutoTriggerPrerequisiteCurtainUp.hpp"
UFXAutoTriggerPrerequisiteCurtainUp* UFXAutoTriggerPrerequisiteCurtainUp::StaticClass() {
    static auto res = find_uobject("Class /Script/Phoenix.FXAutoTriggerPrerequisiteCurtainUp");
    return (UFXAutoTriggerPrerequisiteCurtainUp*)res;
}
