#include "FExpressionInput.hpp"
#include "FLinearColor.hpp"
#include "UMaterialExpression.hpp"
#include "UMaterialExpressionDesaturation.hpp"
UMaterialExpressionDesaturation* UMaterialExpressionDesaturation::StaticClass() {
    static auto res = find_uobject("Class /Script/Engine.MaterialExpressionDesaturation");
    return (UMaterialExpressionDesaturation*)res;
}
