#include "EClampMode.hpp"
#include "FExpressionInput.hpp"
#include "UMaterialExpression.hpp"
#include "UMaterialExpressionClamp.hpp"
UMaterialExpressionClamp* UMaterialExpressionClamp::StaticClass() {
    static auto res = find_uobject("Class /Script/Engine.MaterialExpressionClamp");
    return (UMaterialExpressionClamp*)res;
}
