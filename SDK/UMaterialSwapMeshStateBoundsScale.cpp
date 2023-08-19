#include "UMaterialSwapMeshStateBoundsScale.hpp"
#include "UMaterialSwapMeshStateFloatMap.hpp"
UMaterialSwapMeshStateBoundsScale* UMaterialSwapMeshStateBoundsScale::StaticClass() {
    static auto res = find_uobject("Class /Script/MaterialPermuter.MaterialSwapMeshStateBoundsScale");
    return (UMaterialSwapMeshStateBoundsScale*)res;
}
