#include "UMaterialExpressionStaticBoolParameter.hpp"
#include "UMaterialExpressionStaticSwitchParameter.hpp"
UMaterialExpressionStaticSwitchParameter* UMaterialExpressionStaticSwitchParameter::StaticClass() {
    static auto res = find_uobject("Class /Script/Engine.MaterialExpressionStaticSwitchParameter");
    return (UMaterialExpressionStaticSwitchParameter*)res;
}
