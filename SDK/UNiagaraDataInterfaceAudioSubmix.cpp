#include "UNiagaraDataInterface.hpp"
#include "UNiagaraDataInterfaceAudioSubmix.hpp"
#include "USoundSubmix.hpp"
UNiagaraDataInterfaceAudioSubmix* UNiagaraDataInterfaceAudioSubmix::StaticClass() {
    static auto res = find_uobject("Class /Script/Niagara.NiagaraDataInterfaceAudioSubmix");
    return (UNiagaraDataInterfaceAudioSubmix*)res;
}
