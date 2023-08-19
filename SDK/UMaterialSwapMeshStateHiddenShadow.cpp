#include "UMaterialSwapMeshStateBoolMap.hpp"
#include "UMaterialSwapMeshStateHiddenShadow.hpp"
UMaterialSwapMeshStateHiddenShadow* UMaterialSwapMeshStateHiddenShadow::StaticClass() {
    static auto res = find_uobject("Class /Script/MaterialPermuter.MaterialSwapMeshStateHiddenShadow");
    return (UMaterialSwapMeshStateHiddenShadow*)res;
}
