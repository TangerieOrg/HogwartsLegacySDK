#include "FExpressionInput.hpp"
#include "FGuid.hpp"
#include "UMaterialExpression.hpp"
#include "UMaterialExpressionSetMaterialAttributes.hpp"
UMaterialExpressionSetMaterialAttributes* UMaterialExpressionSetMaterialAttributes::StaticClass() {
    static auto res = find_uobject("Class /Script/Engine.MaterialExpressionSetMaterialAttributes");
    return (UMaterialExpressionSetMaterialAttributes*)res;
}
