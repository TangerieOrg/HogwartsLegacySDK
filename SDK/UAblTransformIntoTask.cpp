#include "UAblAbilityTask.hpp"
#include "UAblTransformIntoTask.hpp"
#include "UClass.hpp"
UAblTransformIntoTask* UAblTransformIntoTask::StaticClass() {
    static auto res = find_uobject("Class /Script/Phoenix.AblTransformIntoTask");
    return (UAblTransformIntoTask*)res;
}
