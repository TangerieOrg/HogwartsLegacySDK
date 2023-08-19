#include "FExpressionInput.hpp"
#include "UMaterialExpression.hpp"
#include "UMaterialExpressionPerInstanceCustomData.hpp"
UMaterialExpressionPerInstanceCustomData* UMaterialExpressionPerInstanceCustomData::StaticClass() {
    static auto res = find_uobject("Class /Script/Engine.MaterialExpressionPerInstanceCustomData");
    return (UMaterialExpressionPerInstanceCustomData*)res;
}
