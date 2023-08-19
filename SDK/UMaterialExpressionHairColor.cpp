#include "FExpressionInput.hpp"
#include "UMaterialExpression.hpp"
#include "UMaterialExpressionHairColor.hpp"
UMaterialExpressionHairColor* UMaterialExpressionHairColor::StaticClass() {
    static auto res = find_uobject("Class /Script/Engine.MaterialExpressionHairColor");
    return (UMaterialExpressionHairColor*)res;
}
