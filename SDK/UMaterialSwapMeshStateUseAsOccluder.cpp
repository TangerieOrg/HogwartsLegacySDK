#include "UMaterialSwapMeshStateBoolMap.hpp"
#include "UMaterialSwapMeshStateUseAsOccluder.hpp"
UMaterialSwapMeshStateUseAsOccluder* UMaterialSwapMeshStateUseAsOccluder::StaticClass() {
    static auto res = find_uobject("Class /Script/MaterialPermuter.MaterialSwapMeshStateUseAsOccluder");
    return (UMaterialSwapMeshStateUseAsOccluder*)res;
}
