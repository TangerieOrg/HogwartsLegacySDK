#include "FNiagaraDataInterfaceAkEventInfo.hpp"
#include "UNiagaraDataInterface.hpp"
#include "UNiagaraDataInterfaceAkEventPerParticle.hpp"
UNiagaraDataInterfaceAkEventPerParticle* UNiagaraDataInterfaceAkEventPerParticle::StaticClass() {
    static auto res = find_uobject("Class /Script/NiagaraHelpers.NiagaraDataInterfaceAkEventPerParticle");
    return (UNiagaraDataInterfaceAkEventPerParticle*)res;
}
