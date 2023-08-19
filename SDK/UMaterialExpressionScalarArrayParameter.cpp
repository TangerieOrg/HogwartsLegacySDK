#include "FGuid.hpp"
#include "UMaterialExpressionScalarArray.hpp"
#include "UMaterialExpressionScalarArrayParameter.hpp"
UMaterialExpressionScalarArrayParameter* UMaterialExpressionScalarArrayParameter::StaticClass() {
    static auto res = find_uobject("Class /Script/Engine.MaterialExpressionScalarArrayParameter");
    return (UMaterialExpressionScalarArrayParameter*)res;
}
