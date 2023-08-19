#include "UMaterialSwapMeshStateBoolMap.hpp"
#include "UMaterialSwapMeshStateTreatAsBackgroundForOcclusion.hpp"
UMaterialSwapMeshStateTreatAsBackgroundForOcclusion* UMaterialSwapMeshStateTreatAsBackgroundForOcclusion::StaticClass() {
    static auto res = find_uobject("Class /Script/MaterialPermuter.MaterialSwapMeshStateTreatAsBackgroundForOcclusion");
    return (UMaterialSwapMeshStateTreatAsBackgroundForOcclusion*)res;
}
