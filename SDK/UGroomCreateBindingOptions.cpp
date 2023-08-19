#include "EGroomBindingMeshType.hpp"
#include "UGeometryCache.hpp"
#include "UGroomCreateBindingOptions.hpp"
#include "UObject.hpp"
#include "USkeletalMesh.hpp"
UGroomCreateBindingOptions* UGroomCreateBindingOptions::StaticClass() {
    static auto res = find_uobject("Class /Script/HairStrandsCore.GroomCreateBindingOptions");
    return (UGroomCreateBindingOptions*)res;
}
