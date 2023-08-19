#include "UFXAutoTriggerBool.hpp"
#include "UFXAutoTriggerBoolPlayerAiming.hpp"
UFXAutoTriggerBoolPlayerAiming* UFXAutoTriggerBoolPlayerAiming::StaticClass() {
    static auto res = find_uobject("Class /Script/Phoenix.FXAutoTriggerBoolPlayerAiming");
    return (UFXAutoTriggerBoolPlayerAiming*)res;
}
