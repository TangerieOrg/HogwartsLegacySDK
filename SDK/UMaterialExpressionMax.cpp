#include "FExpressionInput.hpp"
#include "UMaterialExpression.hpp"
#include "UMaterialExpressionMax.hpp"
UMaterialExpressionMax* UMaterialExpressionMax::StaticClass() {
    static auto res = find_uobject("Class /Script/Engine.MaterialExpressionMax");
    return (UMaterialExpressionMax*)res;
}
