#include "ENPC_TurnAssist.hpp"
#include "ENPC_TurnAssistType.hpp"
#include "UAblAbilityTask.hpp"
#include "UablNPC_TurnAssistImpulseTask.hpp"
UablNPC_TurnAssistImpulseTask* UablNPC_TurnAssistImpulseTask::StaticClass() {
    static auto res = find_uobject("Class /Script/Phoenix.ablNPC_TurnAssistImpulseTask");
    return (UablNPC_TurnAssistImpulseTask*)res;
}
