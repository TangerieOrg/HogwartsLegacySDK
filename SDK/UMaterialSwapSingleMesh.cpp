#include "FMaterialSwapMeshStatesAndData.hpp"
#include "FMeshMaterialSwap.hpp"
#include "UMaterialSwap.hpp"
#include "UMaterialSwapSingleMesh.hpp"
UMaterialSwapSingleMesh* UMaterialSwapSingleMesh::StaticClass() {
    static auto res = find_uobject("Class /Script/MaterialPermuter.MaterialSwapSingleMesh");
    return (UMaterialSwapSingleMesh*)res;
}
