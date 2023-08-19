#include "UDataAsset.hpp"
#include "UFXAutoTriggerDefinitionAsset.hpp"
#include "UFXAutoTriggerGlobalDefinitionAsset.hpp"
#include "UFXAutoTriggerGroupDefinitionAsset.hpp"
#include "UFXAutoTriggerPrerequisiteBase.hpp"
UFXAutoTriggerGlobalDefinitionAsset* UFXAutoTriggerGlobalDefinitionAsset::StaticClass() {
    static auto res = find_uobject("Class /Script/FXUtil.FXAutoTriggerGlobalDefinitionAsset");
    return (UFXAutoTriggerGlobalDefinitionAsset*)res;
}
