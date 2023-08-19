#include "FMaterialSwapMeshStatesAndData.hpp"
#include "UMaterialSwap.hpp"
#include "UMaterialSwapMeshPoolBase.hpp"
UMaterialSwapMeshPoolBase* UMaterialSwapMeshPoolBase::StaticClass() {
    static auto res = find_uobject("Class /Script/MaterialPermuter.MaterialSwapMeshPoolBase");
    return (UMaterialSwapMeshPoolBase*)res;
}
