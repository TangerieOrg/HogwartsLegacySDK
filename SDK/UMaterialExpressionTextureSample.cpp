#include "FExpressionInput.hpp"
#include "UMaterialExpressionTextureBase.hpp"
#include "UMaterialExpressionTextureSample.hpp"
UMaterialExpressionTextureSample* UMaterialExpressionTextureSample::StaticClass() {
    static auto res = find_uobject("Class /Script/Engine.MaterialExpressionTextureSample");
    return (UMaterialExpressionTextureSample*)res;
}
