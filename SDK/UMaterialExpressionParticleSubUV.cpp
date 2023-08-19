#include "UMaterialExpressionParticleSubUV.hpp"
#include "UMaterialExpressionTextureSample.hpp"
UMaterialExpressionParticleSubUV* UMaterialExpressionParticleSubUV::StaticClass() {
    static auto res = find_uobject("Class /Script/Engine.MaterialExpressionParticleSubUV");
    return (UMaterialExpressionParticleSubUV*)res;
}
