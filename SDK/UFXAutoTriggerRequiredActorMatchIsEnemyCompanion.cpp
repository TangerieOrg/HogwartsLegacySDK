#include "UFXAutoTriggerRequiredActorMatchIsEnemyCompanion.hpp"
#include "UFXAutoTriggerRequiredActorsMatchBase.hpp"
UFXAutoTriggerRequiredActorMatchIsEnemyCompanion* UFXAutoTriggerRequiredActorMatchIsEnemyCompanion::StaticClass() {
    static auto res = find_uobject("Class /Script/Phoenix.FXAutoTriggerRequiredActorMatchIsEnemyCompanion");
    return (UFXAutoTriggerRequiredActorMatchIsEnemyCompanion*)res;
}
