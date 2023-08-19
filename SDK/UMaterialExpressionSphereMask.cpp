#include "FExpressionInput.hpp"
#include "UMaterialExpression.hpp"
#include "UMaterialExpressionSphereMask.hpp"
UMaterialExpressionSphereMask* UMaterialExpressionSphereMask::StaticClass() {
    static auto res = find_uobject("Class /Script/Engine.MaterialExpressionSphereMask");
    return (UMaterialExpressionSphereMask*)res;
}
