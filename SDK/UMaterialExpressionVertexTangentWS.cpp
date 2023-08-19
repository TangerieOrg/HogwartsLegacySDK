#include "UMaterialExpression.hpp"
#include "UMaterialExpressionVertexTangentWS.hpp"
UMaterialExpressionVertexTangentWS* UMaterialExpressionVertexTangentWS::StaticClass() {
    static auto res = find_uobject("Class /Script/Engine.MaterialExpressionVertexTangentWS");
    return (UMaterialExpressionVertexTangentWS*)res;
}
