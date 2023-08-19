#include "FExpressionInput.hpp"
#include "UMaterialExpression.hpp"
#include "UMaterialExpressionTangent.hpp"
UMaterialExpressionTangent* UMaterialExpressionTangent::StaticClass() {
    static auto res = find_uobject("Class /Script/Engine.MaterialExpressionTangent");
    return (UMaterialExpressionTangent*)res;
}
