#include "UFXAutoTriggerBool.hpp"
#include "UFXAutoTriggerBoolActorInFrontOfCamera.hpp"
UFXAutoTriggerBoolActorInFrontOfCamera* UFXAutoTriggerBoolActorInFrontOfCamera::StaticClass() {
    static auto res = find_uobject("Class /Script/Phoenix.FXAutoTriggerBoolActorInFrontOfCamera");
    return (UFXAutoTriggerBoolActorInFrontOfCamera*)res;
}
