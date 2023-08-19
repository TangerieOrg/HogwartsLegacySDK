#include "UParticleModule.hpp"
#include "UParticleModuleAttractorBase.hpp"
UParticleModuleAttractorBase* UParticleModuleAttractorBase::StaticClass() {
    static auto res = find_uobject("Class /Script/Engine.ParticleModuleAttractorBase");
    return (UParticleModuleAttractorBase*)res;
}
