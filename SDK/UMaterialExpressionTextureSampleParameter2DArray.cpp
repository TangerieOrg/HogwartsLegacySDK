#include "UMaterialExpressionTextureSampleParameter.hpp"
#include "UMaterialExpressionTextureSampleParameter2DArray.hpp"
UMaterialExpressionTextureSampleParameter2DArray* UMaterialExpressionTextureSampleParameter2DArray::StaticClass() {
    static auto res = find_uobject("Class /Script/Engine.MaterialExpressionTextureSampleParameter2DArray");
    return (UMaterialExpressionTextureSampleParameter2DArray*)res;
}
