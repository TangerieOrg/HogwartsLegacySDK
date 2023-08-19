#include "UAblAbilityTask.hpp"
#include "UAblCheckJumpLandTask.hpp"
UAblCheckJumpLandTask* UAblCheckJumpLandTask::StaticClass() {
    static auto res = find_uobject("Class /Script/Phoenix.AblCheckJumpLandTask");
    return (UAblCheckJumpLandTask*)res;
}
