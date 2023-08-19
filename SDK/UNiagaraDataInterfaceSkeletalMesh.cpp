#include "AActor.hpp"
#include "ENDISkeletalMesh_SkinningMode.hpp"
#include "ENDISkeletalMesh_SourceMode.hpp"
#include "FNiagaraUserParameterBinding.hpp"
#include "UNiagaraDataInterface.hpp"
#include "UNiagaraDataInterfaceSkeletalMesh.hpp"
#include "USkeletalMeshComponent.hpp"
UNiagaraDataInterfaceSkeletalMesh* UNiagaraDataInterfaceSkeletalMesh::StaticClass() {
    static auto res = find_uobject("Class /Script/Niagara.NiagaraDataInterfaceSkeletalMesh");
    return (UNiagaraDataInterfaceSkeletalMesh*)res;
}
