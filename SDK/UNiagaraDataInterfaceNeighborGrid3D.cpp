#include "UNiagaraDataInterfaceGrid3D.hpp"
#include "UNiagaraDataInterfaceNeighborGrid3D.hpp"
UNiagaraDataInterfaceNeighborGrid3D* UNiagaraDataInterfaceNeighborGrid3D::StaticClass() {
    static auto res = find_uobject("Class /Script/Niagara.NiagaraDataInterfaceNeighborGrid3D");
    return (UNiagaraDataInterfaceNeighborGrid3D*)res;
}
