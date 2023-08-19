#include "UMaterialExpression.hpp"
#include "UMaterialExpressionSkinningVertexOffsets.hpp"
UMaterialExpressionSkinningVertexOffsets* UMaterialExpressionSkinningVertexOffsets::StaticClass() {
    static auto res = find_uobject("Class /Script/Engine.MaterialExpressionSkinningVertexOffsets");
    return (UMaterialExpressionSkinningVertexOffsets*)res;
}
