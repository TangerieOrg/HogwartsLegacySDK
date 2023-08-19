#include "FExpressionInput.hpp"
#include "UMaterialExpression.hpp"
#include "UMaterialExpressionVirtualTextureFeatureSwitch.hpp"
UMaterialExpressionVirtualTextureFeatureSwitch* UMaterialExpressionVirtualTextureFeatureSwitch::StaticClass() {
    static auto res = find_uobject("Class /Script/Engine.MaterialExpressionVirtualTextureFeatureSwitch");
    return (UMaterialExpressionVirtualTextureFeatureSwitch*)res;
}
