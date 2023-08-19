#include "UParticleModule.hpp"
#include "UParticleModuleColorBase.hpp"
UParticleModuleColorBase* UParticleModuleColorBase::StaticClass() {
    static auto res = find_uobject("Class /Script/Engine.ParticleModuleColorBase");
    return (UParticleModuleColorBase*)res;
}
