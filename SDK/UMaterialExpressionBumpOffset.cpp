#include "FExpressionInput.hpp"
#include "UMaterialExpression.hpp"
#include "UMaterialExpressionBumpOffset.hpp"
UMaterialExpressionBumpOffset* UMaterialExpressionBumpOffset::StaticClass() {
    static auto res = find_uobject("Class /Script/Engine.MaterialExpressionBumpOffset");
    return (UMaterialExpressionBumpOffset*)res;
}
