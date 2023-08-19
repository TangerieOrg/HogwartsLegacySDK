#include "UNiagaraDataInterfacePressureGrid.hpp"
#include "UNiagaraDataInterfaceVelocityGrid.hpp"
UNiagaraDataInterfacePressureGrid* UNiagaraDataInterfacePressureGrid::StaticClass() {
    static auto res = find_uobject("Class /Script/HairStrandsCore.NiagaraDataInterfacePressureGrid");
    return (UNiagaraDataInterfacePressureGrid*)res;
}
