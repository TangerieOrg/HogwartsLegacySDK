#include "UFXAutoTriggerBool.hpp"
#include "UFXAutoTriggerBoolGameplayHighContrast.hpp"
#include "UFXAutoTriggerHighContrastGameplayConditions.hpp"
UFXAutoTriggerBoolGameplayHighContrast* UFXAutoTriggerBoolGameplayHighContrast::StaticClass() {
    static auto res = find_uobject("Class /Script/Phoenix.FXAutoTriggerBoolGameplayHighContrast");
    return (UFXAutoTriggerBoolGameplayHighContrast*)res;
}
