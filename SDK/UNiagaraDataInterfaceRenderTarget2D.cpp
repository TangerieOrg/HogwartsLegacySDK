#include "ENiagaraMipMapGeneration.hpp"
#include "ETextureRenderTargetFormat.hpp"
#include "FIntPoint.hpp"
#include "FNiagaraUserParameterBinding.hpp"
#include "UNiagaraDataInterfaceRWBase.hpp"
#include "UNiagaraDataInterfaceRenderTarget2D.hpp"
UNiagaraDataInterfaceRenderTarget2D* UNiagaraDataInterfaceRenderTarget2D::StaticClass() {
    static auto res = find_uobject("Class /Script/Niagara.NiagaraDataInterfaceRenderTarget2D");
    return (UNiagaraDataInterfaceRenderTarget2D*)res;
}
