#include "FFXAutoTriggerFXSpawnInfo.hpp"
#include "FMultiFX2Var.hpp"
#include "UDataAsset.hpp"
#include "UFXAutoTriggerConditionBase.hpp"
#include "UFXAutoTriggerDefinitionAsset.hpp"
#include "UFXAutoTriggerPrerequisiteBase.hpp"
#include "UFXAutoTriggerRequiredActorsBase.hpp"
#include "UFXAutoTriggerUpdateBase.hpp"
UFXAutoTriggerDefinitionAsset* UFXAutoTriggerDefinitionAsset::StaticClass() {
    static auto res = find_uobject("Class /Script/FXUtil.FXAutoTriggerDefinitionAsset");
    return (UFXAutoTriggerDefinitionAsset*)res;
}
