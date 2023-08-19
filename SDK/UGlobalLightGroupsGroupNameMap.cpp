#include "UGlobalLightGroupsGroupNameMap.hpp"
#include "UGlobalLightGroupsNamedGroupSchedules.hpp"
#include "UGlobalLightGroupsNamedLightComponentSchedules.hpp"
#include "UObject.hpp"
UGlobalLightGroupsGroupNameMap* UGlobalLightGroupsGroupNameMap::StaticClass() {
    static auto res = find_uobject("Class /Script/GlobalLightGroups.GlobalLightGroupsGroupNameMap");
    return (UGlobalLightGroupsGroupNameMap*)res;
}
