#include "UAblAbilityTask.hpp"
#include "UAblTransformIntoNoDeathTask.hpp"
#include "UClass.hpp"
UAblTransformIntoNoDeathTask* UAblTransformIntoNoDeathTask::StaticClass() {
    static auto res = find_uobject("Class /Script/Phoenix.AblTransformIntoNoDeathTask");
    return (UAblTransformIntoNoDeathTask*)res;
}
