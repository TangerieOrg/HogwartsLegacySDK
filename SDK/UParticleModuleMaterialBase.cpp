#include "UParticleModule.hpp"
#include "UParticleModuleMaterialBase.hpp"
UParticleModuleMaterialBase* UParticleModuleMaterialBase::StaticClass() {
    static auto res = find_uobject("Class /Script/Engine.ParticleModuleMaterialBase");
    return (UParticleModuleMaterialBase*)res;
}
