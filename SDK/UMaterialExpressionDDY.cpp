#include "FExpressionInput.hpp"
#include "UMaterialExpression.hpp"
#include "UMaterialExpressionDDY.hpp"
UMaterialExpressionDDY* UMaterialExpressionDDY::StaticClass() {
    static auto res = find_uobject("Class /Script/Engine.MaterialExpressionDDY");
    return (UMaterialExpressionDDY*)res;
}
