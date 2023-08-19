#include "UParticleModule.hpp"
#include "UParticleModuleVelocityBase.hpp"
UParticleModuleVelocityBase* UParticleModuleVelocityBase::StaticClass() {
    static auto res = find_uobject("Class /Script/Engine.ParticleModuleVelocityBase");
    return (UParticleModuleVelocityBase*)res;
}
