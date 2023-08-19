#include "UFXAutoTriggerRequiredActorMatchIsNotPlayer.hpp"
#include "UFXAutoTriggerRequiredActorsMatchBase.hpp"
UFXAutoTriggerRequiredActorMatchIsNotPlayer* UFXAutoTriggerRequiredActorMatchIsNotPlayer::StaticClass() {
    static auto res = find_uobject("Class /Script/FXUtil.FXAutoTriggerRequiredActorMatchIsNotPlayer");
    return (UFXAutoTriggerRequiredActorMatchIsNotPlayer*)res;
}
