#include "UFXAutoTriggerRequiredActorsBase.hpp"
#include "UFXAutoTriggerRequiredActorsCustomBucket.hpp"
UFXAutoTriggerRequiredActorsCustomBucket* UFXAutoTriggerRequiredActorsCustomBucket::StaticClass() {
    static auto res = find_uobject("Class /Script/FXUtil.FXAutoTriggerRequiredActorsCustomBucket");
    return (UFXAutoTriggerRequiredActorsCustomBucket*)res;
}
