#include "UFXAutoTriggerBool.hpp"
#include "UFXAutoTriggerBoolFloorIsWalkable.hpp"
UFXAutoTriggerBoolFloorIsWalkable* UFXAutoTriggerBoolFloorIsWalkable::StaticClass() {
    static auto res = find_uobject("Class /Script/FXUtil.FXAutoTriggerBoolFloorIsWalkable");
    return (UFXAutoTriggerBoolFloorIsWalkable*)res;
}
