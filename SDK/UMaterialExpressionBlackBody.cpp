#include "FExpressionInput.hpp"
#include "UMaterialExpression.hpp"
#include "UMaterialExpressionBlackBody.hpp"
UMaterialExpressionBlackBody* UMaterialExpressionBlackBody::StaticClass() {
    static auto res = find_uobject("Class /Script/Engine.MaterialExpressionBlackBody");
    return (UMaterialExpressionBlackBody*)res;
}
