#include "FExpressionInput.hpp"
#include "UMaterialExpression.hpp"
#include "UMaterialExpressionMakeMaterialAttributes.hpp"
UMaterialExpressionMakeMaterialAttributes* UMaterialExpressionMakeMaterialAttributes::StaticClass() {
    static auto res = find_uobject("Class /Script/Engine.MaterialExpressionMakeMaterialAttributes");
    return (UMaterialExpressionMakeMaterialAttributes*)res;
}
