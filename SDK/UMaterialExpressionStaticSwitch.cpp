#include "FExpressionInput.hpp"
#include "UMaterialExpression.hpp"
#include "UMaterialExpressionStaticSwitch.hpp"
UMaterialExpressionStaticSwitch* UMaterialExpressionStaticSwitch::StaticClass() {
    static auto res = find_uobject("Class /Script/Engine.MaterialExpressionStaticSwitch");
    return (UMaterialExpressionStaticSwitch*)res;
}
