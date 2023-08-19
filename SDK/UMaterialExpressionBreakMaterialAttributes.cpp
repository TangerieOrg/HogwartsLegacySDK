#include "FMaterialAttributesInput.hpp"
#include "UMaterialExpression.hpp"
#include "UMaterialExpressionBreakMaterialAttributes.hpp"
UMaterialExpressionBreakMaterialAttributes* UMaterialExpressionBreakMaterialAttributes::StaticClass() {
    static auto res = find_uobject("Class /Script/Engine.MaterialExpressionBreakMaterialAttributes");
    return (UMaterialExpressionBreakMaterialAttributes*)res;
}
