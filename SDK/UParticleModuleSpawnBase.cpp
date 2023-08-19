#include "UParticleModule.hpp"
#include "UParticleModuleSpawnBase.hpp"
UParticleModuleSpawnBase* UParticleModuleSpawnBase::StaticClass() {
    static auto res = find_uobject("Class /Script/Engine.ParticleModuleSpawnBase");
    return (UParticleModuleSpawnBase*)res;
}
