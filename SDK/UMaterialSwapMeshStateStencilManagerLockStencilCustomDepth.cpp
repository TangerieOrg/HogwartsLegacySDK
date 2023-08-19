#include "UMaterialSwapMeshState.hpp"
#include "UMaterialSwapMeshStateStencilManagerLockStencilCustomDepth.hpp"
UMaterialSwapMeshStateStencilManagerLockStencilCustomDepth* UMaterialSwapMeshStateStencilManagerLockStencilCustomDepth::StaticClass() {
    static auto res = find_uobject("Class /Script/Phoenix.MaterialSwapMeshStateStencilManagerLockStencilCustomDepth");
    return (UMaterialSwapMeshStateStencilManagerLockStencilCustomDepth*)res;
}
