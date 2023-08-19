#include "FLerpVolumesLevelName.hpp"
#include "UFXAutoTriggerBool.hpp"
#include "UFXAutoTriggerBoolInLevels.hpp"
UFXAutoTriggerBoolInLevels* UFXAutoTriggerBoolInLevels::StaticClass() {
    static auto res = find_uobject("Class /Script/Phoenix.FXAutoTriggerBoolInLevels");
    return (UFXAutoTriggerBoolInLevels*)res;
}
