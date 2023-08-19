#include "UMaterialSwapMeshStateData.hpp"
#include "UMaterialSwapMeshStateDataIntMap.hpp"
UMaterialSwapMeshStateDataIntMap* UMaterialSwapMeshStateDataIntMap::StaticClass() {
    static auto res = find_uobject("Class /Script/MaterialPermuter.MaterialSwapMeshStateDataIntMap");
    return (UMaterialSwapMeshStateDataIntMap*)res;
}
