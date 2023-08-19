#include "FGuid.hpp"
#include "FMaterialAttributesInput.hpp"
#include "UMaterialExpression.hpp"
#include "UMaterialExpressionGetMaterialAttributes.hpp"
UMaterialExpressionGetMaterialAttributes* UMaterialExpressionGetMaterialAttributes::StaticClass() {
    static auto res = find_uobject("Class /Script/Engine.MaterialExpressionGetMaterialAttributes");
    return (UMaterialExpressionGetMaterialAttributes*)res;
}
