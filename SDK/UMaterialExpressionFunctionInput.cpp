#include "EFunctionInputType.hpp"
#include "FExpressionInput.hpp"
#include "FGuid.hpp"
#include "FVector4.hpp"
#include "UMaterialExpression.hpp"
#include "UMaterialExpressionFunctionInput.hpp"
UMaterialExpressionFunctionInput* UMaterialExpressionFunctionInput::StaticClass() {
    static auto res = find_uobject("Class /Script/Engine.MaterialExpressionFunctionInput");
    return (UMaterialExpressionFunctionInput*)res;
}
