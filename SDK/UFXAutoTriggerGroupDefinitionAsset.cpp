#include "UDataAsset.hpp"
#include "UFXAutoTriggerDefinitionAsset.hpp"
#include "UFXAutoTriggerGroupDefinitionAsset.hpp"
#include "UFXAutoTriggerPrerequisiteBase.hpp"
UFXAutoTriggerGroupDefinitionAsset* UFXAutoTriggerGroupDefinitionAsset::StaticClass() {
    static auto res = find_uobject("Class /Script/FXUtil.FXAutoTriggerGroupDefinitionAsset");
    return (UFXAutoTriggerGroupDefinitionAsset*)res;
}
