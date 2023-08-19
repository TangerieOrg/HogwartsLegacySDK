#include "UMaterialExpression.hpp"
#include "UMaterialExpressionLightmapUVs.hpp"
UMaterialExpressionLightmapUVs* UMaterialExpressionLightmapUVs::StaticClass() {
    static auto res = find_uobject("Class /Script/Engine.MaterialExpressionLightmapUVs");
    return (UMaterialExpressionLightmapUVs*)res;
}
