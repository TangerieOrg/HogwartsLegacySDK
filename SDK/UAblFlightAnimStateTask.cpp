#include "UAblAbilityTask.hpp"
#include "UAblFlightAnimStateTask.hpp"
UAblFlightAnimStateTask* UAblFlightAnimStateTask::StaticClass() {
    static auto res = find_uobject("Class /Script/Phoenix.AblFlightAnimStateTask");
    return (UAblFlightAnimStateTask*)res;
}
