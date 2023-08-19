#include "ECustomInterpType\Type.hpp"
#include "UAblAbilityTask.hpp"
#include "UAblSlopeSlideTask.hpp"
UAblSlopeSlideTask* UAblSlopeSlideTask::StaticClass() {
    static auto res = find_uobject("Class /Script/Phoenix.AblSlopeSlideTask");
    return (UAblSlopeSlideTask*)res;
}
