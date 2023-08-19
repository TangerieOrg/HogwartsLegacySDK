#include "UFXAutoTriggerRequiredActorMatchCustomBucket.hpp"
#include "UFXAutoTriggerRequiredActorsMatchBase.hpp"
UFXAutoTriggerRequiredActorMatchCustomBucket* UFXAutoTriggerRequiredActorMatchCustomBucket::StaticClass() {
    static auto res = find_uobject("Class /Script/FXUtil.FXAutoTriggerRequiredActorMatchCustomBucket");
    return (UFXAutoTriggerRequiredActorMatchCustomBucket*)res;
}
