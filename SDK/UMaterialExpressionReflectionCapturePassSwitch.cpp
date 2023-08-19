#include "FExpressionInput.hpp"
#include "UMaterialExpression.hpp"
#include "UMaterialExpressionReflectionCapturePassSwitch.hpp"
UMaterialExpressionReflectionCapturePassSwitch* UMaterialExpressionReflectionCapturePassSwitch::StaticClass() {
    static auto res = find_uobject("Class /Script/Engine.MaterialExpressionReflectionCapturePassSwitch");
    return (UMaterialExpressionReflectionCapturePassSwitch*)res;
}
