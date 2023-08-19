#include "FExpressionInput.hpp"
#include "UMaterialExpression.hpp"
#include "UMaterialExpressionShaderStageSwitch.hpp"
UMaterialExpressionShaderStageSwitch* UMaterialExpressionShaderStageSwitch::StaticClass() {
    static auto res = find_uobject("Class /Script/Engine.MaterialExpressionShaderStageSwitch");
    return (UMaterialExpressionShaderStageSwitch*)res;
}
