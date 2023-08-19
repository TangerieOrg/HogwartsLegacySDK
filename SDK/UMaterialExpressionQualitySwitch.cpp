#include "FExpressionInput.hpp"
#include "UMaterialExpression.hpp"
#include "UMaterialExpressionQualitySwitch.hpp"
UMaterialExpressionQualitySwitch* UMaterialExpressionQualitySwitch::StaticClass() {
    static auto res = find_uobject("Class /Script/Engine.MaterialExpressionQualitySwitch");
    return (UMaterialExpressionQualitySwitch*)res;
}
