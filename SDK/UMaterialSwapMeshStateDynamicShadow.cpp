#include "UMaterialSwapMeshStateBoolMap.hpp"
#include "UMaterialSwapMeshStateDynamicShadow.hpp"
UMaterialSwapMeshStateDynamicShadow* UMaterialSwapMeshStateDynamicShadow::StaticClass() {
    static auto res = find_uobject("Class /Script/MaterialPermuter.MaterialSwapMeshStateDynamicShadow");
    return (UMaterialSwapMeshStateDynamicShadow*)res;
}
