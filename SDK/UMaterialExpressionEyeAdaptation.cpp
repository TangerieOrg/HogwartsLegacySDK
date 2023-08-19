#include "UMaterialExpression.hpp"
#include "UMaterialExpressionEyeAdaptation.hpp"
UMaterialExpressionEyeAdaptation* UMaterialExpressionEyeAdaptation::StaticClass() {
    static auto res = find_uobject("Class /Script/Engine.MaterialExpressionEyeAdaptation");
    return (UMaterialExpressionEyeAdaptation*)res;
}
