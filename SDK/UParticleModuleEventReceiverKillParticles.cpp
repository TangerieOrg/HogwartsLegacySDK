#include "UParticleModuleEventReceiverBase.hpp"
#include "UParticleModuleEventReceiverKillParticles.hpp"
UParticleModuleEventReceiverKillParticles* UParticleModuleEventReceiverKillParticles::StaticClass() {
    static auto res = find_uobject("Class /Script/Engine.ParticleModuleEventReceiverKillParticles");
    return (UParticleModuleEventReceiverKillParticles*)res;
}
