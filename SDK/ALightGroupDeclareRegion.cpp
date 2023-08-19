#include "ALightGroupDeclareRegion.hpp"
#include "AVolume.hpp"
#include "FGlobalLightGroupsRegionName.hpp"
#include "ULightOnOffFXList.hpp"
ALightGroupDeclareRegion* ALightGroupDeclareRegion::StaticClass() {
    static auto res = find_uobject("Class /Script/GlobalLightGroups.LightGroupDeclareRegion");
    return (ALightGroupDeclareRegion*)res;
}
