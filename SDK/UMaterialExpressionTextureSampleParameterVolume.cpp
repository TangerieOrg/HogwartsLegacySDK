#include "UMaterialExpressionTextureSampleParameter.hpp"
#include "UMaterialExpressionTextureSampleParameterVolume.hpp"
UMaterialExpressionTextureSampleParameterVolume* UMaterialExpressionTextureSampleParameterVolume::StaticClass() {
    static auto res = find_uobject("Class /Script/Engine.MaterialExpressionTextureSampleParameterVolume");
    return (UMaterialExpressionTextureSampleParameterVolume*)res;
}
