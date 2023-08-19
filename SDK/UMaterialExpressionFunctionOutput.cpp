#include "FExpressionInput.hpp"
#include "FGuid.hpp"
#include "UMaterialExpression.hpp"
#include "UMaterialExpressionFunctionOutput.hpp"
UMaterialExpressionFunctionOutput* UMaterialExpressionFunctionOutput::StaticClass() {
    static auto res = find_uobject("Class /Script/Engine.MaterialExpressionFunctionOutput");
    return (UMaterialExpressionFunctionOutput*)res;
}
