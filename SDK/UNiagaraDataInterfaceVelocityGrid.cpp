#include "FIntVector.hpp"
#include "UNiagaraDataInterfaceRWBase.hpp"
#include "UNiagaraDataInterfaceVelocityGrid.hpp"
UNiagaraDataInterfaceVelocityGrid* UNiagaraDataInterfaceVelocityGrid::StaticClass() {
    static auto res = find_uobject("Class /Script/HairStrandsCore.NiagaraDataInterfaceVelocityGrid");
    return (UNiagaraDataInterfaceVelocityGrid*)res;
}
