#include "FExpressionInput.hpp"
#include "UMaterialExpression.hpp"
#include "UMaterialExpressionArctangentFast.hpp"
UMaterialExpressionArctangentFast* UMaterialExpressionArctangentFast::StaticClass() {
    static auto res = find_uobject("Class /Script/Engine.MaterialExpressionArctangentFast");
    return (UMaterialExpressionArctangentFast*)res;
}
