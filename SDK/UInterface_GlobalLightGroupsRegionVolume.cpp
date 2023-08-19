#include "UInterface.hpp"
#include "UInterface_GlobalLightGroupsRegionVolume.hpp"
UInterface_GlobalLightGroupsRegionVolume* UInterface_GlobalLightGroupsRegionVolume::StaticClass() {
    static auto res = find_uobject("Class /Script/GlobalLightGroups.Interface_GlobalLightGroupsRegionVolume");
    return (UInterface_GlobalLightGroupsRegionVolume*)res;
}
