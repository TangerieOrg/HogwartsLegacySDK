#include "FLandscapeMaterialTextureStreamingInfo.hpp"
#include "ULandscapeMaterialInstanceConstant.hpp"
#include "UMaterialInstanceConstant.hpp"
ULandscapeMaterialInstanceConstant* ULandscapeMaterialInstanceConstant::StaticClass() {
    static auto res = find_uobject("Class /Script/Landscape.LandscapeMaterialInstanceConstant");
    return (ULandscapeMaterialInstanceConstant*)res;
}
