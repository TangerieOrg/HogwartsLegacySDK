#include "EAnimSpeedType\Type.hpp"
#include "UAblAbilityTask.hpp"
#include "UAblSetAnimSpeedTypeTask.hpp"
UAblSetAnimSpeedTypeTask* UAblSetAnimSpeedTypeTask::StaticClass() {
    static auto res = find_uobject("Class /Script/Phoenix.AblSetAnimSpeedTypeTask");
    return (UAblSetAnimSpeedTypeTask*)res;
}
