#include "UMaterialExpressionParameter.hpp"
#include "UMaterialExpressionScalarParameter.hpp"
UMaterialExpressionScalarParameter* UMaterialExpressionScalarParameter::StaticClass() {
    static auto res = find_uobject("Class /Script/Engine.MaterialExpressionScalarParameter");
    return (UMaterialExpressionScalarParameter*)res;
}
