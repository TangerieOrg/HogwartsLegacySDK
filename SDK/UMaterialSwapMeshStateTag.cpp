#include "UMaterialSwapMeshStateBoolMap.hpp"
#include "UMaterialSwapMeshStateTag.hpp"
UMaterialSwapMeshStateTag* UMaterialSwapMeshStateTag::StaticClass() {
    static auto res = find_uobject("Class /Script/MaterialPermuter.MaterialSwapMeshStateTag");
    return (UMaterialSwapMeshStateTag*)res;
}
