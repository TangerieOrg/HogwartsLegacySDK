#include "UMaterialExpression.hpp"
#include "UMaterialExpressionPreSkinnedLocalBounds.hpp"
UMaterialExpressionPreSkinnedLocalBounds* UMaterialExpressionPreSkinnedLocalBounds::StaticClass() {
    static auto res = find_uobject("Class /Script/Engine.MaterialExpressionPreSkinnedLocalBounds");
    return (UMaterialExpressionPreSkinnedLocalBounds*)res;
}
