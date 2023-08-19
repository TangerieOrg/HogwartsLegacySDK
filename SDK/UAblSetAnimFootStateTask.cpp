#include "EBasicMobilityFootState.hpp"
#include "UAblAbilityTask.hpp"
#include "UAblSetAnimFootStateTask.hpp"
UAblSetAnimFootStateTask* UAblSetAnimFootStateTask::StaticClass() {
    static auto res = find_uobject("Class /Script/Phoenix.AblSetAnimFootStateTask");
    return (UAblSetAnimFootStateTask*)res;
}
