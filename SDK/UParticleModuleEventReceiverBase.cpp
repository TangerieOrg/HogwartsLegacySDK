#include "EParticleEventType.hpp"
#include "UParticleModuleEventBase.hpp"
#include "UParticleModuleEventReceiverBase.hpp"
UParticleModuleEventReceiverBase* UParticleModuleEventReceiverBase::StaticClass() {
    static auto res = find_uobject("Class /Script/Engine.ParticleModuleEventReceiverBase");
    return (UParticleModuleEventReceiverBase*)res;
}
