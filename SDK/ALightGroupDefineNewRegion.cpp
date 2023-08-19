#include "ALightGroupDefineNewRegion.hpp"
#include "AVolume.hpp"
#include "FGlobalLightGroupsRegionGroups.hpp"
#include "ULightOnOffFXList.hpp"
ALightGroupDefineNewRegion* ALightGroupDefineNewRegion::StaticClass() {
    static auto res = find_uobject("Class /Script/GlobalLightGroups.LightGroupDefineNewRegion");
    return (ALightGroupDefineNewRegion*)res;
}
