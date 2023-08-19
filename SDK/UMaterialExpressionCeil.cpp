#include "FExpressionInput.hpp"
#include "UMaterialExpression.hpp"
#include "UMaterialExpressionCeil.hpp"
UMaterialExpressionCeil* UMaterialExpressionCeil::StaticClass() {
    static auto res = find_uobject("Class /Script/Engine.MaterialExpressionCeil");
    return (UMaterialExpressionCeil*)res;
}
