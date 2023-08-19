#include "UFXAutoTriggerBoolWithinDistanceToCamera.hpp"
#include "UFXAutoTriggerBoolWithinDistanceToCameraActor.hpp"
UFXAutoTriggerBoolWithinDistanceToCameraActor* UFXAutoTriggerBoolWithinDistanceToCameraActor::StaticClass() {
    static auto res = find_uobject("Class /Script/Phoenix.FXAutoTriggerBoolWithinDistanceToCameraActor");
    return (UFXAutoTriggerBoolWithinDistanceToCameraActor*)res;
}
