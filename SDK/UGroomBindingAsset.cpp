#include "EGroomBindingMeshType.hpp"
#include "FGoomBindingGroupInfo.hpp"
#include "UGeometryCache.hpp"
#include "UGroomAsset.hpp"
#include "UGroomBindingAsset.hpp"
#include "UObject.hpp"
#include "USkeletalMesh.hpp"
UGroomBindingAsset* UGroomBindingAsset::StaticClass() {
    static auto res = find_uobject("Class /Script/HairStrandsCore.GroomBindingAsset");
    return (UGroomBindingAsset*)res;
}
