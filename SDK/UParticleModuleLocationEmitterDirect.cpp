#include "UParticleModuleLocationBase.hpp"
#include "UParticleModuleLocationEmitterDirect.hpp"
UParticleModuleLocationEmitterDirect* UParticleModuleLocationEmitterDirect::StaticClass() {
    static auto res = find_uobject("Class /Script/Engine.ParticleModuleLocationEmitterDirect");
    return (UParticleModuleLocationEmitterDirect*)res;
}
