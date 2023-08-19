#include "FExpressionInput.hpp"
#include "UMaterialExpression.hpp"
#include "UMaterialExpressionOneMinus.hpp"
UMaterialExpressionOneMinus* UMaterialExpressionOneMinus::StaticClass() {
    static auto res = find_uobject("Class /Script/Engine.MaterialExpressionOneMinus");
    return (UMaterialExpressionOneMinus*)res;
}
