#include "UFXAutoTriggerRequiredActorMatchIsPlayer.hpp"
#include "UFXAutoTriggerRequiredActorsMatchBase.hpp"
UFXAutoTriggerRequiredActorMatchIsPlayer* UFXAutoTriggerRequiredActorMatchIsPlayer::StaticClass() {
    static auto res = find_uobject("Class /Script/FXUtil.FXAutoTriggerRequiredActorMatchIsPlayer");
    return (UFXAutoTriggerRequiredActorMatchIsPlayer*)res;
}
