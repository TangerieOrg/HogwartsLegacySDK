#include "UClass.hpp"
#include "UFXAutoTriggerUpdateBase.hpp"
#include "UFXAutoTriggerUpdateLocalSkinFXVar.hpp"
#include "UFXAutoTriggerUpdateSkinFXParameters.hpp"
UFXAutoTriggerUpdateSkinFXParameters* UFXAutoTriggerUpdateSkinFXParameters::StaticClass() {
    static auto res = find_uobject("Class /Script/FXUtil.FXAutoTriggerUpdateSkinFXParameters");
    return (UFXAutoTriggerUpdateSkinFXParameters*)res;
}
