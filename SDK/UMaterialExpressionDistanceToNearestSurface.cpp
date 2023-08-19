#include "FExpressionInput.hpp"
#include "UMaterialExpression.hpp"
#include "UMaterialExpressionDistanceToNearestSurface.hpp"
UMaterialExpressionDistanceToNearestSurface* UMaterialExpressionDistanceToNearestSurface::StaticClass() {
    static auto res = find_uobject("Class /Script/Engine.MaterialExpressionDistanceToNearestSurface");
    return (UMaterialExpressionDistanceToNearestSurface*)res;
}
