#include "UNiagaraDataInterfaceArray.hpp"
#include "UNiagaraDataInterfaceArrayBool.hpp"
UNiagaraDataInterfaceArrayBool* UNiagaraDataInterfaceArrayBool::StaticClass() {
    static auto res = find_uobject("Class /Script/Niagara.NiagaraDataInterfaceArrayBool");
    return (UNiagaraDataInterfaceArrayBool*)res;
}
