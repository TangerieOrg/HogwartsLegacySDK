#include "UFXAutoTriggerLinearColor.hpp"
#include "UFXAutoTriggerUpdateLocalSkinFXVar.hpp"
#include "UFXAutoTriggerUpdateLocalSkinFXVarLinearColor.hpp"
UFXAutoTriggerUpdateLocalSkinFXVarLinearColor* UFXAutoTriggerUpdateLocalSkinFXVarLinearColor::StaticClass() {
    static auto res = find_uobject("Class /Script/FXUtil.FXAutoTriggerUpdateLocalSkinFXVarLinearColor");
    return (UFXAutoTriggerUpdateLocalSkinFXVarLinearColor*)res;
}
