#include "FGameplayTagContainer.hpp"
#include "UAblObjectArchitectTagChooser.hpp"
#include "UAblPlayMultiFxAssetBaseTask.hpp"
#include "UAblPlayObjectArchitectMultiFxAssetTask.hpp"
UAblPlayObjectArchitectMultiFxAssetTask* UAblPlayObjectArchitectMultiFxAssetTask::StaticClass() {
    static auto res = find_uobject("Class /Script/Phoenix.AblPlayObjectArchitectMultiFxAssetTask");
    return (UAblPlayObjectArchitectMultiFxAssetTask*)res;
}
