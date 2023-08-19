#include "FExpressionInput.hpp"
#include "UMaterialExpression.hpp"
#include "UMaterialExpressionSphericalParticleOpacity.hpp"
UMaterialExpressionSphericalParticleOpacity* UMaterialExpressionSphericalParticleOpacity::StaticClass() {
    static auto res = find_uobject("Class /Script/Engine.MaterialExpressionSphericalParticleOpacity");
    return (UMaterialExpressionSphericalParticleOpacity*)res;
}
