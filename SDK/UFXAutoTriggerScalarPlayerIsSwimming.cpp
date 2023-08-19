#include "UFXAutoTriggerBool.hpp"
#include "UFXAutoTriggerScalarPlayerIsSwimming.hpp"
UFXAutoTriggerScalarPlayerIsSwimming* UFXAutoTriggerScalarPlayerIsSwimming::StaticClass() {
    static auto res = find_uobject("Class /Script/Phoenix.FXAutoTriggerScalarPlayerIsSwimming");
    return (UFXAutoTriggerScalarPlayerIsSwimming*)res;
}
