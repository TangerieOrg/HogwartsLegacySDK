#include "EGroomInterpolationType.hpp"
#include "EHairLODSelectionType.hpp"
#include "FHairGroupInfoWithVisibility.hpp"
#include "FHairGroupsCardsSourceDescription.hpp"
#include "FHairGroupsInterpolation.hpp"
#include "FHairGroupsLOD.hpp"
#include "FHairGroupsMaterial.hpp"
#include "FHairGroupsMeshesSourceDescription.hpp"
#include "FHairGroupsPhysics.hpp"
#include "FHairGroupsRendering.hpp"
#include "FPerPlatformBool.hpp"
#include "FPerPlatformInt.hpp"
#include "UAssetUserData.hpp"
#include "UGroomAsset.hpp"
#include "UObject.hpp"
UGroomAsset* UGroomAsset::StaticClass() {
    static auto res = find_uobject("Class /Script/HairStrandsCore.GroomAsset");
    return (UGroomAsset*)res;
}
