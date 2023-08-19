#include "UMaterialExpressionTextureArraySample.hpp"
#include "UMaterialExpressionTextureSample.hpp"
UMaterialExpressionTextureArraySample* UMaterialExpressionTextureArraySample::StaticClass() {
    static auto res = find_uobject("Class /Script/Engine.MaterialExpressionTextureArraySample");
    return (UMaterialExpressionTextureArraySample*)res;
}
