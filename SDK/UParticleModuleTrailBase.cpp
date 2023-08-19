#include "UParticleModule.hpp"
#include "UParticleModuleTrailBase.hpp"
UParticleModuleTrailBase* UParticleModuleTrailBase::StaticClass() {
    static auto res = find_uobject("Class /Script/Engine.ParticleModuleTrailBase");
    return (UParticleModuleTrailBase*)res;
}
