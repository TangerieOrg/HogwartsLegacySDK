#include "UParticleModule.hpp"
#include "UParticleModuleLocationBase.hpp"
UParticleModuleLocationBase* UParticleModuleLocationBase::StaticClass() {
    static auto res = find_uobject("Class /Script/Engine.ParticleModuleLocationBase");
    return (UParticleModuleLocationBase*)res;
}
