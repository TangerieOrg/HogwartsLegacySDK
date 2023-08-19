#include "UMaterialExpressionParameter.hpp"
#include "UMaterialExpressionStaticComponentMaskParameter.hpp"
UMaterialExpressionStaticComponentMaskParameter* UMaterialExpressionStaticComponentMaskParameter::StaticClass() {
    static auto res = find_uobject("Class /Script/Engine.MaterialExpressionStaticComponentMaskParameter");
    return (UMaterialExpressionStaticComponentMaskParameter*)res;
}
