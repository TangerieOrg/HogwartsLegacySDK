#include "EMaterialPositionTransformSource.hpp"
#include "FExpressionInput.hpp"
#include "UMaterialExpression.hpp"
#include "UMaterialExpressionTransformPosition.hpp"
UMaterialExpressionTransformPosition* UMaterialExpressionTransformPosition::StaticClass() {
    static auto res = find_uobject("Class /Script/Engine.MaterialExpressionTransformPosition");
    return (UMaterialExpressionTransformPosition*)res;
}
