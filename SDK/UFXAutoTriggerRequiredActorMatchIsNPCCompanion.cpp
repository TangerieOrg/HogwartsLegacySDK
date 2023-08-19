#include "UFXAutoTriggerRequiredActorMatchIsNPCCompanion.hpp"
#include "UFXAutoTriggerRequiredActorsMatchBase.hpp"
UFXAutoTriggerRequiredActorMatchIsNPCCompanion* UFXAutoTriggerRequiredActorMatchIsNPCCompanion::StaticClass() {
    static auto res = find_uobject("Class /Script/Phoenix.FXAutoTriggerRequiredActorMatchIsNPCCompanion");
    return (UFXAutoTriggerRequiredActorMatchIsNPCCompanion*)res;
}
