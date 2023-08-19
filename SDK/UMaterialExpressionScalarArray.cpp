#include "UMaterialExpression.hpp"
#include "UMaterialExpressionScalarArray.hpp"
UMaterialExpressionScalarArray* UMaterialExpressionScalarArray::StaticClass() {
    static auto res = find_uobject("Class /Script/Engine.MaterialExpressionScalarArray");
    return (UMaterialExpressionScalarArray*)res;
}
