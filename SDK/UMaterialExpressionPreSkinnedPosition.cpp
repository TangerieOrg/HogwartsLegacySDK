#include "UMaterialExpression.hpp"
#include "UMaterialExpressionPreSkinnedPosition.hpp"
UMaterialExpressionPreSkinnedPosition* UMaterialExpressionPreSkinnedPosition::StaticClass() {
    static auto res = find_uobject("Class /Script/Engine.MaterialExpressionPreSkinnedPosition");
    return (UMaterialExpressionPreSkinnedPosition*)res;
}
