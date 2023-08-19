#include "UFXAutoTriggerRequiredActorsFriendlyNPC.hpp"
#include "UFXAutoTriggerRequiredActorsNPC.hpp"
UFXAutoTriggerRequiredActorsFriendlyNPC* UFXAutoTriggerRequiredActorsFriendlyNPC::StaticClass() {
    static auto res = find_uobject("Class /Script/Phoenix.FXAutoTriggerRequiredActorsFriendlyNPC");
    return (UFXAutoTriggerRequiredActorsFriendlyNPC*)res;
}
