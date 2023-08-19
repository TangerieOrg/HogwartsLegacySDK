#include "UMaterialSwapMeshStateForcedLodModel.hpp"
#include "UMaterialSwapMeshStateIntMap.hpp"
UMaterialSwapMeshStateForcedLodModel* UMaterialSwapMeshStateForcedLodModel::StaticClass() {
    static auto res = find_uobject("Class /Script/MaterialPermuter.MaterialSwapMeshStateForcedLodModel");
    return (UMaterialSwapMeshStateForcedLodModel*)res;
}
