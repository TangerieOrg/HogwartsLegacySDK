#include "UFXAutoTriggerScalar.hpp"
#include "UFXAutoTriggerUpdateLocalSkinFXVar.hpp"
#include "UFXAutoTriggerUpdateLocalSkinFXVarFloat.hpp"
UFXAutoTriggerUpdateLocalSkinFXVarFloat* UFXAutoTriggerUpdateLocalSkinFXVarFloat::StaticClass() {
    static auto res = find_uobject("Class /Script/FXUtil.FXAutoTriggerUpdateLocalSkinFXVarFloat");
    return (UFXAutoTriggerUpdateLocalSkinFXVarFloat*)res;
}
