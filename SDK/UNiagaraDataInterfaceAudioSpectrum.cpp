#include "UNiagaraDataInterfaceAudioSpectrum.hpp"
#include "UNiagaraDataInterfaceAudioSubmix.hpp"
UNiagaraDataInterfaceAudioSpectrum* UNiagaraDataInterfaceAudioSpectrum::StaticClass() {
    static auto res = find_uobject("Class /Script/Niagara.NiagaraDataInterfaceAudioSpectrum");
    return (UNiagaraDataInterfaceAudioSpectrum*)res;
}
