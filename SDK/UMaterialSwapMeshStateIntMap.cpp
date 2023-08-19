#include "UMaterialSwapMeshState.hpp"
#include "UMaterialSwapMeshStateIntMap.hpp"
UMaterialSwapMeshStateIntMap* UMaterialSwapMeshStateIntMap::StaticClass() {
    static auto res = find_uobject("Class /Script/MaterialPermuter.MaterialSwapMeshStateIntMap");
    return (UMaterialSwapMeshStateIntMap*)res;
}
