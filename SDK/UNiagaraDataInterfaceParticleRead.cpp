#include "UNiagaraDataInterfaceParticleRead.hpp"
#include "UNiagaraDataInterfaceRWBase.hpp"
UNiagaraDataInterfaceParticleRead* UNiagaraDataInterfaceParticleRead::StaticClass() {
    static auto res = find_uobject("Class /Script/Niagara.NiagaraDataInterfaceParticleRead");
    return (UNiagaraDataInterfaceParticleRead*)res;
}
