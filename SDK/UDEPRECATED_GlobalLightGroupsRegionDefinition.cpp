#include "UDEPRECATED_GlobalLightGroupsRegionDefinition.hpp"
#include "UDataAsset.hpp"
UDEPRECATED_GlobalLightGroupsRegionDefinition* UDEPRECATED_GlobalLightGroupsRegionDefinition::StaticClass() {
    static auto res = find_uobject("Class /Script/GlobalLightGroups.GlobalLightGroupsRegionDefinition");
    return (UDEPRECATED_GlobalLightGroupsRegionDefinition*)res;
}
