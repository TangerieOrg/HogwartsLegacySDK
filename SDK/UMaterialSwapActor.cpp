#include "EMaterialSwapRefreshType.hpp"
#include "UMaterialSwapActor.hpp"
#include "UMaterialSwapMeshPoolBase.hpp"
UMaterialSwapActor* UMaterialSwapActor::StaticClass() {
    static auto res = find_uobject("Class /Script/MaterialPermuter.MaterialSwapActor");
    return (UMaterialSwapActor*)res;
}
