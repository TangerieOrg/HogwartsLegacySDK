#include "UFXAutoTriggerHighContrastGameplayConditions.hpp"
#include "UFXAutoTriggerPrerequisiteBase.hpp"
#include "UFXAutoTriggerPrerequisiteGameplayHighContrast.hpp"
UFXAutoTriggerPrerequisiteGameplayHighContrast* UFXAutoTriggerPrerequisiteGameplayHighContrast::StaticClass() {
    static auto res = find_uobject("Class /Script/Phoenix.FXAutoTriggerPrerequisiteGameplayHighContrast");
    return (UFXAutoTriggerPrerequisiteGameplayHighContrast*)res;
}
