#include "FExpressionInput.hpp"
#include "UMaterialExpression.hpp"
#include "UMaterialExpressionAtmosphericFogColor.hpp"
UMaterialExpressionAtmosphericFogColor* UMaterialExpressionAtmosphericFogColor::StaticClass() {
    static auto res = find_uobject("Class /Script/Engine.MaterialExpressionAtmosphericFogColor");
    return (UMaterialExpressionAtmosphericFogColor*)res;
}
