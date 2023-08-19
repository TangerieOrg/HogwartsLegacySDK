#include "UMaterialSwapMeshStateBoolMap.hpp"
#include "UMaterialSwapMeshStateSelfShadowOnly.hpp"
UMaterialSwapMeshStateSelfShadowOnly* UMaterialSwapMeshStateSelfShadowOnly::StaticClass() {
    static auto res = find_uobject("Class /Script/MaterialPermuter.MaterialSwapMeshStateSelfShadowOnly");
    return (UMaterialSwapMeshStateSelfShadowOnly*)res;
}
