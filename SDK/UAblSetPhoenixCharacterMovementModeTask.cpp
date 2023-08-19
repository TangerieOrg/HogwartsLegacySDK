#include "EManagedMovementModePriority.hpp"
#include "EMovementMode.hpp"
#include "UAblAbilityTask.hpp"
#include "UAblSetPhoenixCharacterMovementModeTask.hpp"
UAblSetPhoenixCharacterMovementModeTask* UAblSetPhoenixCharacterMovementModeTask::StaticClass() {
    static auto res = find_uobject("Class /Script/Phoenix.AblSetPhoenixCharacterMovementModeTask");
    return (UAblSetPhoenixCharacterMovementModeTask*)res;
}
