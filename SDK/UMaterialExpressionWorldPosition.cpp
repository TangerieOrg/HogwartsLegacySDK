#include "EWorldPositionIncludedOffsets.hpp"
#include "UMaterialExpression.hpp"
#include "UMaterialExpressionWorldPosition.hpp"
UMaterialExpressionWorldPosition* UMaterialExpressionWorldPosition::StaticClass() {
    static auto res = find_uobject("Class /Script/Engine.MaterialExpressionWorldPosition");
    return (UMaterialExpressionWorldPosition*)res;
}
