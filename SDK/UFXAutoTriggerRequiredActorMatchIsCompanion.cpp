#include "UFXAutoTriggerRequiredActorMatchIsCompanion.hpp"
#include "UFXAutoTriggerRequiredActorsMatchBase.hpp"
UFXAutoTriggerRequiredActorMatchIsCompanion* UFXAutoTriggerRequiredActorMatchIsCompanion::StaticClass() {
    static auto res = find_uobject("Class /Script/Phoenix.FXAutoTriggerRequiredActorMatchIsCompanion");
    return (UFXAutoTriggerRequiredActorMatchIsCompanion*)res;
}
