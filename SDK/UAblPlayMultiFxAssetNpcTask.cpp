#include "UAblPlayMultiFxAssetNpcTask.hpp"
#include "UAblPlayObjectArchitectMultiFxAssetTask.hpp"
UAblPlayMultiFxAssetNpcTask* UAblPlayMultiFxAssetNpcTask::StaticClass() {
    static auto res = find_uobject("Class /Script/Phoenix.AblPlayMultiFxAssetNpcTask");
    return (UAblPlayMultiFxAssetNpcTask*)res;
}
