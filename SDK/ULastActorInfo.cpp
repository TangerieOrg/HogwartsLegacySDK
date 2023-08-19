#include "AActor.hpp"
#include "ULastActorInfo.hpp"
#include "UNewMeshMaterialProperties.hpp"
#include "UObject.hpp"
#include "UProceduralShapeToolProperties.hpp"
#include "UStaticMesh.hpp"
ULastActorInfo* ULastActorInfo::StaticClass() {
    static auto res = find_uobject("Class /Script/MeshModelingTools.LastActorInfo");
    return (ULastActorInfo*)res;
}
