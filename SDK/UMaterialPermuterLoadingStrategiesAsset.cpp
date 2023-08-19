#include "FMaterialPermuterLoadingStrategies.hpp"
#include "UDataAsset.hpp"
#include "UFunction.hpp"
#include "UMaterialPermuterDynamicTrigger.hpp"
#include "UMaterialPermuterLoadingStrategiesAsset.hpp"
UMaterialPermuterLoadingStrategiesAsset* UMaterialPermuterLoadingStrategiesAsset::StaticClass() {
    static auto res = find_uobject("Class /Script/MaterialPermuter.MaterialPermuterLoadingStrategiesAsset");
    return (UMaterialPermuterLoadingStrategiesAsset*)res;
}
void UMaterialPermuterLoadingStrategiesAsset::BuildLoadingStrategies() {
    static auto func = (UFunction*)(find_uobject("Function /Script/MaterialPermuter.MaterialPermuterLoadingStrategiesAsset.BuildLoadingStrategies"));
    struct Params_BuildLoadingStrategies {
    }; // Size: 0x0
    Params_BuildLoadingStrategies params{};
    ProcessEvent(func, &params);
}
