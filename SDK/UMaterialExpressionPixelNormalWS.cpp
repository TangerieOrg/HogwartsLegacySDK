#include "UMaterialExpression.hpp"
#include "UMaterialExpressionPixelNormalWS.hpp"
UMaterialExpressionPixelNormalWS* UMaterialExpressionPixelNormalWS::StaticClass() {
    static auto res = find_uobject("Class /Script/Engine.MaterialExpressionPixelNormalWS");
    return (UMaterialExpressionPixelNormalWS*)res;
}
