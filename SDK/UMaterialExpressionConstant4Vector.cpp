#include "FLinearColor.hpp"
#include "UMaterialExpression.hpp"
#include "UMaterialExpressionConstant4Vector.hpp"
UMaterialExpressionConstant4Vector* UMaterialExpressionConstant4Vector::StaticClass() {
    static auto res = find_uobject("Class /Script/Engine.MaterialExpressionConstant4Vector");
    return (UMaterialExpressionConstant4Vector*)res;
}
