#include "FVector2D.hpp"
#include "UNiagaraDataInterfaceGrid2D.hpp"
#include "UNiagaraDataInterfaceRWBase.hpp"
UNiagaraDataInterfaceGrid2D* UNiagaraDataInterfaceGrid2D::StaticClass() {
    static auto res = find_uobject("Class /Script/Niagara.NiagaraDataInterfaceGrid2D");
    return (UNiagaraDataInterfaceGrid2D*)res;
}
