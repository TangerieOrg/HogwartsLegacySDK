#include "FGuid.hpp"
#include "UMaterialExpression.hpp"
#include "UMaterialExpressionLandscapeVisibilityMask.hpp"
UMaterialExpressionLandscapeVisibilityMask* UMaterialExpressionLandscapeVisibilityMask::StaticClass() {
    static auto res = find_uobject("Class /Script/Landscape.MaterialExpressionLandscapeVisibilityMask");
    return (UMaterialExpressionLandscapeVisibilityMask*)res;
}
