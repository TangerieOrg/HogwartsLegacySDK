#include "ETextureRenderTargetFormat.hpp"
#include "FIntVector.hpp"
#include "FNiagaraUserParameterBinding.hpp"
#include "UNiagaraDataInterfaceRWBase.hpp"
#include "UNiagaraDataInterfaceRenderTarget2DArray.hpp"
UNiagaraDataInterfaceRenderTarget2DArray* UNiagaraDataInterfaceRenderTarget2DArray::StaticClass() {
    static auto res = find_uobject("Class /Script/Niagara.NiagaraDataInterfaceRenderTarget2DArray");
    return (UNiagaraDataInterfaceRenderTarget2DArray*)res;
}
