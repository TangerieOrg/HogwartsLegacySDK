#include "FLiveMaterialsLoadedObjects.hpp"
#include "FLiveMaterialsPendingLoads.hpp"
#include "FMaterialPermuterLoadingBundleList.hpp"
#include "FMaterialPermuterLoadingTriggers.hpp"
#include "FMaterialPermuterMaterialAssetIndex.hpp"
#include "UMaterialPermuterLiveMaterials.hpp"
#include "UObject.hpp"
UMaterialPermuterLiveMaterials* UMaterialPermuterLiveMaterials::StaticClass() {
    static auto res = find_uobject("Class /Script/MaterialPermuter.MaterialPermuterLiveMaterials");
    return (UMaterialPermuterLiveMaterials*)res;
}
