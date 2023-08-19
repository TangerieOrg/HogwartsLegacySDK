#include "UFXAutoTriggerRequiredActorMatchHasSocket.hpp"
#include "UFXAutoTriggerRequiredActorsMatchBase.hpp"
UFXAutoTriggerRequiredActorMatchHasSocket* UFXAutoTriggerRequiredActorMatchHasSocket::StaticClass() {
    static auto res = find_uobject("Class /Script/FXUtil.FXAutoTriggerRequiredActorMatchHasSocket");
    return (UFXAutoTriggerRequiredActorMatchHasSocket*)res;
}
