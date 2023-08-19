#include "UMaterialExpression.hpp"
#include "UMaterialExpressionViewSize.hpp"
UMaterialExpressionViewSize* UMaterialExpressionViewSize::StaticClass() {
    static auto res = find_uobject("Class /Script/Engine.MaterialExpressionViewSize");
    return (UMaterialExpressionViewSize*)res;
}
