#include "FGuid.hpp"
#include "FLayerBlendInput.hpp"
#include "UMaterialExpression.hpp"
#include "UMaterialExpressionLandscapeLayerBlend.hpp"
UMaterialExpressionLandscapeLayerBlend* UMaterialExpressionLandscapeLayerBlend::StaticClass() {
    static auto res = find_uobject("Class /Script/Landscape.MaterialExpressionLandscapeLayerBlend");
    return (UMaterialExpressionLandscapeLayerBlend*)res;
}
