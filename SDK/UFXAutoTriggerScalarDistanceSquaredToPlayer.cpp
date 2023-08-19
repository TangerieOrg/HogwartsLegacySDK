#include "UFXAutoTriggerScalar.hpp"
#include "UFXAutoTriggerScalarDistanceSquaredToPlayer.hpp"
UFXAutoTriggerScalarDistanceSquaredToPlayer* UFXAutoTriggerScalarDistanceSquaredToPlayer::StaticClass() {
    static auto res = find_uobject("Class /Script/Phoenix.FXAutoTriggerScalarDistanceSquaredToPlayer");
    return (UFXAutoTriggerScalarDistanceSquaredToPlayer*)res;
}
