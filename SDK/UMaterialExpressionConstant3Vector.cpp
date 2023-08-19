#include "FLinearColor.hpp"
#include "UMaterialExpression.hpp"
#include "UMaterialExpressionConstant3Vector.hpp"
UMaterialExpressionConstant3Vector* UMaterialExpressionConstant3Vector::StaticClass() {
    static auto res = find_uobject("Class /Script/Engine.MaterialExpressionConstant3Vector");
    return (UMaterialExpressionConstant3Vector*)res;
}
