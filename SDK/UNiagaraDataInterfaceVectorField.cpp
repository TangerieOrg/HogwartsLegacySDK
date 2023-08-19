#include "UNiagaraDataInterface.hpp"
#include "UNiagaraDataInterfaceVectorField.hpp"
#include "UVectorField.hpp"
UNiagaraDataInterfaceVectorField* UNiagaraDataInterfaceVectorField::StaticClass() {
    static auto res = find_uobject("Class /Script/Niagara.NiagaraDataInterfaceVectorField");
    return (UNiagaraDataInterfaceVectorField*)res;
}
