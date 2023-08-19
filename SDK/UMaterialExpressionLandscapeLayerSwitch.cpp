#include "FExpressionInput.hpp"
#include "FGuid.hpp"
#include "UMaterialExpression.hpp"
#include "UMaterialExpressionLandscapeLayerSwitch.hpp"
UMaterialExpressionLandscapeLayerSwitch* UMaterialExpressionLandscapeLayerSwitch::StaticClass() {
    static auto res = find_uobject("Class /Script/Landscape.MaterialExpressionLandscapeLayerSwitch");
    return (UMaterialExpressionLandscapeLayerSwitch*)res;
}
