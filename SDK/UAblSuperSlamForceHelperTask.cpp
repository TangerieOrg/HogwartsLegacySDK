#include "UAblAbilityTask.hpp"
#include "UAblSuperSlamForceHelperTask.hpp"
UAblSuperSlamForceHelperTask* UAblSuperSlamForceHelperTask::StaticClass() {
    static auto res = find_uobject("Class /Script/Phoenix.AblSuperSlamForceHelperTask");
    return (UAblSuperSlamForceHelperTask*)res;
}
