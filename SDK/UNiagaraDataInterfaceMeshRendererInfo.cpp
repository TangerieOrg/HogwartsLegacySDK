#include "UNiagaraDataInterface.hpp"
#include "UNiagaraDataInterfaceMeshRendererInfo.hpp"
#include "UNiagaraMeshRendererProperties.hpp"
UNiagaraDataInterfaceMeshRendererInfo* UNiagaraDataInterfaceMeshRendererInfo::StaticClass() {
    static auto res = find_uobject("Class /Script/Niagara.NiagaraDataInterfaceMeshRendererInfo");
    return (UNiagaraDataInterfaceMeshRendererInfo*)res;
}
