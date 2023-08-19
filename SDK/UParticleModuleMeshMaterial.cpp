#include "UMaterialInterface.hpp"
#include "UParticleModuleMaterialBase.hpp"
#include "UParticleModuleMeshMaterial.hpp"
UParticleModuleMeshMaterial* UParticleModuleMeshMaterial::StaticClass() {
    static auto res = find_uobject("Class /Script/Engine.ParticleModuleMeshMaterial");
    return (UParticleModuleMeshMaterial*)res;
}
