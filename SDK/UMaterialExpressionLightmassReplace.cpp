#include "FExpressionInput.hpp"
#include "UMaterialExpression.hpp"
#include "UMaterialExpressionLightmassReplace.hpp"
UMaterialExpressionLightmassReplace* UMaterialExpressionLightmassReplace::StaticClass() {
    static auto res = find_uobject("Class /Script/Engine.MaterialExpressionLightmassReplace");
    return (UMaterialExpressionLightmassReplace*)res;
}
