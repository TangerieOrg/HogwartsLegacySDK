#include "UMaterialSwapMeshState.hpp"
#include "UMaterialSwapMeshStateBoolMap.hpp"
UMaterialSwapMeshStateBoolMap* UMaterialSwapMeshStateBoolMap::StaticClass() {
    static auto res = find_uobject("Class /Script/MaterialPermuter.MaterialSwapMeshStateBoolMap");
    return (UMaterialSwapMeshStateBoolMap*)res;
}
