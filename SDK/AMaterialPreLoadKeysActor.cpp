#include "AActor.hpp"
#include "AMaterialPreLoadKeysActor.hpp"
#include "EMaterialPermuterLoadingPriority.hpp"
#include "FMaterialPermuterKeyProperty.hpp"
#include "UFunction.hpp"
#include "UMaterialInterface.hpp"
#include "UMaterialPermuterLoadingBundle.hpp"
AMaterialPreLoadKeysActor* AMaterialPreLoadKeysActor::StaticClass() {
    static auto res = find_uobject("Class /Script/MaterialPermuter.MaterialPreLoadKeysActor");
    return (AMaterialPreLoadKeysActor*)res;
}
void AMaterialPreLoadKeysActor::BuildPreLoads() {
    static auto func = (UFunction*)(find_uobject("Function /Script/MaterialPermuter.MaterialPreLoadKeysActor.BuildPreLoads"));
    struct Params_BuildPreLoads {
    }; // Size: 0x0
    Params_BuildPreLoads params{};
    ProcessEvent(func, &params);
}
