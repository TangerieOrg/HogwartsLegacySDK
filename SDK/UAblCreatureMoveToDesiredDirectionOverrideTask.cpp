#include "UAblAbilityTask.hpp"
#include "UAblCreatureMoveToDesiredDirectionOverrideTask.hpp"
UAblCreatureMoveToDesiredDirectionOverrideTask* UAblCreatureMoveToDesiredDirectionOverrideTask::StaticClass() {
    static auto res = find_uobject("Class /Script/Phoenix.AblCreatureMoveToDesiredDirectionOverrideTask");
    return (UAblCreatureMoveToDesiredDirectionOverrideTask*)res;
}
