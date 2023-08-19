#include "UFXAutoTriggerBool.hpp"
#include "UFXAutoTriggerBoolHasSenseGroup.hpp"
UFXAutoTriggerBoolHasSenseGroup* UFXAutoTriggerBoolHasSenseGroup::StaticClass() {
    static auto res = find_uobject("Class /Script/Phoenix.FXAutoTriggerBoolHasSenseGroup");
    return (UFXAutoTriggerBoolHasSenseGroup*)res;
}
