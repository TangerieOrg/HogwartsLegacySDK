#include "UNiagaraDataInterface.hpp"
#include "UNiagaraDataInterfaceDebugDraw.hpp"
UNiagaraDataInterfaceDebugDraw* UNiagaraDataInterfaceDebugDraw::StaticClass() {
    static auto res = find_uobject("Class /Script/Niagara.NiagaraDataInterfaceDebugDraw");
    return (UNiagaraDataInterfaceDebugDraw*)res;
}
