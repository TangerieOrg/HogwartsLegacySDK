#include "UMaterialSwapMeshStateBoolMap.hpp"
#include "UMaterialSwapMeshStateCapsuleShadow.hpp"
UMaterialSwapMeshStateCapsuleShadow* UMaterialSwapMeshStateCapsuleShadow::StaticClass() {
    static auto res = find_uobject("Class /Script/Phoenix.MaterialSwapMeshStateCapsuleShadow");
    return (UMaterialSwapMeshStateCapsuleShadow*)res;
}
