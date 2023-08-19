#include "UMaterialExpression.hpp"
#include "UMaterialExpressionAtmosphericLightVector.hpp"
UMaterialExpressionAtmosphericLightVector* UMaterialExpressionAtmosphericLightVector::StaticClass() {
    static auto res = find_uobject("Class /Script/Engine.MaterialExpressionAtmosphericLightVector");
    return (UMaterialExpressionAtmosphericLightVector*)res;
}
