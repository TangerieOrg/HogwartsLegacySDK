#include "EAblNPCTurnToTaskDestination.hpp"
#include "FAlphaBlend.hpp"
#include "FRotator.hpp"
#include "UAblAbilityTask.hpp"
#include "UAblNPCTurnToTask.hpp"
UAblNPCTurnToTask* UAblNPCTurnToTask::StaticClass() {
    static auto res = find_uobject("Class /Script/Phoenix.AblNPCTurnToTask");
    return (UAblNPCTurnToTask*)res;
}
