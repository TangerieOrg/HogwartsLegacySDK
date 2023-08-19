#include "EImpactReactionStrength.hpp"
#include "EPhysicalReactionTaskAction.hpp"
#include "ERagdollCOMLocationDrivingMode.hpp"
#include "ERagdollCOMRotationDrivingMode.hpp"
#include "ERagdollDrivingSetting.hpp"
#include "ERagdollPoseDrivingMode.hpp"
#include "UAblAbilityTask.hpp"
#include "UAblNPC_PhysicalReactionTask.hpp"
UAblNPC_PhysicalReactionTask* UAblNPC_PhysicalReactionTask::StaticClass() {
    static auto res = find_uobject("Class /Script/Phoenix.AblNPC_PhysicalReactionTask");
    return (UAblNPC_PhysicalReactionTask*)res;
}
