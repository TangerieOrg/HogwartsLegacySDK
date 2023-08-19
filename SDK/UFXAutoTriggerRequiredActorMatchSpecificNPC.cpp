#include "FDbSingleColumnInfo.hpp"
#include "UFXAutoTriggerRequiredActorMatchSpecificNPC.hpp"
#include "UFXAutoTriggerRequiredActorsMatchBase.hpp"
UFXAutoTriggerRequiredActorMatchSpecificNPC* UFXAutoTriggerRequiredActorMatchSpecificNPC::StaticClass() {
    static auto res = find_uobject("Class /Script/Phoenix.FXAutoTriggerRequiredActorMatchSpecificNPC");
    return (UFXAutoTriggerRequiredActorMatchSpecificNPC*)res;
}
