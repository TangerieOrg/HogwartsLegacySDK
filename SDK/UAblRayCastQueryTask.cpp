#include "EAblAbilityTaskRealm.hpp"
#include "ECollisionChannel.hpp"
#include "FAblAbilityTargetTypeLocation.hpp"
#include "UAblAbilityTask.hpp"
#include "UAblRayCastQueryTask.hpp"
UAblRayCastQueryTask* UAblRayCastQueryTask::StaticClass() {
    static auto res = find_uobject("Class /Script/AbleCore.AblRayCastQueryTask");
    return (UAblRayCastQueryTask*)res;
}
