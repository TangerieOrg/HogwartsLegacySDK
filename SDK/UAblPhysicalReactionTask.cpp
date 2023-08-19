#include "EImpactReactionStrength.hpp"
#include "EPhysicalReactionTaskAction.hpp"
#include "ERagdollCOMLocationDrivingMode.hpp"
#include "ERagdollCOMRotationDrivingMode.hpp"
#include "ERagdollDrivingSetting.hpp"
#include "ERagdollPoseDrivingMode.hpp"
#include "UAblAbilityTask.hpp"
#include "UAblPhysicalReactionTask.hpp"
UAblPhysicalReactionTask* UAblPhysicalReactionTask::StaticClass() {
    static auto res = find_uobject("Class /Script/Phoenix.AblPhysicalReactionTask");
    return (UAblPhysicalReactionTask*)res;
}
