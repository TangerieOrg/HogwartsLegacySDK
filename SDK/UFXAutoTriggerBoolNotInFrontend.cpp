#include "UFXAutoTriggerBool.hpp"
#include "UFXAutoTriggerBoolNotInFrontend.hpp"
UFXAutoTriggerBoolNotInFrontend* UFXAutoTriggerBoolNotInFrontend::StaticClass() {
    static auto res = find_uobject("Class /Script/Phoenix.FXAutoTriggerBoolNotInFrontend");
    return (UFXAutoTriggerBoolNotInFrontend*)res;
}
