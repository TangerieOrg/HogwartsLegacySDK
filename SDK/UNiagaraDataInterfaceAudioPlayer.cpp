#include "UNiagaraDataInterface.hpp"
#include "UNiagaraDataInterfaceAudioPlayer.hpp"
#include "USoundAttenuation.hpp"
#include "USoundBase.hpp"
#include "USoundConcurrency.hpp"
UNiagaraDataInterfaceAudioPlayer* UNiagaraDataInterfaceAudioPlayer::StaticClass() {
    static auto res = find_uobject("Class /Script/Niagara.NiagaraDataInterfaceAudioPlayer");
    return (UNiagaraDataInterfaceAudioPlayer*)res;
}
