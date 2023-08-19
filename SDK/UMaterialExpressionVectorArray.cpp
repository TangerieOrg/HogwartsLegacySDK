#include "FLinearColor.hpp"
#include "UMaterialExpression.hpp"
#include "UMaterialExpressionVectorArray.hpp"
UMaterialExpressionVectorArray* UMaterialExpressionVectorArray::StaticClass() {
    static auto res = find_uobject("Class /Script/Engine.MaterialExpressionVectorArray");
    return (UMaterialExpressionVectorArray*)res;
}
