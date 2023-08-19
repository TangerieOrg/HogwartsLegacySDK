#include "UMaterialExpression.hpp"
#include "UMaterialExpressionVertexColor.hpp"
UMaterialExpressionVertexColor* UMaterialExpressionVertexColor::StaticClass() {
    static auto res = find_uobject("Class /Script/Engine.MaterialExpressionVertexColor");
    return (UMaterialExpressionVertexColor*)res;
}
