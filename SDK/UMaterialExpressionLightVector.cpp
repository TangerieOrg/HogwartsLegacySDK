#include "UMaterialExpression.hpp"
#include "UMaterialExpressionLightVector.hpp"
UMaterialExpressionLightVector* UMaterialExpressionLightVector::StaticClass() {
    static auto res = find_uobject("Class /Script/Engine.MaterialExpressionLightVector");
    return (UMaterialExpressionLightVector*)res;
}
