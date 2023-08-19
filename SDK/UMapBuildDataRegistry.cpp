#include "ELightingBuildQuality.hpp"
#include "UMapBuildDataRegistry.hpp"
#include "UObject.hpp"
UMapBuildDataRegistry* UMapBuildDataRegistry::StaticClass() {
    static auto res = find_uobject("Class /Script/Engine.MapBuildDataRegistry");
    return (UMapBuildDataRegistry*)res;
}
