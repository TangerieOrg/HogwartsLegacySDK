#include "UMaterialSwapMeshStateData.hpp"
#include "UMaterialSwapMeshStateDataBoolMap.hpp"
UMaterialSwapMeshStateDataBoolMap* UMaterialSwapMeshStateDataBoolMap::StaticClass() {
    static auto res = find_uobject("Class /Script/MaterialPermuter.MaterialSwapMeshStateDataBoolMap");
    return (UMaterialSwapMeshStateDataBoolMap*)res;
}
