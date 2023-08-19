#include "FIntPoint.hpp"
#include "FNiagaraUserParameterBinding.hpp"
#include "UNiagaraDataInterfaceIntRenderTarget2D.hpp"
#include "UNiagaraDataInterfaceRWBase.hpp"
UNiagaraDataInterfaceIntRenderTarget2D* UNiagaraDataInterfaceIntRenderTarget2D::StaticClass() {
    static auto res = find_uobject("Class /Script/Niagara.NiagaraDataInterfaceIntRenderTarget2D");
    return (UNiagaraDataInterfaceIntRenderTarget2D*)res;
}
