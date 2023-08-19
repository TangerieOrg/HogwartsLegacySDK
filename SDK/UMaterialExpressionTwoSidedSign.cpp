#include "UMaterialExpression.hpp"
#include "UMaterialExpressionTwoSidedSign.hpp"
UMaterialExpressionTwoSidedSign* UMaterialExpressionTwoSidedSign::StaticClass() {
    static auto res = find_uobject("Class /Script/Engine.MaterialExpressionTwoSidedSign");
    return (UMaterialExpressionTwoSidedSign*)res;
}
