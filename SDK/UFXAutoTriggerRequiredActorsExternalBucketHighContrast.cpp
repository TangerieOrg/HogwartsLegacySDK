#include "EHighContrastGameplayBucket.hpp"
#include "UFXAutoTriggerRequiredActorsBase.hpp"
#include "UFXAutoTriggerRequiredActorsExternalBucketHighContrast.hpp"
UFXAutoTriggerRequiredActorsExternalBucketHighContrast* UFXAutoTriggerRequiredActorsExternalBucketHighContrast::StaticClass() {
    static auto res = find_uobject("Class /Script/Phoenix.FXAutoTriggerRequiredActorsExternalBucketHighContrast");
    return (UFXAutoTriggerRequiredActorsExternalBucketHighContrast*)res;
}
