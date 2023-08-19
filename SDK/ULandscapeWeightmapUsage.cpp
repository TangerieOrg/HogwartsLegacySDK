#include "FGuid.hpp"
#include "ULandscapeComponent.hpp"
#include "ULandscapeWeightmapUsage.hpp"
#include "UObject.hpp"
ULandscapeWeightmapUsage* ULandscapeWeightmapUsage::StaticClass() {
    static auto res = find_uobject("Class /Script/Landscape.LandscapeWeightmapUsage");
    return (ULandscapeWeightmapUsage*)res;
}
