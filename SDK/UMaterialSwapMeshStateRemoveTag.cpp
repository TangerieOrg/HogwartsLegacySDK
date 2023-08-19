#include "UMaterialSwapMeshStateRemoveTag.hpp"
#include "UMaterialSwapMeshStateTag.hpp"
UMaterialSwapMeshStateRemoveTag* UMaterialSwapMeshStateRemoveTag::StaticClass() {
    static auto res = find_uobject("Class /Script/MaterialPermuter.MaterialSwapMeshStateRemoveTag");
    return (UMaterialSwapMeshStateRemoveTag*)res;
}
