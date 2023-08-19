#include "ENPC_TurnAssist.hpp"
#include "EablNPC_FixedSource.hpp"
#include "UAblAbilityTask.hpp"
#include "UablNPC_TurnAssistTask.hpp"
UablNPC_TurnAssistTask* UablNPC_TurnAssistTask::StaticClass() {
    static auto res = find_uobject("Class /Script/Phoenix.ablNPC_TurnAssistTask");
    return (UablNPC_TurnAssistTask*)res;
}
