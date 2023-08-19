#include "UFXAutoTriggerBool.hpp"
#include "UFXAutoTriggerBoolInFrontend.hpp"
UFXAutoTriggerBoolInFrontend* UFXAutoTriggerBoolInFrontend::StaticClass() {
    static auto res = find_uobject("Class /Script/Phoenix.FXAutoTriggerBoolInFrontend");
    return (UFXAutoTriggerBoolInFrontend*)res;
}
