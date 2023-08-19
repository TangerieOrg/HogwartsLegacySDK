#include "UMaterialSwapMeshStateBoolMap.hpp"
#include "UMaterialSwapMeshStateIgnoreLightLeakingCorrection.hpp"
UMaterialSwapMeshStateIgnoreLightLeakingCorrection* UMaterialSwapMeshStateIgnoreLightLeakingCorrection::StaticClass() {
    static auto res = find_uobject("Class /Script/MaterialPermuter.MaterialSwapMeshStateIgnoreLightLeakingCorrection");
    return (UMaterialSwapMeshStateIgnoreLightLeakingCorrection*)res;
}
