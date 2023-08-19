#include "UMaterialSwapMeshStateBoolMap.hpp"
#include "UMaterialSwapMeshStateContactShadow.hpp"
UMaterialSwapMeshStateContactShadow* UMaterialSwapMeshStateContactShadow::StaticClass() {
    static auto res = find_uobject("Class /Script/MaterialPermuter.MaterialSwapMeshStateContactShadow");
    return (UMaterialSwapMeshStateContactShadow*)res;
}
