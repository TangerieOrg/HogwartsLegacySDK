#include "FLinearColor.hpp"
#include "UMaterialExpression.hpp"
#include "UMaterialExpressionComment.hpp"
UMaterialExpressionComment* UMaterialExpressionComment::StaticClass() {
    static auto res = find_uobject("Class /Script/Engine.MaterialExpressionComment");
    return (UMaterialExpressionComment*)res;
}
