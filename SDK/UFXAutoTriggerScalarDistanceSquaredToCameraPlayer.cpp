#include "UFXAutoTriggerScalar.hpp"
#include "UFXAutoTriggerScalarDistanceSquaredToCameraPlayer.hpp"
UFXAutoTriggerScalarDistanceSquaredToCameraPlayer* UFXAutoTriggerScalarDistanceSquaredToCameraPlayer::StaticClass() {
    static auto res = find_uobject("Class /Script/Phoenix.FXAutoTriggerScalarDistanceSquaredToCameraPlayer");
    return (UFXAutoTriggerScalarDistanceSquaredToCameraPlayer*)res;
}
