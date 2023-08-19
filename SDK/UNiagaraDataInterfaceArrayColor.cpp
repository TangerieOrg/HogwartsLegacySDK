#include "FLinearColor.hpp"
#include "UNiagaraDataInterfaceArray.hpp"
#include "UNiagaraDataInterfaceArrayColor.hpp"
UNiagaraDataInterfaceArrayColor* UNiagaraDataInterfaceArrayColor::StaticClass() {
    static auto res = find_uobject("Class /Script/Niagara.NiagaraDataInterfaceArrayColor");
    return (UNiagaraDataInterfaceArrayColor*)res;
}
