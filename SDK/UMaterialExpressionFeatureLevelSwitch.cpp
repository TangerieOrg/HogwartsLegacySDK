#include "FExpressionInput.hpp"
#include "UMaterialExpression.hpp"
#include "UMaterialExpressionFeatureLevelSwitch.hpp"
UMaterialExpressionFeatureLevelSwitch* UMaterialExpressionFeatureLevelSwitch::StaticClass() {
    static auto res = find_uobject("Class /Script/Engine.MaterialExpressionFeatureLevelSwitch");
    return (UMaterialExpressionFeatureLevelSwitch*)res;
}
