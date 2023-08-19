#include "UMaterialSwapMeshStateData.hpp"
#include "UMaterialSwapMeshStateStencilManagerLockStencilCustomDepthData.hpp"
UMaterialSwapMeshStateStencilManagerLockStencilCustomDepthData* UMaterialSwapMeshStateStencilManagerLockStencilCustomDepthData::StaticClass() {
    static auto res = find_uobject("Class /Script/Phoenix.MaterialSwapMeshStateStencilManagerLockStencilCustomDepthData");
    return (UMaterialSwapMeshStateStencilManagerLockStencilCustomDepthData*)res;
}
