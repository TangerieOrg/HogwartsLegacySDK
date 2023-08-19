#include "UParticleModule.hpp"
#include "UParticleModuleBeamBase.hpp"
UParticleModuleBeamBase* UParticleModuleBeamBase::StaticClass() {
    static auto res = find_uobject("Class /Script/Engine.ParticleModuleBeamBase");
    return (UParticleModuleBeamBase*)res;
}
