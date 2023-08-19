#include "EMovementMode.hpp"
#include "ENpcMoveDirectionType.hpp"
#include "FVector.hpp"
#include "UAblAbilityTask.hpp"
#include "UAblNpcMoveInDirectionTask.hpp"
#include "UCurveFloat.hpp"
UAblNpcMoveInDirectionTask* UAblNpcMoveInDirectionTask::StaticClass() {
    static auto res = find_uobject("Class /Script/Phoenix.AblNpcMoveInDirectionTask");
    return (UAblNpcMoveInDirectionTask*)res;
}
