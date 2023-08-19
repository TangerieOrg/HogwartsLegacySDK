#include "FExpressionInput.hpp"
#include "UMaterialExpression.hpp"
#include "UMaterialExpressionPreviousFrameSwitch.hpp"
UMaterialExpressionPreviousFrameSwitch* UMaterialExpressionPreviousFrameSwitch::StaticClass() {
    static auto res = find_uobject("Class /Script/Engine.MaterialExpressionPreviousFrameSwitch");
    return (UMaterialExpressionPreviousFrameSwitch*)res;
}
