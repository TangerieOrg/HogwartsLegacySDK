#include "EMountFlyingGait.hpp"
#include "UAblAbilityTask.hpp"
#include "UAblMountFlightAnimStateTask.hpp"
UAblMountFlightAnimStateTask* UAblMountFlightAnimStateTask::StaticClass() {
    static auto res = find_uobject("Class /Script/Phoenix.AblMountFlightAnimStateTask");
    return (UAblMountFlightAnimStateTask*)res;
}
