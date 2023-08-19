#include "ETextureRenderTargetFormat.hpp"
#include "FIntVector.hpp"
#include "FNiagaraUserParameterBinding.hpp"
#include "UNiagaraDataInterfaceRWBase.hpp"
#include "UNiagaraDataInterfaceRenderTargetVolume.hpp"
UNiagaraDataInterfaceRenderTargetVolume* UNiagaraDataInterfaceRenderTargetVolume::StaticClass() {
    static auto res = find_uobject("Class /Script/Niagara.NiagaraDataInterfaceRenderTargetVolume");
    return (UNiagaraDataInterfaceRenderTargetVolume*)res;
}
