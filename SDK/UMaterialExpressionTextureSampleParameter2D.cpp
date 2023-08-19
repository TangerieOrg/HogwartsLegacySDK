#include "UMaterialExpressionTextureSampleParameter.hpp"
#include "UMaterialExpressionTextureSampleParameter2D.hpp"
UMaterialExpressionTextureSampleParameter2D* UMaterialExpressionTextureSampleParameter2D::StaticClass() {
    static auto res = find_uobject("Class /Script/Engine.MaterialExpressionTextureSampleParameter2D");
    return (UMaterialExpressionTextureSampleParameter2D*)res;
}
