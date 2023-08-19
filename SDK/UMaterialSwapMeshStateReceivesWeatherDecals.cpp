#include "UMaterialSwapMeshStateBoolMap.hpp"
#include "UMaterialSwapMeshStateReceivesWeatherDecals.hpp"
UMaterialSwapMeshStateReceivesWeatherDecals* UMaterialSwapMeshStateReceivesWeatherDecals::StaticClass() {
    static auto res = find_uobject("Class /Script/MaterialPermuter.MaterialSwapMeshStateReceivesWeatherDecals");
    return (UMaterialSwapMeshStateReceivesWeatherDecals*)res;
}
