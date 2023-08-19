#include "UParticleModule.hpp"
#include "UParticleModuleSizeBase.hpp"
UParticleModuleSizeBase* UParticleModuleSizeBase::StaticClass() {
    static auto res = find_uobject("Class /Script/Engine.ParticleModuleSizeBase");
    return (UParticleModuleSizeBase*)res;
}
