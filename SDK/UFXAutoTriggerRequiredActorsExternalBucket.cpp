#include "UFXAutoTriggerRequiredActorsBase.hpp"
#include "UFXAutoTriggerRequiredActorsExternalBucket.hpp"
#include "UFXAutoTriggerRequiredActorsMatchBase.hpp"
UFXAutoTriggerRequiredActorsExternalBucket* UFXAutoTriggerRequiredActorsExternalBucket::StaticClass() {
    static auto res = find_uobject("Class /Script/FXUtil.FXAutoTriggerRequiredActorsExternalBucket");
    return (UFXAutoTriggerRequiredActorsExternalBucket*)res;
}
