#include "UMaterialSwapMeshStateBoolMap.hpp"
#include "UMaterialSwapMeshStateReceivesDecals.hpp"
UMaterialSwapMeshStateReceivesDecals* UMaterialSwapMeshStateReceivesDecals::StaticClass() {
    static auto res = find_uobject("Class /Script/MaterialPermuter.MaterialSwapMeshStateReceivesDecals");
    return (UMaterialSwapMeshStateReceivesDecals*)res;
}
