#include "UAkAudioEvent.hpp"
#include "UNiagaraDataInterface.hpp"
#include "UNiagaraDataInterfaceAkEvent.hpp"
UNiagaraDataInterfaceAkEvent* UNiagaraDataInterfaceAkEvent::StaticClass() {
    static auto res = find_uobject("Class /Script/NiagaraHelpers.NiagaraDataInterfaceAkEvent");
    return (UNiagaraDataInterfaceAkEvent*)res;
}
