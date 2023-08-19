#include "FExpressionInput.hpp"
#include "UMaterialExpression.hpp"
#include "UMaterialExpressionAdd.hpp"
UMaterialExpressionAdd* UMaterialExpressionAdd::StaticClass() {
    static auto res = find_uobject("Class /Script/Engine.MaterialExpressionAdd");
    return (UMaterialExpressionAdd*)res;
}
