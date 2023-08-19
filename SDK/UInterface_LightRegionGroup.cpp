#include "UInterface.hpp"
#include "UInterface_LightRegionGroup.hpp"
UInterface_LightRegionGroup* UInterface_LightRegionGroup::StaticClass() {
    static auto res = find_uobject("Class /Script/GlobalLightGroups.Interface_LightRegionGroup");
    return (UInterface_LightRegionGroup*)res;
}
