#include "UMaterialExpressionTextureSampleParameter.hpp"
#include "UMaterialExpressionTextureSampleParameterCube.hpp"
UMaterialExpressionTextureSampleParameterCube* UMaterialExpressionTextureSampleParameterCube::StaticClass() {
    static auto res = find_uobject("Class /Script/Engine.MaterialExpressionTextureSampleParameterCube");
    return (UMaterialExpressionTextureSampleParameterCube*)res;
}
