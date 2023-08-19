#include "UNiagaraDataInterface.hpp"
#include "UNiagaraDataInterfaceSimpleCounter.hpp"
UNiagaraDataInterfaceSimpleCounter* UNiagaraDataInterfaceSimpleCounter::StaticClass() {
    static auto res = find_uobject("Class /Script/Niagara.NiagaraDataInterfaceSimpleCounter");
    return (UNiagaraDataInterfaceSimpleCounter*)res;
}
