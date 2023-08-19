#include "FLightingChannels.hpp"
#include "UMaterialSwapMeshStateIntMap.hpp"
#include "UMaterialSwapMeshStateLightingChannels.hpp"
UMaterialSwapMeshStateLightingChannels* UMaterialSwapMeshStateLightingChannels::StaticClass() {
    static auto res = find_uobject("Class /Script/MaterialPermuter.MaterialSwapMeshStateLightingChannels");
    return (UMaterialSwapMeshStateLightingChannels*)res;
}
