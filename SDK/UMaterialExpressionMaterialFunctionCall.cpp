#include "FMaterialParameterInfo.hpp"
#include "UMaterialExpression.hpp"
#include "UMaterialExpressionMaterialFunctionCall.hpp"
#include "UMaterialFunctionInterface.hpp"
UMaterialExpressionMaterialFunctionCall* UMaterialExpressionMaterialFunctionCall::StaticClass() {
    static auto res = find_uobject("Class /Script/Engine.MaterialExpressionMaterialFunctionCall");
    return (UMaterialExpressionMaterialFunctionCall*)res;
}
