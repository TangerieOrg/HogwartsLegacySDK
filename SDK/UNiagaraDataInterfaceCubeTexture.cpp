#include "UNiagaraDataInterface.hpp"
#include "UNiagaraDataInterfaceCubeTexture.hpp"
#include "UTextureCube.hpp"
UNiagaraDataInterfaceCubeTexture* UNiagaraDataInterfaceCubeTexture::StaticClass() {
    static auto res = find_uobject("Class /Script/Niagara.NiagaraDataInterfaceCubeTexture");
    return (UNiagaraDataInterfaceCubeTexture*)res;
}
