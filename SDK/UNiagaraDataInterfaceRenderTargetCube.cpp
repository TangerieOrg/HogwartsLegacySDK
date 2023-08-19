#include "ETextureRenderTargetFormat.hpp"
#include "FNiagaraUserParameterBinding.hpp"
#include "UNiagaraDataInterfaceRWBase.hpp"
#include "UNiagaraDataInterfaceRenderTargetCube.hpp"
UNiagaraDataInterfaceRenderTargetCube* UNiagaraDataInterfaceRenderTargetCube::StaticClass() {
    static auto res = find_uobject("Class /Script/Niagara.NiagaraDataInterfaceRenderTargetCube");
    return (UNiagaraDataInterfaceRenderTargetCube*)res;
}
