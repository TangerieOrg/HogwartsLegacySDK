#include "EAblAbilityTaskRealm.hpp"
#include "UAblAbilityTask.hpp"
#include "UAblCollisionFilter.hpp"
#include "UAblCollisionQueryTask.hpp"
#include "UAblCollisionShape.hpp"
UAblCollisionQueryTask* UAblCollisionQueryTask::StaticClass() {
    static auto res = find_uobject("Class /Script/AbleCore.AblCollisionQueryTask");
    return (UAblCollisionQueryTask*)res;
}
