#include "FStar.hpp"
#include "FStarCatalogEntryConvert.hpp"
#include "FStarCatalogNameIDMap.hpp"
#include "UDataAsset.hpp"
#include "UFunction.hpp"
#include "UStarCatalog.hpp"
UStarCatalog* UStarCatalog::StaticClass() {
    static auto res = find_uobject("Class /Script/NiagaraStarField.StarCatalog");
    return (UStarCatalog*)res;
}
void UStarCatalog::ForceRebuild() {
    static auto func = (UFunction*)(find_uobject("Function /Script/NiagaraStarField.StarCatalog.ForceRebuild"));
    struct Params_ForceRebuild {
    }; // Size: 0x0
    Params_ForceRebuild params{};
    ProcessEvent(func, &params);
}
