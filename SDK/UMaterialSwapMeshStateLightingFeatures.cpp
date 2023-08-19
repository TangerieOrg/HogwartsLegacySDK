#include "FMeshStateLightingFeatures.hpp"
#include "UMaterialSwapMeshStateIntMap.hpp"
#include "UMaterialSwapMeshStateLightingFeatures.hpp"
UMaterialSwapMeshStateLightingFeatures* UMaterialSwapMeshStateLightingFeatures::StaticClass() {
    static auto res = find_uobject("Class /Script/Phoenix.MaterialSwapMeshStateLightingFeatures");
    return (UMaterialSwapMeshStateLightingFeatures*)res;
}
