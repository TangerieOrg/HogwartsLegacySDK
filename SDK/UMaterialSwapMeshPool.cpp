#include "UMaterialSwapMeshPool.hpp"
#include "UMaterialSwapMeshPoolBase.hpp"
UMaterialSwapMeshPool* UMaterialSwapMeshPool::StaticClass() {
    static auto res = find_uobject("Class /Script/MaterialPermuter.MaterialSwapMeshPool");
    return (UMaterialSwapMeshPool*)res;
}
