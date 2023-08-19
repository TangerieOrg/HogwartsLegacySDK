#include "UMaterialSwapMeshStateData.hpp"
#include "UMaterialSwapMeshStateDataFloatMap.hpp"
UMaterialSwapMeshStateDataFloatMap* UMaterialSwapMeshStateDataFloatMap::StaticClass() {
    static auto res = find_uobject("Class /Script/MaterialPermuter.MaterialSwapMeshStateDataFloatMap");
    return (UMaterialSwapMeshStateDataFloatMap*)res;
}
