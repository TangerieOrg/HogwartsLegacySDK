#include "UParticleModule.hpp"
#include "UParticleModuleEventBase.hpp"
UParticleModuleEventBase* UParticleModuleEventBase::StaticClass() {
    static auto res = find_uobject("Class /Script/Engine.ParticleModuleEventBase");
    return (UParticleModuleEventBase*)res;
}
