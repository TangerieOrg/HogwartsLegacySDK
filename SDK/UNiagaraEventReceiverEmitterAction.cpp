#include "UNiagaraEventReceiverEmitterAction.hpp"
#include "UObject.hpp"
UNiagaraEventReceiverEmitterAction* UNiagaraEventReceiverEmitterAction::StaticClass() {
    static auto res = find_uobject("Class /Script/Niagara.NiagaraEventReceiverEmitterAction");
    return (UNiagaraEventReceiverEmitterAction*)res;
}
