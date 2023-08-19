#include "UAblAbilityTask.hpp"
#include "UAblBallisticBounceBackTask.hpp"
UAblBallisticBounceBackTask* UAblBallisticBounceBackTask::StaticClass() {
    static auto res = find_uobject("Class /Script/Phoenix.AblBallisticBounceBackTask");
    return (UAblBallisticBounceBackTask*)res;
}
