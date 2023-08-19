#include "FExpressionInput.hpp"
#include "UMaterialExpression.hpp"
#include "UMaterialExpressionSubtract.hpp"
UMaterialExpressionSubtract* UMaterialExpressionSubtract::StaticClass() {
    static auto res = find_uobject("Class /Script/Engine.MaterialExpressionSubtract");
    return (UMaterialExpressionSubtract*)res;
}
