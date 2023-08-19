#include "UClass.hpp"
#include "UFoliageType.hpp"
#include "UFoliageType_InstancedStaticMesh.hpp"
#include "UMaterialInterface.hpp"
#include "UStaticMesh.hpp"
UFoliageType_InstancedStaticMesh* UFoliageType_InstancedStaticMesh::StaticClass() {
    static auto res = find_uobject("Class /Script/Foliage.FoliageType_InstancedStaticMesh");
    return (UFoliageType_InstancedStaticMesh*)res;
}
