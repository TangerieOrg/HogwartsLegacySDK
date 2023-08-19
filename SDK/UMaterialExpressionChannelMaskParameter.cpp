#include "EChannelMaskParameterColor\Type.hpp"
#include "UMaterialExpressionChannelMaskParameter.hpp"
#include "UMaterialExpressionVectorParameter.hpp"
UMaterialExpressionChannelMaskParameter* UMaterialExpressionChannelMaskParameter::StaticClass() {
    static auto res = find_uobject("Class /Script/Engine.MaterialExpressionChannelMaskParameter");
    return (UMaterialExpressionChannelMaskParameter*)res;
}
