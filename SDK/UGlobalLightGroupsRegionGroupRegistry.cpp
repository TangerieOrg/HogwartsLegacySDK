#include "FGlobalLightGroupsRegionGroups.hpp"
#include "UDataAsset.hpp"
#include "UGlobalLightGroupsNamedLightComponentSchedules.hpp"
#include "UGlobalLightGroupsRegionGroupRegistry.hpp"
UGlobalLightGroupsRegionGroupRegistry* UGlobalLightGroupsRegionGroupRegistry::StaticClass() {
    static auto res = find_uobject("Class /Script/GlobalLightGroups.GlobalLightGroupsRegionGroupRegistry");
    return (UGlobalLightGroupsRegionGroupRegistry*)res;
}
