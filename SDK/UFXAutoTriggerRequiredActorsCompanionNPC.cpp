#include "UFXAutoTriggerCustomCompaninonBuilder.hpp"
#include "UFXAutoTriggerRequiredActorsBase.hpp"
#include "UFXAutoTriggerRequiredActorsCompanionNPC.hpp"
UFXAutoTriggerRequiredActorsCompanionNPC* UFXAutoTriggerRequiredActorsCompanionNPC::StaticClass() {
    static auto res = find_uobject("Class /Script/Phoenix.FXAutoTriggerRequiredActorsCompanionNPC");
    return (UFXAutoTriggerRequiredActorsCompanionNPC*)res;
}
