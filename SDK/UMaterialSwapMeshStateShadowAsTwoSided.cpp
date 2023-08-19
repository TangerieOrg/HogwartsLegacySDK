#include "UMaterialSwapMeshStateBoolMap.hpp"
#include "UMaterialSwapMeshStateShadowAsTwoSided.hpp"
UMaterialSwapMeshStateShadowAsTwoSided* UMaterialSwapMeshStateShadowAsTwoSided::StaticClass() {
    static auto res = find_uobject("Class /Script/MaterialPermuter.MaterialSwapMeshStateShadowAsTwoSided");
    return (UMaterialSwapMeshStateShadowAsTwoSided*)res;
}
