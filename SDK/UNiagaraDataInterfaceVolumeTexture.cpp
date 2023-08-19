#include "UNiagaraDataInterface.hpp"
#include "UNiagaraDataInterfaceVolumeTexture.hpp"
#include "UVolumeTexture.hpp"
UNiagaraDataInterfaceVolumeTexture* UNiagaraDataInterfaceVolumeTexture::StaticClass() {
    static auto res = find_uobject("Class /Script/Niagara.NiagaraDataInterfaceVolumeTexture");
    return (UNiagaraDataInterfaceVolumeTexture*)res;
}
