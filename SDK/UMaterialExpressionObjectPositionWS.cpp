#include "UMaterialExpression.hpp"
#include "UMaterialExpressionObjectPositionWS.hpp"
UMaterialExpressionObjectPositionWS* UMaterialExpressionObjectPositionWS::StaticClass() {
    static auto res = find_uobject("Class /Script/Engine.MaterialExpressionObjectPositionWS");
    return (UMaterialExpressionObjectPositionWS*)res;
}
