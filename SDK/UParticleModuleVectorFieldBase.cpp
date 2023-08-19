#include "UParticleModule.hpp"
#include "UParticleModuleVectorFieldBase.hpp"
UParticleModuleVectorFieldBase* UParticleModuleVectorFieldBase::StaticClass() {
    static auto res = find_uobject("Class /Script/Engine.ParticleModuleVectorFieldBase");
    return (UParticleModuleVectorFieldBase*)res;
}
