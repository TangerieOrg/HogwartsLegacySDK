#include "UFXAutoTriggerBool.hpp"
#include "UFXAutoTriggerScalarIsSwimming.hpp"
UFXAutoTriggerScalarIsSwimming* UFXAutoTriggerScalarIsSwimming::StaticClass() {
    static auto res = find_uobject("Class /Script/Phoenix.FXAutoTriggerScalarIsSwimming");
    return (UFXAutoTriggerScalarIsSwimming*)res;
}
