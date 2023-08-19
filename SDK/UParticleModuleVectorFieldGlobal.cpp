#include "UParticleModuleVectorFieldBase.hpp"
#include "UParticleModuleVectorFieldGlobal.hpp"
UParticleModuleVectorFieldGlobal* UParticleModuleVectorFieldGlobal::StaticClass() {
    static auto res = find_uobject("Class /Script/Engine.ParticleModuleVectorFieldGlobal");
    return (UParticleModuleVectorFieldGlobal*)res;
}
