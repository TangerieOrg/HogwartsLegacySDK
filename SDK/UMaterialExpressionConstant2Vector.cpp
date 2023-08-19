#include "UMaterialExpression.hpp"
#include "UMaterialExpressionConstant2Vector.hpp"
UMaterialExpressionConstant2Vector* UMaterialExpressionConstant2Vector::StaticClass() {
    static auto res = find_uobject("Class /Script/Engine.MaterialExpressionConstant2Vector");
    return (UMaterialExpressionConstant2Vector*)res;
}
