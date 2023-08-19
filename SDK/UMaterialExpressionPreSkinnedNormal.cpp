#include "UMaterialExpression.hpp"
#include "UMaterialExpressionPreSkinnedNormal.hpp"
UMaterialExpressionPreSkinnedNormal* UMaterialExpressionPreSkinnedNormal::StaticClass() {
    static auto res = find_uobject("Class /Script/Engine.MaterialExpressionPreSkinnedNormal");
    return (UMaterialExpressionPreSkinnedNormal*)res;
}
