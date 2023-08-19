#include "FLerpVolumesLevelName.hpp"
#include "UFXAutoTriggerPrerequisiteBase.hpp"
#include "UFXAutoTriggerPrerequisiteInLevels.hpp"
UFXAutoTriggerPrerequisiteInLevels* UFXAutoTriggerPrerequisiteInLevels::StaticClass() {
    static auto res = find_uobject("Class /Script/Phoenix.FXAutoTriggerPrerequisiteInLevels");
    return (UFXAutoTriggerPrerequisiteInLevels*)res;
}
