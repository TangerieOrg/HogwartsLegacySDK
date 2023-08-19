#include "UFXAutoTriggerRequiredActorsExternalBucketFilter.hpp"
#include "UObject.hpp"
UFXAutoTriggerRequiredActorsExternalBucketFilter* UFXAutoTriggerRequiredActorsExternalBucketFilter::StaticClass() {
    static auto res = find_uobject("Class /Script/FXUtil.FXAutoTriggerRequiredActorsExternalBucketFilter");
    return (UFXAutoTriggerRequiredActorsExternalBucketFilter*)res;
}
