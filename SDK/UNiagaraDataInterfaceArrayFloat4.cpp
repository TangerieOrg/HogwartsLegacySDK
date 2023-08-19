#include "FVector4.hpp"
#include "UNiagaraDataInterfaceArray.hpp"
#include "UNiagaraDataInterfaceArrayFloat4.hpp"
UNiagaraDataInterfaceArrayFloat4* UNiagaraDataInterfaceArrayFloat4::StaticClass() {
    static auto res = find_uobject("Class /Script/Niagara.NiagaraDataInterfaceArrayFloat4");
    return (UNiagaraDataInterfaceArrayFloat4*)res;
}
