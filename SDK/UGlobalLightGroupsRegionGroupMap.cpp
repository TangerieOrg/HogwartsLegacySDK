#include "UGlobalLightGroupsRegionGroupMap.hpp"
#include "UObject.hpp"
UGlobalLightGroupsRegionGroupMap* UGlobalLightGroupsRegionGroupMap::StaticClass() {
    static auto res = find_uobject("Class /Script/GlobalLightGroups.GlobalLightGroupsRegionGroupMap");
    return (UGlobalLightGroupsRegionGroupMap*)res;
}
