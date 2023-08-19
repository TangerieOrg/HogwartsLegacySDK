#include "UMaterialExpressionAORIndex.hpp"
#include "UMaterialExpressionScalarArrayElement.hpp"
UMaterialExpressionScalarArrayElement* UMaterialExpressionScalarArrayElement::StaticClass() {
    static auto res = find_uobject("Class /Script/Engine.MaterialExpressionScalarArrayElement");
    return (UMaterialExpressionScalarArrayElement*)res;
}
