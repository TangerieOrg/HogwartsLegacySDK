#include "UMaterialExpressionTextureSampleParameter2D.hpp"
#include "UMaterialExpressionTextureSampleParameterSubUV.hpp"
UMaterialExpressionTextureSampleParameterSubUV* UMaterialExpressionTextureSampleParameterSubUV::StaticClass() {
    static auto res = find_uobject("Class /Script/Engine.MaterialExpressionTextureSampleParameterSubUV");
    return (UMaterialExpressionTextureSampleParameterSubUV*)res;
}
