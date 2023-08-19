#include "UMaterialSwapMeshStateBoolMap.hpp"
#include "UMaterialSwapMeshStateRenderCustomDepth.hpp"
UMaterialSwapMeshStateRenderCustomDepth* UMaterialSwapMeshStateRenderCustomDepth::StaticClass() {
    static auto res = find_uobject("Class /Script/MaterialPermuter.MaterialSwapMeshStateRenderCustomDepth");
    return (UMaterialSwapMeshStateRenderCustomDepth*)res;
}
