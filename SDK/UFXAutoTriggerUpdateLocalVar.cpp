#include "UFXAutoTriggerUpdateLocalVar.hpp"
#include "UObject.hpp"
UFXAutoTriggerUpdateLocalVar* UFXAutoTriggerUpdateLocalVar::StaticClass() {
    static auto res = find_uobject("Class /Script/FXUtil.FXAutoTriggerUpdateLocalVar");
    return (UFXAutoTriggerUpdateLocalVar*)res;
}
