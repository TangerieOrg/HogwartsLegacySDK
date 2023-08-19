#include "FMaterialPermuterCopyParameterOverrides.hpp"
#include "FMaterialPermuterKeyCache.hpp"
#include "UDataAsset.hpp"
#include "UMaterialPermuterInstanceHandCraftedLibrary.hpp"
#include "UMaterialPermuterLibrary.hpp"
#include "UMaterialPermuterLoadingStrategiesAsset.hpp"
UMaterialPermuterLibrary* UMaterialPermuterLibrary::StaticClass() {
    static auto res = find_uobject("Class /Script/MaterialPermuter.MaterialPermuterLibrary");
    return (UMaterialPermuterLibrary*)res;
}
