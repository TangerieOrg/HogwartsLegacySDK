#include "FAblTransformMultiChildTask.hpp"
#include "FAlphaBlend.hpp"
#include "UAblAbilityTask.hpp"
#include "UAblApplyTransformMultiChildTask.hpp"
#include "UAblTaskCondition.hpp"
UAblApplyTransformMultiChildTask* UAblApplyTransformMultiChildTask::StaticClass() {
    static auto res = find_uobject("Class /Script/Phoenix.AblApplyTransformMultiChildTask");
    return (UAblApplyTransformMultiChildTask*)res;
}
