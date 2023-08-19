#include "FRotator.hpp"
#include "FVector.hpp"
#include "UAblAbilityTask.hpp"
#include "UAblPlayMultiFxAssetBaseTask.hpp"
#include "UAblTaskCondition.hpp"
UAblPlayMultiFxAssetBaseTask* UAblPlayMultiFxAssetBaseTask::StaticClass() {
    static auto res = find_uobject("Class /Script/Phoenix.AblPlayMultiFxAssetBaseTask");
    return (UAblPlayMultiFxAssetBaseTask*)res;
}
