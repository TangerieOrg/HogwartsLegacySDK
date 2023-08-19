#include "EStrandsTexturesMeshType.hpp"
#include "EStrandsTexturesTraceType.hpp"
#include "UGroomCreateStrandsTexturesOptions.hpp"
#include "UObject.hpp"
#include "USkeletalMesh.hpp"
#include "UStaticMesh.hpp"
UGroomCreateStrandsTexturesOptions* UGroomCreateStrandsTexturesOptions::StaticClass() {
    static auto res = find_uobject("Class /Script/HairStrandsCore.GroomCreateStrandsTexturesOptions");
    return (UGroomCreateStrandsTexturesOptions*)res;
}
