#include "ALevelScriptActor.hpp"
#include "AOverland_Global_RegionTileVolumes_C.hpp"
AOverland_Global_RegionTileVolumes_C* AOverland_Global_RegionTileVolumes_C::StaticClass() {
    static auto res = find_uobject("BlueprintGeneratedClass /Game/Levels/Overland/Overland_Global_RegionTileVolumes.Overland_Global_RegionTileVolumes_C");
    return (AOverland_Global_RegionTileVolumes_C*)res;
}
