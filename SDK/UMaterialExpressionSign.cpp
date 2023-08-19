#include "FExpressionInput.hpp"
#include "UMaterialExpression.hpp"
#include "UMaterialExpressionSign.hpp"
UMaterialExpressionSign* UMaterialExpressionSign::StaticClass() {
    static auto res = find_uobject("Class /Script/Engine.MaterialExpressionSign");
    return (UMaterialExpressionSign*)res;
}
