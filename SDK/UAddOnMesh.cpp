#include "UAddOnMesh.hpp"
#include "UNiagaraComponent.hpp"
#include "UObject.hpp"
#include "USkeletalMeshComponent.hpp"
UAddOnMesh* UAddOnMesh::StaticClass() {
    static auto res = find_uobject("Class /Script/CustomizableCharacter.AddOnMesh");
    return (UAddOnMesh*)res;
}
