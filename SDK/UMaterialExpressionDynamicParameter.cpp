#include "FLinearColor.hpp"
#include "UMaterialExpression.hpp"
#include "UMaterialExpressionDynamicParameter.hpp"
UMaterialExpressionDynamicParameter* UMaterialExpressionDynamicParameter::StaticClass() {
    static auto res = find_uobject("Class /Script/Engine.MaterialExpressionDynamicParameter");
    return (UMaterialExpressionDynamicParameter*)res;
}
