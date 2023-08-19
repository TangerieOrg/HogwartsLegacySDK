#include "FExpressionInput.hpp"
#include "UMaterialExpression.hpp"
#include "UMaterialExpressionArctangent.hpp"
UMaterialExpressionArctangent* UMaterialExpressionArctangent::StaticClass() {
    static auto res = find_uobject("Class /Script/Engine.MaterialExpressionArctangent");
    return (UMaterialExpressionArctangent*)res;
}
