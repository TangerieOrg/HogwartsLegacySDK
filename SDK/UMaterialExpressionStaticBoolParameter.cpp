#include "UMaterialExpressionParameter.hpp"
#include "UMaterialExpressionStaticBoolParameter.hpp"
UMaterialExpressionStaticBoolParameter* UMaterialExpressionStaticBoolParameter::StaticClass() {
    static auto res = find_uobject("Class /Script/Engine.MaterialExpressionStaticBoolParameter");
    return (UMaterialExpressionStaticBoolParameter*)res;
}
