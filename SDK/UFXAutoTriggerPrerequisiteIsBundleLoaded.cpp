#include "EMaterialPermuterLoadingPriority.hpp"
#include "FMaterialPermuterKeyProperty.hpp"
#include "UFXAutoTriggerPrerequisiteBase.hpp"
#include "UFXAutoTriggerPrerequisiteIsBundleLoaded.hpp"
UFXAutoTriggerPrerequisiteIsBundleLoaded* UFXAutoTriggerPrerequisiteIsBundleLoaded::StaticClass() {
    static auto res = find_uobject("Class /Script/FXUtil.FXAutoTriggerPrerequisiteIsBundleLoaded");
    return (UFXAutoTriggerPrerequisiteIsBundleLoaded*)res;
}
