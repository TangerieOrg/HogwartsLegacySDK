#include "EMovementMode.hpp"
#include "UAblAbilityTask.hpp"
#include "UAblMovementModeTask.hpp"
UAblMovementModeTask* UAblMovementModeTask::StaticClass() {
    static auto res = find_uobject("Class /Script/Phoenix.AblMovementModeTask");
    return (UAblMovementModeTask*)res;
}
