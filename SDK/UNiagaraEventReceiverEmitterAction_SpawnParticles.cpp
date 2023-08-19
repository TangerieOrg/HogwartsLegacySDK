#include "UNiagaraEventReceiverEmitterAction.hpp"
#include "UNiagaraEventReceiverEmitterAction_SpawnParticles.hpp"
UNiagaraEventReceiverEmitterAction_SpawnParticles* UNiagaraEventReceiverEmitterAction_SpawnParticles::StaticClass() {
    static auto res = find_uobject("Class /Script/Niagara.NiagaraEventReceiverEmitterAction_SpawnParticles");
    return (UNiagaraEventReceiverEmitterAction_SpawnParticles*)res;
}
