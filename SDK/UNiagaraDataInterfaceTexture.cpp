#include "UNiagaraDataInterface.hpp"
#include "UNiagaraDataInterfaceTexture.hpp"
#include "UTexture.hpp"
UNiagaraDataInterfaceTexture* UNiagaraDataInterfaceTexture::StaticClass() {
    static auto res = find_uobject("Class /Script/Niagara.NiagaraDataInterfaceTexture");
    return (UNiagaraDataInterfaceTexture*)res;
}
