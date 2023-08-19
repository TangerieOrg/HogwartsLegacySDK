#include "UFXAutoTriggerBool.hpp"
#include "UFXAutoTriggerBoolIsInWater.hpp"
UFXAutoTriggerBoolIsInWater* UFXAutoTriggerBoolIsInWater::StaticClass() {
    static auto res = find_uobject("Class /Script/Phoenix.FXAutoTriggerBoolIsInWater");
    return (UFXAutoTriggerBoolIsInWater*)res;
}
