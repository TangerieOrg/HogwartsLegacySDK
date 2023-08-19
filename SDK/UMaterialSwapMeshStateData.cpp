#include "UMaterialSwapMeshStateData.hpp"
#include "UObject.hpp"
UMaterialSwapMeshStateData* UMaterialSwapMeshStateData::StaticClass() {
    static auto res = find_uobject("Class /Script/MaterialPermuter.MaterialSwapMeshStateData");
    return (UMaterialSwapMeshStateData*)res;
}
