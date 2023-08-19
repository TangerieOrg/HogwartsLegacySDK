#include "UAblPlayMultiFxAssetBaseTask.hpp"
#include "UAblPlayMultiFxAssetTask.hpp"
#include "UMultiFX2Asset.hpp"
UAblPlayMultiFxAssetTask* UAblPlayMultiFxAssetTask::StaticClass() {
    static auto res = find_uobject("Class /Script/Phoenix.AblPlayMultiFxAssetTask");
    return (UAblPlayMultiFxAssetTask*)res;
}
