#include "ENPC_TurnAssist.hpp"
#include "UAblAbilityTask.hpp"
#include "UablNPC_MobilityTurnAssistTask.hpp"
UablNPC_MobilityTurnAssistTask* UablNPC_MobilityTurnAssistTask::StaticClass() {
    static auto res = find_uobject("Class /Script/Phoenix.ablNPC_MobilityTurnAssistTask");
    return (UablNPC_MobilityTurnAssistTask*)res;
}
