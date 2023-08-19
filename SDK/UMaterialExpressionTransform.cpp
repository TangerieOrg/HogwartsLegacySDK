#include "EMaterialVectorCoordTransform.hpp"
#include "EMaterialVectorCoordTransformSource.hpp"
#include "FExpressionInput.hpp"
#include "UMaterialExpression.hpp"
#include "UMaterialExpressionTransform.hpp"
UMaterialExpressionTransform* UMaterialExpressionTransform::StaticClass() {
    static auto res = find_uobject("Class /Script/Engine.MaterialExpressionTransform");
    return (UMaterialExpressionTransform*)res;
}
