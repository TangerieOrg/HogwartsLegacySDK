#include "UFXAutoTriggerUpdateLocalSkinFXVar.hpp"
#include "UFXAutoTriggerUpdateLocalVar.hpp"
UFXAutoTriggerUpdateLocalSkinFXVar* UFXAutoTriggerUpdateLocalSkinFXVar::StaticClass() {
    static auto res = find_uobject("Class /Script/FXUtil.FXAutoTriggerUpdateLocalSkinFXVar");
    return (UFXAutoTriggerUpdateLocalSkinFXVar*)res;
}
