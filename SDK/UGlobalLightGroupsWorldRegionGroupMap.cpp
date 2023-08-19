#include "UGlobalLightGroupsRegionGroupMap.hpp"
#include "UGlobalLightGroupsWorldRegionGroupMap.hpp"
#include "UObject.hpp"
UGlobalLightGroupsWorldRegionGroupMap* UGlobalLightGroupsWorldRegionGroupMap::StaticClass() {
    static auto res = find_uobject("Class /Script/GlobalLightGroups.GlobalLightGroupsWorldRegionGroupMap");
    return (UGlobalLightGroupsWorldRegionGroupMap*)res;
}
