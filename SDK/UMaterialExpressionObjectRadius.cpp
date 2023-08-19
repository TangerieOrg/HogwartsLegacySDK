#include "UMaterialExpression.hpp"
#include "UMaterialExpressionObjectRadius.hpp"
UMaterialExpressionObjectRadius* UMaterialExpressionObjectRadius::StaticClass() {
    static auto res = find_uobject("Class /Script/Engine.MaterialExpressionObjectRadius");
    return (UMaterialExpressionObjectRadius*)res;
}
