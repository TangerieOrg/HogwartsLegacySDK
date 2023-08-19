#include "UGlobalLightGroupsRegionGroupDirectory.hpp"
#include "UGlobalLightGroupsRegionGroupRegistry.hpp"
#include "UGlobalLightGroupsWorldRegionGroupMap.hpp"
#include "UObject.hpp"
UGlobalLightGroupsRegionGroupDirectory* UGlobalLightGroupsRegionGroupDirectory::StaticClass() {
    static auto res = find_uobject("Class /Script/GlobalLightGroups.GlobalLightGroupsRegionGroupDirectory");
    return (UGlobalLightGroupsRegionGroupDirectory*)res;
}
