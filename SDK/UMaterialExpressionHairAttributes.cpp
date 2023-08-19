#include "UMaterialExpression.hpp"
#include "UMaterialExpressionHairAttributes.hpp"
UMaterialExpressionHairAttributes* UMaterialExpressionHairAttributes::StaticClass() {
    static auto res = find_uobject("Class /Script/Engine.MaterialExpressionHairAttributes");
    return (UMaterialExpressionHairAttributes*)res;
}
