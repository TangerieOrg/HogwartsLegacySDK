#include "UMaterialSwapMeshStateBoolMap.hpp"
#include "UMaterialSwapMeshStateCastShadow.hpp"
UMaterialSwapMeshStateCastShadow* UMaterialSwapMeshStateCastShadow::StaticClass() {
    static auto res = find_uobject("Class /Script/MaterialPermuter.MaterialSwapMeshStateCastShadow");
    return (UMaterialSwapMeshStateCastShadow*)res;
}
