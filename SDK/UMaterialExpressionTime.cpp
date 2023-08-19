#include "UMaterialExpression.hpp"
#include "UMaterialExpressionTime.hpp"
UMaterialExpressionTime* UMaterialExpressionTime::StaticClass() {
    static auto res = find_uobject("Class /Script/Engine.MaterialExpressionTime");
    return (UMaterialExpressionTime*)res;
}
