#include "UAblAbilityTask.hpp"
#include "UAblAdjustCamTask.hpp"
UAblAdjustCamTask* UAblAdjustCamTask::StaticClass() {
    static auto res = find_uobject("Class /Script/Phoenix.AblAdjustCamTask");
    return (UAblAdjustCamTask*)res;
}
