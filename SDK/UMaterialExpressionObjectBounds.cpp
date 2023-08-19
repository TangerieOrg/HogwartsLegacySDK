#include "UMaterialExpression.hpp"
#include "UMaterialExpressionObjectBounds.hpp"
UMaterialExpressionObjectBounds* UMaterialExpressionObjectBounds::StaticClass() {
    static auto res = find_uobject("Class /Script/Engine.MaterialExpressionObjectBounds");
    return (UMaterialExpressionObjectBounds*)res;
}
