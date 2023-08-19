#include "FExpressionInput.hpp"
#include "UMaterialExpression.hpp"
#include "UMaterialExpressionPower.hpp"
UMaterialExpressionPower* UMaterialExpressionPower::StaticClass() {
    static auto res = find_uobject("Class /Script/Engine.MaterialExpressionPower");
    return (UMaterialExpressionPower*)res;
}
