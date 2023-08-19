#include "FExpressionInput.hpp"
#include "UMaterialExpression.hpp"
#include "UMaterialExpressionArctangent2.hpp"
UMaterialExpressionArctangent2* UMaterialExpressionArctangent2::StaticClass() {
    static auto res = find_uobject("Class /Script/Engine.MaterialExpressionArctangent2");
    return (UMaterialExpressionArctangent2*)res;
}
