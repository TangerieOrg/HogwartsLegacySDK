#include "FLerpVolumesLevelName.hpp"
#include "UFXAutoTriggerPrerequisiteBase.hpp"
#include "UFXAutoTriggerPrerequisiteInLevel.hpp"
UFXAutoTriggerPrerequisiteInLevel* UFXAutoTriggerPrerequisiteInLevel::StaticClass() {
    static auto res = find_uobject("Class /Script/Phoenix.FXAutoTriggerPrerequisiteInLevel");
    return (UFXAutoTriggerPrerequisiteInLevel*)res;
}
