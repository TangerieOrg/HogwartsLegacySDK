#include "UMaterialExpression.hpp"
#include "UMaterialExpressionProbeValueAtCamera.hpp"
UMaterialExpressionProbeValueAtCamera* UMaterialExpressionProbeValueAtCamera::StaticClass() {
    static auto res = find_uobject("Class /Script/Engine.MaterialExpressionProbeValueAtCamera");
    return (UMaterialExpressionProbeValueAtCamera*)res;
}
