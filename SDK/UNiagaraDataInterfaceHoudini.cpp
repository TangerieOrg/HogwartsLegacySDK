#include "UHoudiniPointCache.hpp"
#include "UNiagaraDataInterface.hpp"
#include "UNiagaraDataInterfaceHoudini.hpp"
UNiagaraDataInterfaceHoudini* UNiagaraDataInterfaceHoudini::StaticClass() {
    static auto res = find_uobject("Class /Script/HoudiniNiagara.NiagaraDataInterfaceHoudini");
    return (UNiagaraDataInterfaceHoudini*)res;
}
