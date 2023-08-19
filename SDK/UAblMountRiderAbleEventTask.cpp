#include "UAblAbilityTask.hpp"
#include "UAblMountRiderAbleEventTask.hpp"
UAblMountRiderAbleEventTask* UAblMountRiderAbleEventTask::StaticClass() {
    static auto res = find_uobject("Class /Script/Phoenix.AblMountRiderAbleEventTask");
    return (UAblMountRiderAbleEventTask*)res;
}
