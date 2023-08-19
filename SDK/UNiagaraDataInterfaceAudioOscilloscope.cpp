#include "UNiagaraDataInterface.hpp"
#include "UNiagaraDataInterfaceAudioOscilloscope.hpp"
#include "USoundSubmix.hpp"
UNiagaraDataInterfaceAudioOscilloscope* UNiagaraDataInterfaceAudioOscilloscope::StaticClass() {
    static auto res = find_uobject("Class /Script/Niagara.NiagaraDataInterfaceAudioOscilloscope");
    return (UNiagaraDataInterfaceAudioOscilloscope*)res;
}
