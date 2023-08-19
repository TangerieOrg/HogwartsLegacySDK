#include "UParticleModule.hpp"
#include "UParticleModuleCollisionBase.hpp"
UParticleModuleCollisionBase* UParticleModuleCollisionBase::StaticClass() {
    static auto res = find_uobject("Class /Script/Engine.ParticleModuleCollisionBase");
    return (UParticleModuleCollisionBase*)res;
}
