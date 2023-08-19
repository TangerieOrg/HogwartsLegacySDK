#include "UMaterialExpressionTextureObjectParameter.hpp"
#include "UMaterialExpressionTextureSampleParameter.hpp"
UMaterialExpressionTextureObjectParameter* UMaterialExpressionTextureObjectParameter::StaticClass() {
    static auto res = find_uobject("Class /Script/Engine.MaterialExpressionTextureObjectParameter");
    return (UMaterialExpressionTextureObjectParameter*)res;
}
