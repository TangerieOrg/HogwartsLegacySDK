#include "FCameraProperties.hpp"
#include "LookAtType.hpp"
#include "UAblAbilityTask.hpp"
#include "UAblNewCamTask.hpp"
UAblNewCamTask* UAblNewCamTask::StaticClass() {
    static auto res = find_uobject("Class /Script/Phoenix.AblNewCamTask");
    return (UAblNewCamTask*)res;
}
