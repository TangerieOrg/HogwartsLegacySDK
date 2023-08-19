#include "AActor.hpp"
#include "ENDIStaticMesh_SourceMode.hpp"
#include "FNDIStaticMeshSectionFilter.hpp"
#include "UNiagaraDataInterface.hpp"
#include "UNiagaraDataInterfaceStaticMesh.hpp"
#include "UStaticMesh.hpp"
#include "UStaticMeshComponent.hpp"
UNiagaraDataInterfaceStaticMesh* UNiagaraDataInterfaceStaticMesh::StaticClass() {
    static auto res = find_uobject("Class /Script/Niagara.NiagaraDataInterfaceStaticMesh");
    return (UNiagaraDataInterfaceStaticMesh*)res;
}
