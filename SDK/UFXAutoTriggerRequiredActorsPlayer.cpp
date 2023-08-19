#include "UFXAutoTriggerRequiredActorsBase.hpp"
#include "UFXAutoTriggerRequiredActorsPlayer.hpp"
UFXAutoTriggerRequiredActorsPlayer* UFXAutoTriggerRequiredActorsPlayer::StaticClass() {
    static auto res = find_uobject("Class /Script/FXUtil.FXAutoTriggerRequiredActorsPlayer");
    return (UFXAutoTriggerRequiredActorsPlayer*)res;
}
