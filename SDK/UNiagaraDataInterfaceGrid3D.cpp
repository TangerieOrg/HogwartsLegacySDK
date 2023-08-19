#include "ESetResolutionMethod.hpp"
#include "FIntVector.hpp"
#include "FVector.hpp"
#include "UNiagaraDataInterfaceGrid3D.hpp"
#include "UNiagaraDataInterfaceRWBase.hpp"
UNiagaraDataInterfaceGrid3D* UNiagaraDataInterfaceGrid3D::StaticClass() {
    static auto res = find_uobject("Class /Script/Niagara.NiagaraDataInterfaceGrid3D");
    return (UNiagaraDataInterfaceGrid3D*)res;
}
