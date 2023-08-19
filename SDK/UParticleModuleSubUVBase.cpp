#include "UParticleModule.hpp"
#include "UParticleModuleSubUVBase.hpp"
UParticleModuleSubUVBase* UParticleModuleSubUVBase::StaticClass() {
    static auto res = find_uobject("Class /Script/Engine.ParticleModuleSubUVBase");
    return (UParticleModuleSubUVBase*)res;
}
