#include "FExpressionInput.hpp"
#include "FGuid.hpp"
#include "FVector.hpp"
#include "UMaterialExpression.hpp"
#include "UMaterialExpressionLandscapeLayerWeight.hpp"
UMaterialExpressionLandscapeLayerWeight* UMaterialExpressionLandscapeLayerWeight::StaticClass() {
    static auto res = find_uobject("Class /Script/Landscape.MaterialExpressionLandscapeLayerWeight");
    return (UMaterialExpressionLandscapeLayerWeight*)res;
}
