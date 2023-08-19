#include "FExpressionInput.hpp"
#include "UMaterialExpression.hpp"
#include "UMaterialExpressionAbs.hpp"
UMaterialExpressionAbs* UMaterialExpressionAbs::StaticClass() {
    static auto res = find_uobject("Class /Script/Engine.MaterialExpressionAbs");
    return (UMaterialExpressionAbs*)res;
}
