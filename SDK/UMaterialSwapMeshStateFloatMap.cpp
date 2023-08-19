#include "UMaterialSwapMeshState.hpp"
#include "UMaterialSwapMeshStateFloatMap.hpp"
UMaterialSwapMeshStateFloatMap* UMaterialSwapMeshStateFloatMap::StaticClass() {
    static auto res = find_uobject("Class /Script/MaterialPermuter.MaterialSwapMeshStateFloatMap");
    return (UMaterialSwapMeshStateFloatMap*)res;
}
