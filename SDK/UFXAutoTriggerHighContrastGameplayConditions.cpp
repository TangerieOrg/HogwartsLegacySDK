#include "FLerpVolumesLevelName.hpp"
#include "UDataAsset.hpp"
#include "UFXAutoTriggerBool.hpp"
#include "UFXAutoTriggerHighContrastGameplayConditions.hpp"
UFXAutoTriggerHighContrastGameplayConditions* UFXAutoTriggerHighContrastGameplayConditions::StaticClass() {
    static auto res = find_uobject("Class /Script/Phoenix.FXAutoTriggerHighContrastGameplayConditions");
    return (UFXAutoTriggerHighContrastGameplayConditions*)res;
}
