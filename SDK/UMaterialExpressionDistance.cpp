#include "FExpressionInput.hpp"
#include "UMaterialExpression.hpp"
#include "UMaterialExpressionDistance.hpp"
UMaterialExpressionDistance* UMaterialExpressionDistance::StaticClass() {
    static auto res = find_uobject("Class /Script/Engine.MaterialExpressionDistance");
    return (UMaterialExpressionDistance*)res;
}
