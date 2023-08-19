#include "FVector2D.hpp"
#include "UNiagaraDataInterfaceArray.hpp"
#include "UNiagaraDataInterfaceArrayFloat2.hpp"
UNiagaraDataInterfaceArrayFloat2* UNiagaraDataInterfaceArrayFloat2::StaticClass() {
    static auto res = find_uobject("Class /Script/Niagara.NiagaraDataInterfaceArrayFloat2");
    return (UNiagaraDataInterfaceArrayFloat2*)res;
}
