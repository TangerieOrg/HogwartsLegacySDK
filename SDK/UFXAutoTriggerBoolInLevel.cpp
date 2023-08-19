#include "FLerpVolumesLevelName.hpp"
#include "UFXAutoTriggerBool.hpp"
#include "UFXAutoTriggerBoolInLevel.hpp"
UFXAutoTriggerBoolInLevel* UFXAutoTriggerBoolInLevel::StaticClass() {
    static auto res = find_uobject("Class /Script/Phoenix.FXAutoTriggerBoolInLevel");
    return (UFXAutoTriggerBoolInLevel*)res;
}
