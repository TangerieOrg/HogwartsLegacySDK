#include "UFXAutoTriggerRequiredActorMatchIsPlayerCompanion.hpp"
#include "UFXAutoTriggerRequiredActorsMatchBase.hpp"
UFXAutoTriggerRequiredActorMatchIsPlayerCompanion* UFXAutoTriggerRequiredActorMatchIsPlayerCompanion::StaticClass() {
    static auto res = find_uobject("Class /Script/Phoenix.FXAutoTriggerRequiredActorMatchIsPlayerCompanion");
    return (UFXAutoTriggerRequiredActorMatchIsPlayerCompanion*)res;
}
