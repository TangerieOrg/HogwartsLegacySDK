#include "UMaterialSwapMeshStateAddTag.hpp"
#include "UMaterialSwapMeshStateTag.hpp"
UMaterialSwapMeshStateAddTag* UMaterialSwapMeshStateAddTag::StaticClass() {
    static auto res = find_uobject("Class /Script/MaterialPermuter.MaterialSwapMeshStateAddTag");
    return (UMaterialSwapMeshStateAddTag*)res;
}
