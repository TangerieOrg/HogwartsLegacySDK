#include "UMaterialSwapMeshStateCustomDepthStencilValue.hpp"
#include "UMaterialSwapMeshStateIntMap.hpp"
UMaterialSwapMeshStateCustomDepthStencilValue* UMaterialSwapMeshStateCustomDepthStencilValue::StaticClass() {
    static auto res = find_uobject("Class /Script/MaterialPermuter.MaterialSwapMeshStateCustomDepthStencilValue");
    return (UMaterialSwapMeshStateCustomDepthStencilValue*)res;
}
