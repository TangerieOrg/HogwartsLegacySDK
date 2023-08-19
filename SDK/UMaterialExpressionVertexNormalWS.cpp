#include "UMaterialExpression.hpp"
#include "UMaterialExpressionVertexNormalWS.hpp"
UMaterialExpressionVertexNormalWS* UMaterialExpressionVertexNormalWS::StaticClass() {
    static auto res = find_uobject("Class /Script/Engine.MaterialExpressionVertexNormalWS");
    return (UMaterialExpressionVertexNormalWS*)res;
}
