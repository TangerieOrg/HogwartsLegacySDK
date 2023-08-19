#include "UFXAutoTriggerBool.hpp"
#include "UFXAutoTriggerBoolPlayerInFrontOfCamera.hpp"
UFXAutoTriggerBoolPlayerInFrontOfCamera* UFXAutoTriggerBoolPlayerInFrontOfCamera::StaticClass() {
    static auto res = find_uobject("Class /Script/Phoenix.FXAutoTriggerBoolPlayerInFrontOfCamera");
    return (UFXAutoTriggerBoolPlayerInFrontOfCamera*)res;
}
