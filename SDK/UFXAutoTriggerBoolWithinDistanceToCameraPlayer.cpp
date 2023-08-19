#include "UFXAutoTriggerBoolWithinDistanceToCamera.hpp"
#include "UFXAutoTriggerBoolWithinDistanceToCameraPlayer.hpp"
UFXAutoTriggerBoolWithinDistanceToCameraPlayer* UFXAutoTriggerBoolWithinDistanceToCameraPlayer::StaticClass() {
    static auto res = find_uobject("Class /Script/Phoenix.FXAutoTriggerBoolWithinDistanceToCameraPlayer");
    return (UFXAutoTriggerBoolWithinDistanceToCameraPlayer*)res;
}
