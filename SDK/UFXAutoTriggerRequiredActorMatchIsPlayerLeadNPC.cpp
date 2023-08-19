#include "UFXAutoTriggerRequiredActorMatchIsPlayerLeadNPC.hpp"
#include "UFXAutoTriggerRequiredActorsMatchBase.hpp"
UFXAutoTriggerRequiredActorMatchIsPlayerLeadNPC* UFXAutoTriggerRequiredActorMatchIsPlayerLeadNPC::StaticClass() {
    static auto res = find_uobject("Class /Script/Phoenix.FXAutoTriggerRequiredActorMatchIsPlayerLeadNPC");
    return (UFXAutoTriggerRequiredActorMatchIsPlayerLeadNPC*)res;
}
