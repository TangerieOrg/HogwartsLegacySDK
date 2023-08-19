#include "UMaterialSwapMeshState.hpp"
#include "UObject.hpp"
UMaterialSwapMeshState* UMaterialSwapMeshState::StaticClass() {
    static auto res = find_uobject("Class /Script/MaterialPermuter.MaterialSwapMeshState");
    return (UMaterialSwapMeshState*)res;
}
