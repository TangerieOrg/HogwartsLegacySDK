#include "FGuid.hpp"
#include "UMaterialExpression.hpp"
#include "UMaterialExpressionLandscapeLayerSample.hpp"
UMaterialExpressionLandscapeLayerSample* UMaterialExpressionLandscapeLayerSample::StaticClass() {
    static auto res = find_uobject("Class /Script/Landscape.MaterialExpressionLandscapeLayerSample");
    return (UMaterialExpressionLandscapeLayerSample*)res;
}
